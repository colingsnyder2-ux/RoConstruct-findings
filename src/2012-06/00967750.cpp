// roc 2012-06 00967750  unit: RBX::CellContact  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00967750
//
// 00967750  8b542410             mov edx, dword ptr [esp + 0x10]
// 00967754  c1e209               shl edx, 9
// 00967757  0b542414             or edx, dword ptr [esp + 0x14]
// 0096775b  56                   push esi
// 0096775c  8b742408             mov esi, dword ptr [esp + 8]
// 00967760  8b460c               mov eax, dword ptr [esi + 0xc]
// 00967763  8b4808               mov ecx, dword ptr [eax + 8]
// 00967766  c1e208               shl edx, 8
// 00967769  0b542410             or edx, dword ptr [esp + 0x10]
// 0096776d  51                   push ecx
// 0096776e  c1e206               shl edx, 6
// 00967771  0b542410             or edx, dword ptr [esp + 0x10]
// 00967775  52                   push edx
// 00967776  e835ffffff           call 0x9676b0
// 0096777b  83c408               add esp, 8
// 0096777e  5e                   pop esi
// 0096777f  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_codeABC)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
