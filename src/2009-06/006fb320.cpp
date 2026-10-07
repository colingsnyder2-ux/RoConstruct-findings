// roc 2009-06 006fb320  unit: RBX::GroupDragTool  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fb320
//
// 006fb320  8b442404             mov eax, dword ptr [esp + 4]
// 006fb324  8b4818               mov ecx, dword ptr [eax + 0x18]
// 006fb327  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006fb32b  3bd1                 cmp edx, ecx
// 006fb32d  751b                 jne 0x6fb34a
// 006fb32f  89481c               mov dword ptr [eax + 0x1c], ecx
// 006fb332  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006fb336  8d5020               lea edx, [eax + 0x20]
// 006fb339  894c240c             mov dword ptr [esp + 0xc], ecx
// 006fb33d  89542408             mov dword ptr [esp + 8], edx
// 006fb341  89442404             mov dword ptr [esp + 4], eax
// 006fb345  e966e9ffff           jmp 0x6f9cb0
// 006fb34a  52                   push edx
// 006fb34b  68ff000000           push 0xff
// 006fb350  52                   push edx
// 006fb351  50                   push eax
// 006fb352  8b442418             mov eax, dword ptr [esp + 0x18]
// 006fb356  e895e8ffff           call 0x6f9bf0
// 006fb35b  83c410               add esp, 0x10
// 006fb35e  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_patchlist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
