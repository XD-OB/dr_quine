#!/usr/bin/env python3

# My little Grace

NAME = "Grace_kid.py"
FILE = open(NAME, "w")
GRACE = '#!/usr/bin/env python3\n\n# My little Grace\n\nNAME = "Grace_kid.py"\nFILE = open(NAME, "w")\nGRACE = {0}\n\nFILE.write(GRACE.format(repr(GRACE)))\nFILE.close()\n'

FILE.write(GRACE.format(repr(GRACE)))
FILE.close()
