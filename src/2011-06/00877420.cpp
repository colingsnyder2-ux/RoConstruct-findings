// roc 2011-06 00877420  unit: CXTPPropertyGridView  size: 420 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00877420
//
// 00877420  6aff                 push -1
// 00877422  685b7fa000           push 0xa07f5b
// 00877427  64a100000000         mov eax, dword ptr fs:[0]
// 0087742d  50                   push eax
// 0087742e  83ec18               sub esp, 0x18
// 00877431  53                   push ebx
// 00877432  55                   push ebp
// 00877433  56                   push esi
// 00877434  57                   push edi
// 00877435  a12058c900           mov eax, dword ptr [0xc95820]
// 0087743a  33c4                 xor eax, esp
// 0087743c  50                   push eax
// 0087743d  8d44242c             lea eax, [esp + 0x2c]
// 00877441  64a300000000         mov dword ptr fs:[0], eax
// 00877447  8bf1                 mov esi, ecx
// 00877449  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0087744d  8b442440             mov eax, dword ptr [esp + 0x40]
// 00877451  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00877455  57                   push edi
// 00877456  50                   push eax
// 00877457  51                   push ecx
// 00877458  8bce                 mov ecx, esi
// 0087745a  e89b2cf9ff           call 0x80a0fa
// 0087745f  83f8ff               cmp eax, -1
// 00877462  0f85cc000000         jne 0x877534
// 00877468  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 0087746e  85c9                 test ecx, ecx
// 00877470  7476                 je 0x8774e8
// 00877472  8d542444             lea edx, [esp + 0x44]
// 00877476  52                   push edx
// 00877477  e8b4ebf9ff           call 0x816030
// 0087747c  8d4c2444             lea ecx, [esp + 0x44]
// 00877480  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00877488  ff15a826a400         call dword ptr [0xa426a8]
// 0087748e  8d4c2444             lea ecx, [esp + 0x44]
// 00877492  85c0                 test eax, eax
// 00877494  0f8491000000         je 0x87752b
// 0087749a  8b8658010000         mov eax, dword ptr [esi + 0x158]
// 008774a0  8b5030               mov edx, dword ptr [eax + 0x30]
// 008774a3  51                   push ecx
// 008774a4  52                   push edx
// 008774a5  8b5034               mov edx, dword ptr [eax + 0x34]
// 008774a8  83c034               add eax, 0x34
// 008774ab  83ec10               sub esp, 0x10
// 008774ae  8bcc                 mov ecx, esp
// 008774b0  8911                 mov dword ptr [ecx], edx
// 008774b2  8b5004               mov edx, dword ptr [eax + 4]
// 008774b5  895104               mov dword ptr [ecx + 4], edx
// 008774b8  8b5008               mov edx, dword ptr [eax + 8]
// 008774bb  8b400c               mov eax, dword ptr [eax + 0xc]
// 008774be  895108               mov dword ptr [ecx + 8], edx
// 008774c1  89410c               mov dword ptr [ecx + 0xc], eax
// 008774c4  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008774c7  51                   push ecx
// 008774c8  57                   push edi
// 008774c9  e8d2a3ffff           call 0x8718a0
// 008774ce  8b9658010000         mov edx, dword ptr [esi + 0x158]
// 008774d4  8b7230               mov esi, dword ptr [edx + 0x30]
// 008774d7  83c420               add esp, 0x20
// 008774da  8d4c2444             lea ecx, [esp + 0x44]
// 008774de  ff15082ea400         call dword ptr [0xa42e08]
// 008774e4  8bc6                 mov eax, esi
// 008774e6  eb4c                 jmp 0x877534
// 008774e8  8b442440             mov eax, dword ptr [esp + 0x40]
// 008774ec  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008774f0  50                   push eax
// 008774f1  51                   push ecx
// 008774f2  8bce                 mov ecx, esi
// 008774f4  e8d7faffff           call 0x876fd0
// 008774f9  8bf8                 mov edi, eax
// 008774fb  85ff                 test edi, edi
// 008774fd  7432                 je 0x877531
// 008774ff  8b9f88000000         mov ebx, dword ptr [edi + 0x88]
// 00877505  8d542414             lea edx, [esp + 0x14]
// 00877509  52                   push edx
// 0087750a  8bcf                 mov ecx, edi
// 0087750c  e87fe8ffff           call 0x875d90
// 00877511  8d4c2414             lea ecx, [esp + 0x14]
// 00877515  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0087751d  ff15a826a400         call dword ptr [0xa426a8]
// 00877523  85c0                 test eax, eax
// 00877525  7523                 jne 0x87754a
// 00877527  8d4c2414             lea ecx, [esp + 0x14]
// 0087752b  ff15082ea400         call dword ptr [0xa42e08]
// 00877531  83c8ff               or eax, 0xffffffff
// 00877534  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00877538  64890d00000000       mov dword ptr fs:[0], ecx
// 0087753f  59                   pop ecx
// 00877540  5f                   pop edi
// 00877541  5e                   pop esi
// 00877542  5d                   pop ebp
// 00877543  5b                   pop ebx
// 00877544  83c424               add esp, 0x24
// 00877547  c20c00               ret 0xc
// 0087754a  8d442418             lea eax, [esp + 0x18]
// 0087754e  50                   push eax
// 0087754f  8bcf                 mov ecx, edi
// 00877551  e80ae8ffff           call 0x875d60
// 00877556  8be8                 mov ebp, eax
// 00877558  8d4c241c             lea ecx, [esp + 0x1c]
// 0087755c  51                   push ecx
// 0087755d  8bcf                 mov ecx, edi
// 0087755f  c644243802           mov byte ptr [esp + 0x38], 2
// 00877564  e867260000           call 0x879bd0
// 00877569  8bce                 mov ecx, esi
// 0087756b  8bf8                 mov edi, eax
// 0087756d  e8aee8ffff           call 0x875e20
// 00877572  8b0f                 mov ecx, dword ptr [edi]
// 00877574  50                   push eax
// 00877575  55                   push ebp
// 00877576  8d54241c             lea edx, [esp + 0x1c]
// 0087757a  52                   push edx
// 0087757b  8bc2                 mov eax, edx
// 0087757d  8b5704               mov edx, dword ptr [edi + 4]
// 00877580  50                   push eax
// 00877581  53                   push ebx
// 00877582  83ec10               sub esp, 0x10
// 00877585  8bc4                 mov eax, esp
// 00877587  8908                 mov dword ptr [eax], ecx
// 00877589  8b4f08               mov ecx, dword ptr [edi + 8]
// 0087758c  895004               mov dword ptr [eax + 4], edx
// 0087758f  8b570c               mov edx, dword ptr [edi + 0xc]
// 00877592  894808               mov dword ptr [eax + 8], ecx
// 00877595  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00877599  89500c               mov dword ptr [eax + 0xc], edx
// 0087759c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0087759f  50                   push eax
// 008775a0  51                   push ecx
// 008775a1  e87aa3ffff           call 0x871920
// 008775a6  83c42c               add esp, 0x2c
// 008775a9  8d4c2418             lea ecx, [esp + 0x18]
// 008775ad  ff15082ea400         call dword ptr [0xa42e08]
// 008775b3  8d4c2414             lea ecx, [esp + 0x14]
// 008775b7  ff15082ea400         call dword ptr [0xa42e08]
// 008775bd  8bc3                 mov eax, ebx
// 008775bf  e970ffffff           jmp 0x877534
// copied from an identical function in another client (function ?OnToolHitTest@CXTPPropertyGridView@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridView.cpp