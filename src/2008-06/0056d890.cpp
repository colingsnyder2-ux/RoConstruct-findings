// from server: 100% by colin
// roc 2008-06 0056d890  unit: G3D::VColor3::?$holder  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d890
//
// 0056d890  64a100000000         mov eax, dword ptr fs:[0]
// 0056d896  6aff                 push -1
// 0056d898  68b9fe7c00           push 0x7cfeb9
// 0056d89d  50                   push eax
// 0056d89e  64892500000000       mov dword ptr fs:[0], esp
// 0056d8a5  83ec50               sub esp, 0x50
// 0056d8a8  53                   push ebx
// 0056d8a9  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0056d8af  56                   push esi
// 0056d8b0  57                   push edi
// 0056d8b1  8bf9                 mov edi, ecx
// 0056d8b3  8d7704               lea esi, [edi + 4]
// 0056d8b6  85f6                 test esi, esi
// 0056d8b8  7428                 je 0x56d8e2
// 0056d8ba  8b0e                 mov ecx, dword ptr [esi]
// 0056d8bc  85c9                 test ecx, ecx
// 0056d8be  7409                 je 0x56d8c9
// 0056d8c0  8b01                 mov eax, dword ptr [ecx]
// 0056d8c2  8b5004               mov edx, dword ptr [eax + 4]
// 0056d8c5  ffd2                 call edx
// 0056d8c7  eb05                 jmp 0x56d8ce
// 0056d8c9  b814969200           mov eax, 0x929614
// 0056d8ce  6864639400           push 0x946364
// 0056d8d3  8bc8                 mov ecx, eax
// 0056d8d5  ffd3                 call ebx
// 0056d8d7  84c0                 test al, al
// 0056d8d9  7407                 je 0x56d8e2
// 0056d8db  8b06                 mov eax, dword ptr [esi]
// 0056d8dd  83c004               add eax, 4
// 0056d8e0  7556                 jne 0x56d938
// 0056d8e2  8b07                 mov eax, dword ptr [edi]
// 0056d8e4  8b4008               mov eax, dword ptr [eax + 8]
// 0056d8e7  50                   push eax
// 0056d8e8  b9f8be9200           mov ecx, 0x92bef8
// 0056d8ed  ffd3                 call ebx
// 0056d8ef  84c0                 test al, al
// 0056d8f1  7457                 je 0x56d94a
// 0056d8f3  d9ee                 fldz 
// 0056d8f5  8d4c240c             lea ecx, [esp + 0xc]
// 0056d8f9  d954240c             fst dword ptr [esp + 0xc]
// 0056d8fd  51                   push ecx
// 0056d8fe  d9542414             fst dword ptr [esp + 0x14]
// 0056d902  56                   push esi
// 0056d903  d95c241c             fstp dword ptr [esp + 0x1c]
// 0056d907  e88483eaff           call 0x415c90
// 0056d90c  83c404               add esp, 4
// 0056d90f  50                   push eax
// 0056d910  e89b120500           call 0x5bebb0
// 0056d915  83c408               add esp, 8
// 0056d918  84c0                 test al, al
// 0056d91a  742e                 je 0x56d94a
// 0056d91c  8d54240c             lea edx, [esp + 0xc]
// 0056d920  52                   push edx
// 0056d921  8bce                 mov ecx, esi
// 0056d923  e8a8f8ffff           call 0x56d1d0
// 0056d928  e833f5ffff           call 0x56ce60
// 0056d92d  56                   push esi
// 0056d92e  8907                 mov dword ptr [edi], eax
// 0056d930  e89bedffff           call 0x56c