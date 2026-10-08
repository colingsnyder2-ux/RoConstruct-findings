// from server: 100% by auto
// roc 2011-06 007f39d0  unit: RBX::AdvLuaDragTool  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f39d0
//
// 007f39d0  8b442404             mov eax, dword ptr [esp + 4]
// 007f39d4  8b4818               mov ecx, dword ptr [eax + 0x18]
// 007f39d7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007f39db  3bd1                 cmp edx, ecx
// 007f39dd  751b                 jne 0x7f39fa
// 007f39df  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f39e2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007f39e6  8d5020               lea edx, [eax + 0x20]
// 007f39e9  894c240c             mov dword ptr [esp + 0xc], ecx
// 007f39ed  89542408             mov dword ptr [esp + 8], edx
// 007f39f1  89442404             mov dword ptr [esp + 4], eax
// 007f39f5  e956e8ffff           jmp 0x7f2250
// 007f39fa  52                   push edx
// 007f39fb  68ff000000           push 0xff
// 007f3a00  52                   push edx
// 007f3a01  50                   push eax
// 007f3a02  8b442418             mov eax, dword ptr [esp + 0x18]
// 007f3a06  e885e7ffff           call 0x7f2190
// 007f3a0b  83c410               add esp, 0x10
// 007f3a0e  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_patchlist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
