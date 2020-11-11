#!/usr/bin/env node

/*
	Sully Fully Mully Tully
*/

const	cprocess = require("child_process");
const	FS = require("fs");
var		i = 5;

(function main() {
    if (i > 0) {
        if (FS.existsSync('./Sully_5.js')) i--;
        const   filename = './Sully_' + String(i) + '.js';
        FS.writeFileSync(filename, '#!/usr/bin/env node\n\n/*\n\tSully Fully Mully Tully\n*/\n\nconst\tcprocess = require("child_process");\nconst\tFS = require("fs");\nvar\t\ti = ' + String(i) + ';\n\n(' + main.toString() + ')()');
        FS.chmodSync(filename, 0755);
        cprocess.execSync(filename);
    }
})()