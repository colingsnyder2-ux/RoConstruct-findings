// from server: 100% by auto
// roc 2011-06 00763f10  unit: seg_00760000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00763f10
//
// 00763f10  8b442408             mov eax, dword ptr [esp + 8]
// 00763f14  8b4804               mov ecx, dword ptr [eax + 4]
// 00763f17  85c9                 test ecx, ecx
// 00763f19  7503                 jne 0x763f1e
// 00763f1b  33c0                 xor eax, eax
// 00763f1d  c3                   ret 
// 00763f1e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00763f22  890a                 mov dword ptr [edx], ecx
// 00763f24  c7400400000000       mov dword ptr [eax + 4], 0
// 00763f2b  8b00                 mov eax, dword ptr [eax]
// 00763f2d  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _getS)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
