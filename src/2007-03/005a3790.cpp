// roc 2007-03 005a3790  unit: seg_005a0000  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a3790
//
// 005a3790  6aff                 push -1
// 005a3792  6811927500           push 0x759211
// 005a3797  64a100000000         mov eax, dword ptr fs:[0]
// 005a379d  50                   push eax
// 005a379e  64892500000000       mov dword ptr fs:[0], esp
// 005a37a5  83ec14               sub esp, 0x14
// 005a37a8  807c242800           cmp byte ptr [esp + 0x28], 0
// 005a37ad  56                   push esi
// 005a37ae  57                   push edi
// 005a37af  c744240800000000     mov dword ptr [esp + 8], 0
// 005a37b7  744e                 je 0x5a3807
// 005a37b9  8d44240c             lea eax, [esp + 0xc]
// 005a37bd  50                   push eax
// 005a37be  e89d06f0ff           call 0x4a3e60
// 005a37c3  d905a0727900         fld dword ptr [0x7972a0]
// 005a37c9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a37cd  d91c24               fstp dword ptr [esp]
// 005a37d0  be01000000           mov esi, 1
// 005a37d5  89742428             mov dword ptr [esp + 0x28], esi
// 005a37d9  e812550000           call 0x5a8cf0
// 005a37de  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005a37e2  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a37e6  85c0                 test eax, eax
// 005a37e8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a37ec  890f                 mov dword ptr [edi], ecx
// 005a37ee  894704               mov dword ptr [edi + 4], eax
// 005a37f1  740d                 je 0x5a3800
// 005a37f3  83c004               add eax, 4
// 005a37f6  8bd6                 mov edx, esi
// 005a37f8  f00fc110             lock xadd dword ptr [eax], edx
// 005a37fc  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a3800  c644242400           mov byte ptr [esp + 0x24], 0
// 005a3805  eb3c                 jmp 0x5a3843
// 005a3807  8d442414             lea eax, [esp + 0x14]
// 005a380b  50                   push eax
// 005a380c  e84ff7efff           call 0x4a2f60
// 005a3811  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005a3815  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a3819  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a381d  83c404               add esp, 4
// 005a3820  85c0                 test eax, eax
// 005a3822  890f                 mov dword ptr [edi], ecx
// 005a3824  894704               mov dword ptr [edi + 4], eax
// 005a3827  be01000000           mov esi, 1
// 005a382c  740d                 je 0x5a383b
// 005a382e  83c004               add eax, 4
// 005a3831  8bd6                 mov edx, esi
// 005a3833  f00fc110             lock xadd dword ptr [eax], edx
// 005a3837  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a383b  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005a3843  85c0                 test eax, eax
// 005a3845  89742408             mov dword ptr [esp + 8], esi
// 005a3849  742c                 je 0x5a3877
// 005a384b  8bf0                 mov esi, eax
// 005a384d  83c9ff               or ecx, 0xffffffff
// 005a3850  83c004               add eax, 4
// 005a3853  f00fc108             lock xadd dword ptr [eax], ecx
// 005a3857  751e                 jne 0x5a3877
// 005a3859  8b16                 mov edx, dword ptr [esi]
// 005a385b  8b4204               mov eax, dword ptr [edx + 4]
// 005a385e  8bce                 mov ecx, esi
// 005a3860  ffd0                 call eax
// 005a3862  83caff               or edx, 0xffffffff
// 005a3865  8d4e08               lea ecx, [esi + 8]
// 005a3868  f00fc111             lock xadd dword ptr [ecx], edx
// 005a386c  7509                 jne 0x5a3877
// 005a386e  8b06                 mov eax, dword ptr [esi]
// 005a3870  8b5008               mov edx, dword ptr [eax + 8]
// 005a3873  8bce                 mov ecx, esi
// 005a3875  ffd2                 call edx
// 005a3877  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a387b  8bc7                 mov eax, edi
// 005a387d  5f                   pop edi
// 005a387e  5e                   pop esi
// 005a387f  64890d00000000       mov dword ptr fs:[0], ecx
// 005a3886  83c420               add esp, 0x20
// 005a3889  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?newJoint@RBX@@YA?AV?$shared_ptr@VAutoJoint@RBX@@@boost@@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
