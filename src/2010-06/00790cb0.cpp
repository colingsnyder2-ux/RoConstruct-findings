// from server: 100% by auto
// roc 2010-06 00790cb0  unit: RBX::GroupDragTool  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00790cb0
//
// 00790cb0  8b442404             mov eax, dword ptr [esp + 4]
// 00790cb4  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00790cb7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00790cbb  3bd1                 cmp edx, ecx
// 00790cbd  751b                 jne 0x790cda
// 00790cbf  89481c               mov dword ptr [eax + 0x1c], ecx
// 00790cc2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00790cc6  8d5020               lea edx, [eax + 0x20]
// 00790cc9  894c240c             mov dword ptr [esp + 0xc], ecx
// 00790ccd  89542408             mov dword ptr [esp + 8], edx
// 00790cd1  89442404             mov dword ptr [esp + 4], eax
// 00790cd5  e956e9ffff           jmp 0x78f630
// 00790cda  52                   push edx
// 00790cdb  68ff000000           push 0xff
// 00790ce0  52                   push edx
// 00790ce1  50                   push eax
// 00790ce2  8b442418             mov eax, dword ptr [esp + 0x18]
// 00790ce6  e885e8ffff           call 0x78f570
// 00790ceb  83c410               add esp, 0x10
// 00790cee  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_patchlist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
