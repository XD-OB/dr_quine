#!/usr/bin/env python3
'''
	Self Replication
'''

def	oussama():
	code = "#!/usr/bin/env python3\n'''\n\tSelf Replication\n'''\n\ndef\toussama():\n\tcode = {0}\n\treturn code\n\nprint(oussama().format(repr(oussama())))"
	return code

print(oussama().format(repr(oussama())))
