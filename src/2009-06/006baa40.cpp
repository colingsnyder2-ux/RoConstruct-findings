// from server: 100% by auto
// roc 2009-06 006baa40  unit: RBX::UniversalTool  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006baa40
//
// 006baa40  8b442408             mov eax, dword ptr [esp + 8]
// 006baa44  8b4804               mov ecx, dword ptr [eax + 4]
// 006baa47  85c9                 test ecx, ecx
// 006baa49  7503                 jne 0x6baa4e
// 006baa4b  33c0                 xor eax, eax
// 006baa4d  c3                   ret 
// 006baa4e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006baa52  890a                 mov dword ptr [edx], ecx
// 006baa54  c7400400000000       mov dword ptr [eax + 4], 0
// 006baa5b  8b00                 mov eax, dword ptr [eax]
// 006baa5d  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _getS)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
