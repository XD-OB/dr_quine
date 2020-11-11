#!/usr/bin/env python3

import os

# Sully Fully Mully Tully

i = 5

if i > 0:
	if os.path.isfile("Sully_5.py"):
		i -= 1
	code = '#!/usr/bin/env python3\n\nimport os\n\n# Sully Fully Mully Tully\n\ni = {0}\n\nif i > 0:\n\tif os.path.isfile("Sully_5.py"):\n\t\ti -= 1\n\tcode = {1}\n\tfilename = "./Sully_"+str(i)+".py"\n\tfile = open(filename, "w")\n\tfile.write(code.format(i, repr(code)))\n\tfile.close()\n\tos.chmod(filename, 0o777)\n\tos.system(filename)'
	filename = "./Sully_"+str(i)+".py"
	file = open(filename, "w")
	file.write(code.format(i, repr(code)))
	file.close()
	os.chmod(filename, 0o777)
	os.system(filename)