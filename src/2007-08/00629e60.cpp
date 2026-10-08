// from server: 100% by auto
// roc 2007-08 00629e60  unit: RBX::AssemblyStage  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00629e60
//
// 00629e60  8b442404             mov eax, dword ptr [esp + 4]
// 00629e64  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00629e67  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00629e6b  3bd1                 cmp edx, ecx
// 00629e6d  751b                 jne 0x629e8a
// 00629e6f  89481c               mov dword ptr [eax + 0x1c], ecx
// 00629e72  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00629e76  8d5020               lea edx, [eax + 0x20]
// 00629e79  894c240c             mov dword ptr [esp + 0xc], ecx
// 00629e7d  89542408             mov dword ptr [esp + 8], edx
// 00629e81  89442404             mov dword ptr [esp + 4], eax
// 00629e85  e996e9ffff           jmp 0x628820
// 00629e8a  52                   push edx
// 00629e8b  68ff000000           push 0xff
// 00629e90  52                   push edx
// 00629e91  50                   push eax
// 00629e92  8b442418             mov eax, dword ptr [esp + 0x18]
// 00629e96  e8c5e8ffff           call 0x628760
// 00629e9b  83c410               add esp, 0x10
// 00629e9e  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_patchlist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
