// roc 2007-03 006163f0  unit: seg_00610000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006163f0
//
// 006163f0  6aff                 push -1
// 006163f2  6838d87500           push 0x75d838
// 006163f7  64a100000000         mov eax, dword ptr fs:[0]
// 006163fd  50                   push eax
// 006163fe  64892500000000       mov dword ptr fs:[0], esp
// 00616405  51                   push ecx
// 00616406  56                   push esi
// 00616407  8bf1                 mov esi, ecx
// 00616409  89742404             mov dword ptr [esp + 4], esi
// 0061640d  c7464444fd7900       mov dword ptr [esi + 0x44], 0x79fd44
// 00616414  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00616417  85c9                 test ecx, ecx
// 00616419  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00616421  7413                 je 0x616436
// 00616423  8d4108               lea eax, [ecx + 8]
// 00616426  83caff               or edx, 0xffffffff
// 00616429  f00fc110             lock xadd dword ptr [eax], edx
// 0061642d  7507                 jne 0x616436
// 0061642f  8b01                 mov eax, dword ptr [ecx]
// 00616431  8b5008               mov edx, dword ptr [eax + 8]
// 00616434  ffd2                 call edx
// 00616436  8b4e04               mov ecx, dword ptr [esi + 4]
// 00616439  85c9                 test ecx, ecx
// 0061643b  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00616443  5e                   pop esi
// 00616444  7413                 je 0x616459
// 00616446  8d4108               lea eax, [ecx + 8]
// 00616449  83caff               or edx, 0xffffffff
// 0061644c  f00fc110             lock xadd dword ptr [eax], edx
// 00616450  7507                 jne 0x616459
// 00616452  8b01                 mov eax, dword ptr [ecx]
// 00616454  8b5008               mov edx, dword ptr [eax + 8]
// 00616457  ffd2                 call edx
// 00616459  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0061645d  64890d00000000       mov dword ptr fs:[0], ecx
// 00616464  83c410               add esp, 0x10
// 00616467  c3                   ret 
// library rbxgs/tool\RunDragger.cpp (function ??1RunDragger@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
