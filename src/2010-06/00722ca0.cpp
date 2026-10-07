// roc 2010-06 00722ca0  unit: RBX::UniversalTool  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00722ca0
//
// 00722ca0  8b442408             mov eax, dword ptr [esp + 8]
// 00722ca4  8b4804               mov ecx, dword ptr [eax + 4]
// 00722ca7  85c9                 test ecx, ecx
// 00722ca9  7503                 jne 0x722cae
// 00722cab  33c0                 xor eax, eax
// 00722cad  c3                   ret 
// 00722cae  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00722cb2  890a                 mov dword ptr [edx], ecx
// 00722cb4  c7400400000000       mov dword ptr [eax + 4], 0
// 00722cbb  8b00                 mov eax, dword ptr [eax]
// 00722cbd  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _getS)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
