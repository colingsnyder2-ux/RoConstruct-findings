// roc 2008-06 00611480  unit: RBX::BlockBlockContact  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00611480
//
// 00611480  8b442408             mov eax, dword ptr [esp + 8]
// 00611484  8b4804               mov ecx, dword ptr [eax + 4]
// 00611487  85c9                 test ecx, ecx
// 00611489  7503                 jne 0x61148e
// 0061148b  33c0                 xor eax, eax
// 0061148d  c3                   ret 
// 0061148e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00611492  890a                 mov dword ptr [edx], ecx
// 00611494  c7400400000000       mov dword ptr [eax + 4], 0
// 0061149b  8b00                 mov eax, dword ptr [eax]
// 0061149d  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _getS)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
