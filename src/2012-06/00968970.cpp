// roc 2012-06 00968970  unit: RBX::CellContact  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00968970
//
// 00968970  8b442404             mov eax, dword ptr [esp + 4]
// 00968974  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00968977  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0096897b  3bd1                 cmp edx, ecx
// 0096897d  751b                 jne 0x96899a
// 0096897f  89481c               mov dword ptr [eax + 0x1c], ecx
// 00968982  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00968986  8d5020               lea edx, [eax + 0x20]
// 00968989  894c240c             mov dword ptr [esp + 0xc], ecx
// 0096898d  89542408             mov dword ptr [esp + 8], edx
// 00968991  89442404             mov dword ptr [esp + 4], eax
// 00968995  e956e8ffff           jmp 0x9671f0
// 0096899a  52                   push edx
// 0096899b  68ff000000           push 0xff
// 009689a0  52                   push edx
// 009689a1  50                   push eax
// 009689a2  8b442418             mov eax, dword ptr [esp + 0x18]
// 009689a6  e885e7ffff           call 0x967130
// 009689ab  83c410               add esp, 0x10
// 009689ae  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_patchlist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
