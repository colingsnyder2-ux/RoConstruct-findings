// roc 2008-06 00558220  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00558220
//
// 00558220  64a100000000         mov eax, dword ptr fs:[0]
// 00558226  6aff                 push -1
// 00558228  6868917d00           push 0x7d9168
// 0055822d  50                   push eax
// 0055822e  64892500000000       mov dword ptr fs:[0], esp
// 00558235  83ec08               sub esp, 8
// 00558238  56                   push esi
// 00558239  8b742420             mov esi, dword ptr [esp + 0x20]
// 0055823d  57                   push edi
// 0055823e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00558242  85f6                 test esi, esi
// 00558244  7436                 je 0x55827c
// 00558246  8b442428             mov eax, dword ptr [esp + 0x28]
// 0055824a  3bf0                 cmp esi, eax
// 0055824c  742e                 je 0x55827c
// 0055824e  85c0                 test eax, eax
// 00558250  7416                 je 0x558268
// 00558252  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 00558258  3bc6                 cmp eax, esi
// 0055825a  7420                 je 0x55827c
// 0055825c  50                   push eax
// 0055825d  8bce                 mov ecx, esi
// 0055825f  e8ec19f7ff           call 0x4c9c50
// 00558264  84c0                 test al, al
// 00558266  7514                 jne 0x55827c
// 00558268  8b06                 mov eax, dword ptr [esi]
// 0055826a  8b5014               mov edx, dword ptr [eax + 0x14]
// 0055826d  57                   push edi
// 0055826e  8bce                 mov ecx, esi
// 00558270  ffd2                 call edx
// 00558272  8bb604010000         mov esi, dword ptr [esi + 0x104]
// 00558278  85f6                 test esi, esi
// 0055827a  75ca                 jne 0x558246
// 0055827c  55                   push ebp
// 0055827d  8d44240c             lea eax, [esp + 0xc]
// 00558281  50                   push eax
// 00558282  8d8f08010000         lea ecx, [edi + 0x108]
// 00558288  e82393f3ff           call 0x4915b0
// 0055828d  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00558291  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00558299  85ed                 test ebp, ebp
// 0055829b  747d                 je 0x55831a
// 0055829d  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 005582a0  3b7d10               cmp edi, dword ptr [ebp + 0x10]
// 005582a3  7606                 jbe 0x5582ab
// 005582a5  ff1590288000         call dword ptr [0x802890]
// 005582ab  8b7500               mov esi, dword ptr [ebp]
// 005582ae  53                   push ebx
// 005582af  90                   nop 
// 005582b0  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 005582b3  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 005582b6  7606                 jbe 0x5582be
// 005582b8  ff1590288000         call dword ptr [0x802890]
// 005582be  8b4500               mov eax, dword ptr [ebp]
// 005582c1  85f6                 test esi, esi
// 005582c3  7404                 je 0x5582c9
// 005582c5  3bf0                 cmp esi, eax
// 005582c7  7406                 je 0x5582cf
// 005582c9  ff1590288000         call dword ptr [0x802890]
// 005582cf  3bfb                 cmp edi, ebx
// 005582d1  7446                 je 0x558319
// 005582d3  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005582d9  85f6                 test esi, esi
// 005582db  7534                 jne 0x558311
// 005582dd  ffd3                 call ebx
// 005582df  33c0                 xor eax, eax
// 005582e1  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005582e4  7202                 jb 0x5582e8
// 005582e6  ffd3                 call ebx
// 005582e8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005582ec  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005582f0  8b07                 mov eax, dword ptr [edi]
// 005582f2  51                   push ecx
// 005582f3  52                   push edx
// 005582f4  50                   push eax
// 005582f5  e826ffffff           call 0x558220
// 005582fa  83c40c               add esp, 0xc
// 005582fd  85f6                 test esi, esi
// 005582ff  7514                 jne 0x558315
// 00558301  ffd3                 call ebx
// 00558303  33c0                 xor eax, eax
// 00558305  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00558308  7202                 jb 0x55830c
// 0055830a  ffd3                 call ebx
// 0055830c  83c708               add edi, 8
// 0055830f  eb9f                 jmp 0x5582b0
// 00558311  8b06                 mov eax, dword ptr [esi]
// 00558313  ebcc                 jmp 0x5582e1
// 00558315  8b06                 mov eax, dword ptr [esi]
// 00558317  ebec                 jmp 0x558305
// 00558319  5b                   pop ebx
// 0055831a  8b742410             mov esi, dword ptr [esp + 0x10]
// 0055831e  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00558326  5d                   pop ebp
// 00558327  85f6                 test esi, esi
// 00558329  742a                 je 0x558355
// 0055832b  8d4e04               lea ecx, [esi + 4]
// 0055832e  83caff               or edx, 0xffffffff
// 00558331  f00fc111             lock xadd dword ptr [ecx], edx
// 00558335  751e                 jne 0x558355
// 00558337  8b06                 mov eax, dword ptr [esi]
// 00558339  8b5004               mov edx, dword ptr [eax + 4]
// 0055833c  8bce                 mov ecx, esi
// 0055833e  ffd2                 call edx
// 00558340  8d4608               lea eax, [esi + 8]
// 00558343  83c9ff               or ecx, 0xffffffff
// 00558346  f00fc108             lock xadd dword ptr [eax], ecx
// 0055834a  7509                 jne 0x558355
// 0055834c  8b16                 mov edx, dword ptr [esi]
// 0055834e  8b4208               mov eax, dword ptr [edx + 8]
// 00558351  8bce                 mov ecx, esi
// 00558353  ffd0                 call eax
// 00558355  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00558359  5f                   pop edi
// 0055835a  5e                   pop esi
// 0055835b  64890d00000000       mov dword ptr fs:[0], ecx
// 00558362  83c414               add esp, 0x14
// 00558365  c3                   ret 
// library openrbx-client/App\v8tree\Instance.cpp (function ?signalDescendentAdded@Instance@RBX@@CAXPAV12@00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
