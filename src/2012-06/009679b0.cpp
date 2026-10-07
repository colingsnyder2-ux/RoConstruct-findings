// roc 2012-06 009679b0  unit: RBX::CellContact  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009679b0
//
// 009679b0  8b442404             mov eax, dword ptr [esp + 4]
// 009679b4  8b4818               mov ecx, dword ptr [eax + 0x18]
// 009679b7  8b542408             mov edx, dword ptr [esp + 8]
// 009679bb  89481c               mov dword ptr [eax + 0x1c], ecx
// 009679be  52                   push edx
// 009679bf  8d4820               lea ecx, [eax + 0x20]
// 009679c2  51                   push ecx
// 009679c3  50                   push eax
// 009679c4  e827f8ffff           call 0x9671f0
// 009679c9  83c40c               add esp, 0xc
// 009679cc  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_patchtohere)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
