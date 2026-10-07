// roc 2009-06 006e9e00  unit: RBX::PartDropTool  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9e00
//
// 006e9e00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e9e04  56                   push esi
// 006e9e05  8b742408             mov esi, dword ptr [esp + 8]
// 006e9e09  50                   push eax
// 006e9e0a  56                   push esi
// 006e9e0b  e890240000           call 0x6ec2a0
// 006e9e10  83c408               add esp, 8
// 006e9e13  83780800             cmp dword ptr [eax + 8], 0
// 006e9e17  750d                 jne 0x6e9e26
// 006e9e19  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e9e1d  b201                 mov dl, 1
// 006e9e1f  d2e2                 shl dl, cl
// 006e9e21  085606               or byte ptr [esi + 6], dl
// 006e9e24  33c0                 xor eax, eax
// 006e9e26  5e                   pop esi
// 006e9e27  c3                   ret 
// library lua-5.1.4/ltm.c (function _luaT_gettm)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltm.c
