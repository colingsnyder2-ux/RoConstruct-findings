// from server: 100% by auto
// roc 2009-06 006fa430  unit: RBX::GroupDragTool  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fa430
//
// 006fa430  8b442404             mov eax, dword ptr [esp + 4]
// 006fa434  8b4818               mov ecx, dword ptr [eax + 0x18]
// 006fa437  8b542408             mov edx, dword ptr [esp + 8]
// 006fa43b  89481c               mov dword ptr [eax + 0x1c], ecx
// 006fa43e  52                   push edx
// 006fa43f  8d4820               lea ecx, [eax + 0x20]
// 006fa442  51                   push ecx
// 006fa443  50                   push eax
// 006fa444  e867f8ffff           call 0x6f9cb0
// 006fa449  83c40c               add esp, 0xc
// 006fa44c  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_patchtohere)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
