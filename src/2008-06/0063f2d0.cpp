// roc 2008-06 0063f2d0  unit: RBX::ResizeTool  size: 401 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063f2d0
//
// 0063f2d0  6aff                 push -1
// 0063f2d2  6868117d00           push 0x7d1168
// 0063f2d7  64a100000000         mov eax, dword ptr fs:[0]
// 0063f2dd  50                   push eax
// 0063f2de  64892500000000       mov dword ptr fs:[0], esp
// 0063f2e5  83ec40               sub esp, 0x40
// 0063f2e8  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0063f2eb  89442404             mov dword ptr [esp + 4], eax
// 0063f2ef  33c0                 xor eax, eax
// 0063f2f1  56                   push esi
// 0063f2f2  57                   push edi
// 0063f2f3  894c2408             mov dword ptr [esp + 8], ecx
// 0063f2f7  89442410             mov dword ptr [esp + 0x10], eax
// 0063f2fb  89442414             mov dword ptr [esp + 0x14], eax
// 0063f2ff  6a01                 push 1
// 0063f301  8d4c2410             lea ecx, [esp + 0x10]
// 0063f305  89442454             mov dword ptr [esp + 0x54], eax
// 0063f309  e8b229f4ff           call 0x581cc0
// 0063f30e  8bb054010000         mov esi, dword ptr [eax + 0x154]
// 0063f314  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0063f317  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 0063f31a  7606                 jbe 0x63f322
// 0063f31c  ff1590288000         call dword ptr [0x802890]
// 0063f322  53                   push ebx
// 0063f323  55                   push ebp
// 0063f324  8b2e                 mov ebp, dword ptr [esi]
// 0063f326  eb08                 jmp 0x63f330
// 0063f328  8da42400000000       lea esp, [esp]
// 0063f32f  90                   nop 
// 0063f330  6a01                 push 1
// 0063f332  8d4c2418             lea ecx, [esp + 0x18]
// 0063f336  e88529f4ff           call 0x581cc0
// 0063f33b  8bb054010000         mov esi, dword ptr [eax + 0x154]
// 0063f341  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0063f344  395e0c               cmp dword ptr [esi + 0xc], ebx
// 0063f347  7606                 jbe 0x63f34f
// 0063f349  ff1590288000         call dword ptr [0x802890]
// 0063f34f  8b36                 mov esi, dword ptr [esi]
// 0063f351  85ed                 test ebp, ebp
// 0063f353  7404                 je 0x63f359
// 0063f355  3bee                 cmp ebp, esi
// 0063f357  740a                 je 0x63f363
// 0063f359  8b3590288000         mov esi, dword ptr [0x802890]
// 0063f35f  ffd6                 call esi
// 0063f361  eb06                 jmp 0x63f369
// 0063f363  8b3590288000         mov esi, dword ptr [0x802890]
// 0063f369  3bfb                 cmp edi, ebx
// 0063f36b  0f84a1000000         je 0x63f412
// 0063f371  85ed                 test ebp, ebp
// 0063f373  0f858c000000         jne 0x63f405
// 0063f379  ffd6                 call esi
// 0063f37b  33c0                 xor eax, eax
// 0063f37d  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0063f380  7202                 jb 0x63f384
// 0063f382  ffd6                 call esi
// 0063f384  8b07                 mov eax, dword ptr [edi]
// 0063f386  6a00                 push 0
// 0063f388  6850dd9200           push 0x92dd50
// 0063f38d  687c909200           push 0x92907c
// 0063f392  6a00                 push 0
// 0063f394  50                   push eax
// 0063f395  e82c240600           call 0x6a17c6
// 0063f39a  8bf0                 mov esi, eax
// 0063f39c  83c414               add esp, 0x14
// 0063f39f  85f6                 test esi, esi
// 0063f3a1  7443                 je 0x63f3e6
// 0063f3a3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063f3a7  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0063f3aa  8d8888020000         lea ecx, [eax + 0x288]
// 0063f3b0  8b01                 mov eax, dword ptr [ecx]
// 0063f3b2  8d542420             lea edx, [esp + 0x20]
// 0063f3b6  52                   push edx
// 0063f3b7  8b5008               mov edx, dword ptr [eax + 8]
// 0063f3ba  ffd2                 call edx
// 0063f3bc  8bc8                 mov ecx, eax
// 0063f3be  e8ed13edff           call 0x5107b0
// 0063f3c3  83c024               add eax, 0x24
// 0063f3c6  50                   push eax
// 0063f3c7  8b442464             mov eax, dword ptr [esp + 0x64]
// 0063f3cb  6a00                 push 0
// 0063f3cd  50                   push eax
// 0063f3ce  8bce                 mov ecx, esi
// 0063f3d0  e8db98f5ff           call 0x598cb0
// 0063f3d5  50                   push eax
// 0063f3d6  8bce                 mov ecx, esi
// 0063f3d8  e8f398f5ff           call 0x598cd0
// 0063f3dd  50                   push eax
// 0063f3de  e8bd820300           call 0x6776a0
// 0063f3e3  83c414               add esp, 0x14
// 0063f3e6  85ed                 test ebp, ebp
// 0063f3e8  7523                 jne 0x63f40d
// 0063f3ea  ff1590288000         call dword ptr [0x802890]
// 0063f3f0  33c0                 xor eax, eax
// 0063f3f2  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0063f3f5  7206                 jb 0x63f3fd
// 0063f3f7  ff1590288000         call dword ptr [0x802890]
// 0063f3fd  83c708               add edi, 8
// 0063f400  e92bffffff           jmp 0x63f330
// 0063f405  8b4500               mov eax, dword ptr [ebp]
// 0063f408  e970ffffff           jmp 0x63f37d
// 0063f40d  8b4500               mov eax, dword ptr [ebp]
// 0063f410  ebe0                 jmp 0x63f3f2
// 0063f412  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0063f416  5d                   pop ebp
// 0063f417  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0063f41f  5b                   pop ebx
// 0063f420  85f6                 test esi, esi
// 0063f422  742a                 je 0x63f44e
// 0063f424  8d4e04               lea ecx, [esi + 4]
// 0063f427  83caff               or edx, 0xffffffff
// 0063f42a  f00fc111             lock xadd dword ptr [ecx], edx
// 0063f42e  751e                 jne 0x63f44e
// 0063f430  8b06                 mov eax, dword ptr [esi]
// 0063f432  8b5004               mov edx, dword ptr [eax + 4]
// 0063f435  8bce                 mov ecx, esi
// 0063f437  ffd2                 call edx
// 0063f439  8d4608               lea eax, [esi + 8]
// 0063f43c  83c9ff               or ecx, 0xffffffff
// 0063f43f  f00fc108             lock xadd dword ptr [eax], ecx
// 0063f443  7509                 jne 0x63f44e
// 0063f445  8b16                 mov edx, dword ptr [esi]
// 0063f447  8b4208               mov eax, dword ptr [edx + 8]
// 0063f44a  8bce                 mov ecx, esi
// 0063f44c  ffd0                 call eax
// 0063f44e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0063f452  5f                   pop edi
// 0063f453  5e                   pop esi
// 0063f454  64890d00000000       mov dword ptr fs:[0], ecx
// 0063f45b  83c44c               add esp, 0x4c
// 0063f45e  c20400               ret 4
// library rbxgs/roc_unit_4329760619cd676f.cpp (function ?render3dAdorn@ResizeTool@RBX@@MAEXPAVAdorn@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_4329760619cd676f.cpp
