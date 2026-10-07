// roc 2008-06 0066b480  unit: RBX::GroupDragTool  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066b480
//
// 0066b480  8b442404             mov eax, dword ptr [esp + 4]
// 0066b484  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0066b487  8b542408             mov edx, dword ptr [esp + 8]
// 0066b48b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0066b48e  52                   push edx
// 0066b48f  8d4820               lea ecx, [eax + 0x20]
// 0066b492  51                   push ecx
// 0066b493  50                   push eax
// 0066b494  e877f8ffff           call 0x66ad10
// 0066b499  83c40c               add esp, 0xc
// 0066b49c  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_patchtohere)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
