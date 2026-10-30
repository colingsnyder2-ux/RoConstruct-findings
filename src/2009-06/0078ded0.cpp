// roc 2009-06 0078ded0  unit: CXTPPropertyGridView  size: 420 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078ded0
//
// 0078ded0  6aff                 push -1
// 0078ded2  68fbb18700           push 0x87b1fb
// 0078ded7  64a100000000         mov eax, dword ptr fs:[0]
// 0078dedd  50                   push eax
// 0078dede  83ec18               sub esp, 0x18
// 0078dee1  53                   push ebx
// 0078dee2  55                   push ebp
// 0078dee3  56                   push esi
// 0078dee4  57                   push edi
// 0078dee5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0078deea  33c4                 xor eax, esp
// 0078deec  50                   push eax
// 0078deed  8d44242c             lea eax, [esp + 0x2c]
// 0078def1  64a300000000         mov dword ptr fs:[0], eax
// 0078def7  8bf1                 mov esi, ecx
// 0078def9  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0078defd  8b442440             mov eax, dword ptr [esp + 0x40]
// 0078df01  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0078df05  57                   push edi
// 0078df06  50                   push eax
// 0078df07  51                   push ecx
// 0078df08  8bce                 mov ecx, esi
// 0078df0a  e8c5abf8ff           call 0x718ad4
// 0078df0f  83f8ff               cmp eax, -1
// 0078df12  0f85cc000000         jne 0x78dfe4
// 0078df18  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 0078df1e  85c9                 test ecx, ecx
// 0078df20  7476                 je 0x78df98
// 0078df22  8d542444             lea edx, [esp + 0x44]
// 0078df26  52                   push edx
// 0078df27  e874e9ffff           call 0x78c8a0
// 0078df2c  8d4c2444             lea ecx, [esp + 0x44]
// 0078df30  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0078df38  ff1554fb8900         call dword ptr [0x89fb54]
// 0078df3e  8d4c2444             lea ecx, [esp + 0x44]
// 0078df42  85c0                 test eax, eax
// 0078df44  0f8491000000         je 0x78dfdb
// 0078df4a  8b8658010000         mov eax, dword ptr [esi + 0x158]
// 0078df50  8b5030               mov edx, dword ptr [eax + 0x30]
// 0078df53  51                   push ecx
// 0078df54  52                   push edx
// 0078df55  8b5034               mov edx, dword ptr [eax + 0x34]
// 0078df58  83c034               add eax, 0x34
// 0078df5b  83ec10               sub esp, 0x10
// 0078df5e  8bcc                 mov ecx, esp
// 0078df60  8911                 mov dword ptr [ecx], edx
// 0078df62  8b5004               mov edx, dword ptr [eax + 4]
// 0078df65  895104               mov dword ptr [ecx + 4], edx
// 0078df68  8b5008               mov edx, dword ptr [eax + 8]
// 0078df6b  8b400c               mov eax, dword ptr [eax + 0xc]
// 0078df6e  895108               mov dword ptr [ecx + 8], edx
// 0078df71  89410c               mov dword ptr [ecx + 0xc], eax
// 0078df74  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0078df77  51                   push ecx
// 0078df78  57                   push edi
// 0078df79  e89270ffff           call 0x785010
// 0078df7e  8b9658010000         mov edx, dword ptr [esi + 0x158]
// 0078df84  8b7230               mov esi, dword ptr [edx + 0x30]
// 0078df87  83c420               add esp, 0x20
// 0078df8a  8d4c2444             lea ecx, [esp + 0x44]
// 0078df8e  ff1510fd8900         call dword ptr [0x89fd10]
// 0078df94  8bc6                 mov eax, esi
// 0078df96  eb4c                 jmp 0x78dfe4
// 0078df98  8b442440             mov eax, dword ptr [esp + 0x40]
// 0078df9c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0078dfa0  50                   push eax
// 0078dfa1  51                   push ecx
// 0078dfa2  8bce                 mov ecx, esi
// 0078dfa4  e8d7faffff           call 0x78da80
// 0078dfa9  8bf8                 mov edi, eax
// 0078dfab  85ff                 test edi, edi
// 0078dfad  7432                 je 0x78dfe1
// 0078dfaf  8b9f88000000         mov ebx, dword ptr [edi + 0x88]
// 0078dfb5  8d542414             lea edx, [esp + 0x14]
// 0078dfb9  52                   push edx
// 0078dfba  8bcf                 mov ecx, edi
// 0078dfbc  e80fe9ffff           call 0x78c8d0
// 0078dfc1  8d4c2414             lea ecx, [esp + 0x14]
// 0078dfc5  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0078dfcd  ff1554fb8900         call dword ptr [0x89fb54]
// 0078dfd3  85c0                 test eax, eax
// 0078dfd5  7523                 jne 0x78dffa
// 0078dfd7  8d4c2414             lea ecx, [esp + 0x14]
// 0078dfdb  ff1510fd8900         call dword ptr [0x89fd10]
// 0078dfe1  83c8ff               or eax, 0xffffffff
// 0078dfe4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0078dfe8  64890d00000000       mov dword ptr fs:[0], ecx
// 0078dfef  59                   pop ecx
// 0078dff0  5f                   pop edi
// 0078dff1  5e                   pop esi
// 0078dff2  5d                   pop ebp
// 0078dff3  5b                   pop ebx
// 0078dff4  83c424               add esp, 0x24
// 0078dff7  c20c00               ret 0xc
// 0078dffa  8d442418             lea eax, [esp + 0x18]
// 0078dffe  50                   push eax
// 0078dfff  8bcf                 mov ecx, edi
// 0078e001  e84ab5ffff           call 0x789550
// 0078e006  8be8                 mov ebp, eax
// 0078e008  8d4c241c             lea ecx, [esp + 0x1c]
// 0078e00c  51                   push ecx
// 0078e00d  8bcf                 mov ecx, edi
// 0078e00f  c644243802           mov byte ptr [esp + 0x38], 2
// 0078e014  e8c7c3ffff           call 0x78a3e0
// 0078e019  8bce                 mov ecx, esi
// 0078e01b  8bf8                 mov edi, eax
// 0078e01d  e83ee9ffff           call 0x78c960
// 0078e022  8b0f                 mov ecx, dword ptr [edi]
// 0078e024  50                   push eax
// 0078e025  55                   push ebp
// 0078e026  8d54241c             lea edx, [esp + 0x1c]
// 0078e02a  52                   push edx
// 0078e02b  8bc2                 mov eax, edx
// 0078e02d  8b5704               mov edx, dword ptr [edi + 4]
// 0078e030  50                   push eax
// 0078e031  53                   push ebx
// 0078e032  83ec10               sub esp, 0x10
// 0078e035  8bc4                 mov eax, esp
// 0078e037  8908                 mov dword ptr [eax], ecx
// 0078e039  8b4f08               mov ecx, dword ptr [edi + 8]
// 0078e03c  895004               mov dword ptr [eax + 4], edx
// 0078e03f  8b570c               mov edx, dword ptr [edi + 0xc]
// 0078e042  894808               mov dword ptr [eax + 8], ecx
// 0078e045  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0078e049  89500c               mov dword ptr [eax + 0xc], edx
// 0078e04c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0078e04f  50                   push eax
// 0078e050  51                   push ecx
// 0078e051  e83a70ffff           call 0x785090
// 0078e056  83c42c               add esp, 0x2c
// 0078e059  8d4c2418             lea ecx, [esp + 0x18]
// 0078e05d  ff1510fd8900         call dword ptr [0x89fd10]
// 0078e063  8d4c2414             lea ecx, [esp + 0x14]
// 0078e067  ff1510fd8900         call dword ptr [0x89fd10]
// 0078e06d  8bc3                 mov eax, ebx
// 0078e06f  e970ffffff           jmp 0x78dfe4
// copied from an identical function in another client (function ?OnToolHitTest@CXTPPropertyGridView@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/PropertyGrid/XTPPropertyGridView.cpp