#!/usr/bin/env node

/*
	My little Grace
*/

const FS = require("fs");
const NAME = "Grace_kid.js";
code = () => { return '#!/usr/bin/env node\n\n/*\n\tMy little Grace\n*/\n\nconst FS = require("fs");\nconst NAME = "Grace_kid.js";\ncode = ' + code.toString() + ' \n\nFS.writeFileSync(NAME, code());\n' } 

FS.writeFileSync(NAME, code());
