#!/usr/bin/env node

/*
	Self Replication
*/

oussama = () => { return "#!/usr/bin/env node\n\n/*\n\tSelf Replication\n*/\n\noussama = %s \n\n(function main() {\n\t/*\n\t\tQuine is the Queen\n\t*/\n\tconsole.log(oussama(), oussama.toString())\n})()\n" } 

(function main() {
	/*
		Quine is the Queen
	*/
	console.log(oussama(), oussama.toString())
})()

