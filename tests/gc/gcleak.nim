discard """
  outputsub: "no leak: "
"""

when defined(GC_setMaxPause):
  GC_setMaxPause 2_000

type
  TTestObj = object of TObject
    x: string

proc MakeObj(): TTestObj =
  result.x = "Hello"

for i in 1 .. 100_000_000:
  var obj = MakeObj()
  if getOccupiedMem() > 300_000: quit("still a leak!")
#  echo GC_getstatistics()

echo "no leak: ", getOccupiedMem()

