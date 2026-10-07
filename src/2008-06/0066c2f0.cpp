// roc 2008-06 0066c2f0  unit: RBX::GroupDragTool  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066c2f0
//
// 0066c2f0  8b442404             mov eax, dword ptr [esp + 4]
// 0066c2f4  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0066c2f7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0066c2fb  3bd1                 cmp edx, ecx
// 0066c2fd  751b                 jne 0x66c31a
// 0066c2ff  89481c               mov dword ptr [eax + 0x1c], ecx
// 0066c302  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066c306  8d5020               lea edx, [eax + 0x20]
// 0066c309  894c240c             mov dword ptr [esp + 0xc], ecx
// 0066c30d  89542408             mov dword ptr [esp + 8], edx
// 0066c311  89442404             mov dword ptr [esp + 4], eax
// 0066c315  e9f6e9ffff           jmp 0x66ad10
// 0066c31a  52                   push edx
// 0066c31b  68ff000000           push 0xff
// 0066c320  52                   push edx
// 0066c321  50                   push eax
// 0066c322  8b442418             mov eax, dword ptr [esp + 0x18]
// 0066c326  e825e9ffff           call 0x66ac50
// 0066c32b  83c410               add esp, 0x10
// 0066c32e  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_patchlist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
