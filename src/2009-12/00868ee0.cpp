// roc 2009-12 00868ee0  unit: CXTPPropertyGridView  size: 420 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868ee0
//
// 00868ee0  6aff                 push -1
// 00868ee2  683bf49500           push 0x95f43b
// 00868ee7  64a100000000         mov eax, dword ptr fs:[0]
// 00868eed  50                   push eax
// 00868eee  83ec18               sub esp, 0x18
// 00868ef1  53                   push ebx
// 00868ef2  55                   push ebp
// 00868ef3  56                   push esi
// 00868ef4  57                   push edi
// 00868ef5  a10052b600           mov eax, dword ptr [0xb65200]
// 00868efa  33c4                 xor eax, esp
// 00868efc  50                   push eax
// 00868efd  8d44242c             lea eax, [esp + 0x2c]
// 00868f01  64a300000000         mov dword ptr fs:[0], eax
// 00868f07  8bf1                 mov esi, ecx
// 00868f09  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00868f0d  8b442440             mov eax, dword ptr [esp + 0x40]
// 00868f11  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00868f15  57                   push edi
// 00868f16  50                   push eax
// 00868f17  51                   push ecx
// 00868f18  8bce                 mov ecx, esi
// 00868f1a  e8dda9f8ff           call 0x7f38fc
// 00868f1f  83f8ff               cmp eax, -1
// 00868f22  0f85cc000000         jne 0x868ff4
// 00868f28  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 00868f2e  85c9                 test ecx, ecx
// 00868f30  7476                 je 0x868fa8
// 00868f32  8d542444             lea edx, [esp + 0x44]
// 00868f36  52                   push edx
// 00868f37  e8f4fef8ff           call 0x7f8e30
// 00868f3c  8d4c2444             lea ecx, [esp + 0x44]
// 00868f40  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00868f48  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00868f4e  8d4c2444             lea ecx, [esp + 0x44]
// 00868f52  85c0                 test eax, eax
// 00868f54  0f8491000000         je 0x868feb
// 00868f5a  8b8658010000         mov eax, dword ptr [esi + 0x158]
// 00868f60  8b5030               mov edx, dword ptr [eax + 0x30]
// 00868f63  51                   push ecx
// 00868f64  52                   push edx
// 00868f65  8b5034               mov edx, dword ptr [eax + 0x34]
// 00868f68  83c034               add eax, 0x34
// 00868f6b  83ec10               sub esp, 0x10
// 00868f6e  8bcc                 mov ecx, esp
// 00868f70  8911                 mov dword ptr [ecx], edx
// 00868f72  8b5004               mov edx, dword ptr [eax + 4]
// 00868f75  895104               mov dword ptr [ecx + 4], edx
// 00868f78  8b5008               mov edx, dword ptr [eax + 8]
// 00868f7b  8b400c               mov eax, dword ptr [eax + 0xc]
// 00868f7e  895108               mov dword ptr [ecx + 8], edx
// 00868f81  89410c               mov dword ptr [ecx + 0xc], eax
// 00868f84  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00868f87  51                   push ecx
// 00868f88  57                   push edi
// 00868f89  e8a270ffff           call 0x860030
// 00868f8e  8b9658010000         mov edx, dword ptr [esi + 0x158]
// 00868f94  8b7230               mov esi, dword ptr [edx + 0x30]
// 00868f97  83c420               add esp, 0x20
// 00868f9a  8d4c2444             lea ecx, [esp + 0x44]
// 00868f9e  ff15c0de9800         call dword ptr [0x98dec0]
// 00868fa4  8bc6                 mov eax, esi
// 00868fa6  eb4c                 jmp 0x868ff4
// 00868fa8  8b442440             mov eax, dword ptr [esp + 0x40]
// 00868fac  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00868fb0  50                   push eax
// 00868fb1  51                   push ecx
// 00868fb2  8bce                 mov ecx, esi
// 00868fb4  e8d7faffff           call 0x868a90
// 00868fb9  8bf8                 mov edi, eax
// 00868fbb  85ff                 test edi, edi
// 00868fbd  7432                 je 0x868ff1
// 00868fbf  8b9f88000000         mov ebx, dword ptr [edi + 0x88]
// 00868fc5  8d542414             lea edx, [esp + 0x14]
// 00868fc9  52                   push edx
// 00868fca  8bcf                 mov ecx, edi
// 00868fcc  e8ffe8ffff           call 0x8678d0
// 00868fd1  8d4c2414             lea ecx, [esp + 0x14]
// 00868fd5  c744243401000000     mov dword ptr [esp + 0x34], 1
// 00868fdd  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00868fe3  85c0                 test eax, eax
// 00868fe5  7523                 jne 0x86900a
// 00868fe7  8d4c2414             lea ecx, [esp + 0x14]
// 00868feb  ff15c0de9800         call dword ptr [0x98dec0]
// 00868ff1  83c8ff               or eax, 0xffffffff
// 00868ff4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00868ff8  64890d00000000       mov dword ptr fs:[0], ecx
// 00868fff  59                   pop ecx
// 00869000  5f                   pop edi
// 00869001  5e                   pop esi
// 00869002  5d                   pop ebp
// 00869003  5b                   pop ebx
// 00869004  83c424               add esp, 0x24
// 00869007  c20c00               ret 0xc
// 0086900a  8d442418             lea eax, [esp + 0x18]
// 0086900e  50                   push eax
// 0086900f  8bcf                 mov ecx, edi
// 00869011  e83ab5ffff           call 0x864550
// 00869016  8be8                 mov ebp, eax
// 00869018  8d4c241c             lea ecx, [esp + 0x1c]
// 0086901c  51                   push ecx
// 0086901d  8bcf                 mov ecx, edi
// 0086901f  c644243802           mov byte ptr [esp + 0x38], 2
// 00869024  e8c7c3ffff           call 0x8653f0
// 00869029  8bce                 mov ecx, esi
// 0086902b  8bf8                 mov edi, eax
// 0086902d  e82ee9ffff           call 0x867960
// 00869032  8b0f                 mov ecx, dword ptr [edi]
// 00869034  50                   push eax
// 00869035  55                   push ebp
// 00869036  8d54241c             lea edx, [esp + 0x1c]
// 0086903a  52                   push edx
// 0086903b  8bc2                 mov eax, edx
// 0086903d  8b5704               mov edx, dword ptr [edi + 4]
// 00869040  50                   push eax
// 00869041  53                   push ebx
// 00869042  83ec10               sub esp, 0x10
// 00869045  8bc4                 mov eax, esp
// 00869047  8908                 mov dword ptr [eax], ecx
// 00869049  8b4f08               mov ecx, dword ptr [edi + 8]
// 0086904c  895004               mov dword ptr [eax + 4], edx
// 0086904f  8b570c               mov edx, dword ptr [edi + 0xc]
// 00869052  894808               mov dword ptr [eax + 8], ecx
// 00869055  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00869059  89500c               mov dword ptr [eax + 0xc], edx
// 0086905c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086905f  50                   push eax
// 00869060  51                   push ecx
// 00869061  e84a70ffff           call 0x8600b0
// 00869066  83c42c               add esp, 0x2c
// 00869069  8d4c2418             lea ecx, [esp + 0x18]
// 0086906d  ff15c0de9800         call dword ptr [0x98dec0]
// 00869073  8d4c2414             lea ecx, [esp + 0x14]
// 00869077  ff15c0de9800         call dword ptr [0x98dec0]
// 0086907d  8bc3                 mov eax, ebx
// 0086907f  e970ffffff           jmp 0x868ff4
// copied from an identical function in another client (function ?OnToolHitTest@CXTPPropertyGridView@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridView.cpp