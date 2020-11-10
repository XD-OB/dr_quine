#!/usr/bin/env python3

# Self Replication

def	oussama():
	code = "#!/usr/bin/env python3\n\n# Self Replication\n\ndef\toussama():\n\tcode = {0}\n\treturn code\n\ndef\tmain():\n\t# Quine is the Queen\n\tprint(oussama().format(repr(oussama())))\n\nif  __name__ == '__main__':\n\tmain()"
	return code

def	main():
	# Quine is the Queen
	print(oussama().format(repr(oussama())))

if  __name__ == '__main__':
	main()
