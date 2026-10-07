// roc 2010-06 0078fdc0  unit: RBX::GroupDragTool  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078fdc0
//
// 0078fdc0  8b442404             mov eax, dword ptr [esp + 4]
// 0078fdc4  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0078fdc7  8b542408             mov edx, dword ptr [esp + 8]
// 0078fdcb  89481c               mov dword ptr [eax + 0x1c], ecx
// 0078fdce  52                   push edx
// 0078fdcf  8d4820               lea ecx, [eax + 0x20]
// 0078fdd2  51                   push ecx
// 0078fdd3  50                   push eax
// 0078fdd4  e857f8ffff           call 0x78f630
// 0078fdd9  83c40c               add esp, 0xc
// 0078fddc  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_patchtohere)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
