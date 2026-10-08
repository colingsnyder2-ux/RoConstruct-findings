// from server: 100% by auto
// roc 2012-06 00967920  unit: RBX::CellContact  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00967920
//
// 00967920  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00967924  56                   push esi
// 00967925  8b742408             mov esi, dword ptr [esp + 8]
// 00967929  8b460c               mov eax, dword ptr [esi + 0xc]
// 0096792c  8b4808               mov ecx, dword ptr [eax + 8]
// 0096792f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00967933  42                   inc edx
// 00967934  c1e217               shl edx, 0x17
// 00967937  c1e006               shl eax, 6
// 0096793a  0bd0                 or edx, eax
// 0096793c  51                   push ecx
// 0096793d  83ca1e               or edx, 0x1e
// 00967940  52                   push edx
// 00967941  e86afdffff           call 0x9676b0
// 00967946  83c408               add esp, 8
// 00967949  5e                   pop esi
// 0096794a  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_ret)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
