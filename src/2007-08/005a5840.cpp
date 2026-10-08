// roc 2007-08 005a5840  unit: RBX::Humanoid  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a5840
//
// 005a5840  6aff                 push -1
// 005a5842  6891827500           push 0x758291
// 005a5847  64a100000000         mov eax, dword ptr fs:[0]
// 005a584d  50                   push eax
// 005a584e  64892500000000       mov dword ptr fs:[0], esp
// 005a5855  83ec14               sub esp, 0x14
// 005a5858  807c242800           cmp byte ptr [esp + 0x28], 0
// 005a585d  56                   push esi
// 005a585e  57                   push edi
// 005a585f  c744240800000000     mov dword ptr [esp + 8], 0
// 005a5867  744e                 je 0x5a58b7
// 005a5869  8d44240c             lea eax, [esp + 0xc]
// 005a586d  50                   push eax
// 005a586e  e89d9ff0ff           call 0x4af810
// 005a5873  d905b07e7900         fld dword ptr [0x797eb0]
// 005a5879  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a587d  d91c24               fstp dword ptr [esp]
// 005a5880  be01000000           mov esi, 1
// 005a5885  89742428             mov dword ptr [esp + 0x28], esi
// 005a5889  e882a50000           call 0x5afe10
// 005a588e  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005a5892  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a5896  85c0                 test eax, eax
// 005a5898  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a589c  890f                 mov dword ptr [edi], ecx
// 005a589e  894704               mov dword ptr [edi + 4], eax
// 005a58a1  740d                 je 0x5a58b0
// 005a58a3  83c004               add eax, 4
// 005a58a6  8bd6                 mov edx, esi
// 005a58a8  f00fc110             lock xadd dword ptr [eax], edx
// 005a58ac  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a58b0  c644242400           mov byte ptr [esp + 0x24], 0
// 005a58b5  eb3c                 jmp 0x5a58f3
// 005a58b7  8d442414             lea eax, [esp + 0x14]
// 005a58bb  50                   push eax
// 005a58bc  e82f90f0ff           call 0x4ae8f0
// 005a58c1  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005a58c5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a58c9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a58cd  83c404               add esp, 4
// 005a58d0  85c0                 test eax, eax
// 005a58d2  890f                 mov dword ptr [edi], ecx
// 005a58d4  894704               mov dword ptr [edi + 4], eax
// 005a58d7  be01000000           mov esi, 1
// 005a58dc  740d                 je 0x5a58eb
// 005a58de  83c004               add eax, 4
// 005a58e1  8bd6                 mov edx, esi
// 005a58e3  f00fc110             lock xadd dword ptr [eax], edx
// 005a58e7  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a58eb  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005a58f3  85c0                 test eax, eax
// 005a58f5  89742408             mov dword ptr [esp + 8], esi
// 005a58f9  742c                 je 0x5a5927
// 005a58fb  8bf0                 mov esi, eax
// 005a58fd  83c9ff               or ecx, 0xffffffff
// 005a5900  83c004               add eax, 4
// 005a5903  f00fc108             lock xadd dword ptr [eax], ecx
// 005a5907  751e                 jne 0x5a5927
// 005a5909  8b16                 mov edx, dword ptr [esi]
// 005a590b  8b4204               mov eax, dword ptr [edx + 4]
// 005a590e  8bce                 mov ecx, esi
// 005a5910  ffd0                 call eax
// 005a5912  83caff               or edx, 0xffffffff
// 005a5915  8d4e08               lea ecx, [esi + 8]
// 005a5918  f00fc111             lock xadd dword ptr [ecx], edx
// 005a591c  7509                 jne 0x5a5927
// 005a591e  8b06                 mov eax, dword ptr [esi]
// 005a5920  8b5008               mov edx, dword ptr [eax + 8]
// 005a5923  8bce                 mov ecx, esi
// 005a5925  ffd2                 call edx
// 005a5927  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a592b  8bc7                 mov eax, edi
// 005a592d  5f                   pop edi
// 005a592e  5e                   pop esi
// 005a592f  64890d00000000       mov dword ptr fs:[0], ecx
// 005a5936  83c420               add esp, 0x20
// 005a5939  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?newJoint@RBX@@YA?AV?$shared_ptr@VAutoJoint@RBX@@@boost@@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
