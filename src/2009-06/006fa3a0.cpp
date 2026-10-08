// from server: 100% by auto
// roc 2009-06 006fa3a0  unit: RBX::GroupDragTool  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fa3a0
//
// 006fa3a0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006fa3a4  56                   push esi
// 006fa3a5  8b742408             mov esi, dword ptr [esp + 8]
// 006fa3a9  8b460c               mov eax, dword ptr [esi + 0xc]
// 006fa3ac  8b4808               mov ecx, dword ptr [eax + 8]
// 006fa3af  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fa3b3  42                   inc edx
// 006fa3b4  c1e217               shl edx, 0x17
// 006fa3b7  c1e006               shl eax, 6
// 006fa3ba  0bd0                 or edx, eax
// 006fa3bc  51                   push ecx
// 006fa3bd  83ca1e               or edx, 0x1e
// 006fa3c0  52                   push edx
// 006fa3c1  e86afdffff           call 0x6fa130
// 006fa3c6  83c408               add esp, 8
// 006fa3c9  5e                   pop esi
// 006fa3ca  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_ret)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
