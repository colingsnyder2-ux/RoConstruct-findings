// roc 2009-12 00841750  unit: CXTPCustomizeCommandsPage  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841750
//
// 00841750  83ec08               sub esp, 8
// 00841753  53                   push ebx
// 00841754  55                   push ebp
// 00841755  56                   push esi
// 00841756  57                   push edi
// 00841757  8bf1                 mov esi, ecx
// 00841759  e8262afbff           call 0x7f4184
// 0084175e  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 00841764  33ff                 xor edi, edi
// 00841766  39be44010000         cmp dword ptr [esi + 0x144], edi
// 0084176c  7e66                 jle 0x8417d4
// 0084176e  8bff                 mov edi, edi
// 00841770  85ff                 test edi, edi
// 00841772  0f8c1c010000         jl 0x841894
// 00841778  3bbe44010000         cmp edi, dword ptr [esi + 0x144]
// 0084177e  0f8d10010000         jge 0x841894
// 00841784  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 0084178a  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0084178d  8d04b8               lea eax, [eax + edi*4]
// 00841790  ff1580de9800         call dword ptr [0x98de80]
// 00841796  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0084179c  50                   push eax
// 0084179d  6a00                 push 0
// 0084179f  6880010000           push 0x180
// 008417a4  51                   push ecx
// 008417a5  ffd3                 call ebx
// 008417a7  8b9604010000         mov edx, dword ptr [esi + 0x104]
// 008417ad  57                   push edi
// 008417ae  50                   push eax
// 008417af  689a010000           push 0x19a
// 008417b4  52                   push edx
// 008417b5  ffd3                 call ebx
// 008417b7  85ff                 test edi, edi
// 008417b9  7510                 jne 0x8417cb
// 008417bb  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 008417c1  57                   push edi
// 008417c2  57                   push edi
// 008417c3  6886010000           push 0x186
// 008417c8  50                   push eax
// 008417c9  ffd3                 call ebx
// 008417cb  47                   inc edi
// 008417cc  3bbe44010000         cmp edi, dword ptr [esi + 0x144]
// 008417d2  7c9c                 jl 0x841770
// 008417d4  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 008417da  8bb9b8000000         mov edi, dword ptr [ecx + 0xb8]
// 008417e0  8bcf                 mov ecx, edi
// 008417e2  e8f92efdff           call 0x8146e0
// 008417e7  8b28                 mov ebp, dword ptr [eax]
// 008417e9  33c9                 xor ecx, ecx
// 008417eb  57                   push edi
// 008417ec  51                   push ecx
// 008417ed  51                   push ecx
// 008417ee  83ec10               sub esp, 0x10
// 008417f1  8bd4                 mov edx, esp
// 008417f3  890a                 mov dword ptr [edx], ecx
// 008417f5  894a04               mov dword ptr [edx + 4], ecx
// 008417f8  894a08               mov dword ptr [edx + 8], ecx
// 008417fb  51                   push ecx
// 008417fc  894a0c               mov dword ptr [edx + 0xc], ecx
// 008417ff  51                   push ecx
// 00841800  8d542434             lea edx, [esp + 0x34]
// 00841804  8bc8                 mov ecx, eax
// 00841806  8b4570               mov eax, dword ptr [ebp + 0x70]
// 00841809  52                   push edx
// 0084180a  ffd0                 call eax
// 0084180c  0fb74c2414           movzx ecx, word ptr [esp + 0x14]
// 00841811  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 00841817  51                   push ecx
// 00841818  6aff                 push -1
// 0084181a  68a0010000           push 0x1a0
// 0084181f  52                   push edx
// 00841820  ffd3                 call ebx
// 00841822  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 00841828  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 0084182e  898edc000000         mov dword ptr [esi + 0xdc], ecx
// 00841834  8bcf                 mov ecx, edi
// 00841836  c786e000000001000000 mov dword ptr [esi + 0xe0], 1
// 00841840  e85b2bfdff           call 0x8143a0
// 00841845  85c0                 test eax, eax
// 00841847  7428                 je 0x841871
// 00841849  6a00                 push 0
// 0084184b  6800004000           push 0x400000
// 00841850  6a00                 push 0
// 00841852  8d8e88000000         lea ecx, [esi + 0x88]
// 00841858  e8a325fbff           call 0x7f3e00
// 0084185d  6a00                 push 0
// 0084185f  6800700000           push 0x7000
// 00841864  6a00                 push 0
// 00841866  8d8ee4000000         lea ecx, [esi + 0xe4]
// 0084186c  e88f25fbff           call 0x7f3e00
// 00841871  8b5620               mov edx, dword ptr [esi + 0x20]
// 00841874  52                   push edx
// 00841875  8bcf                 mov ecx, edi
// 00841877  e8f442fdff           call 0x815b70
// 0084187c  8bc8                 mov ecx, eax
// 0084187e  e83dde0200           call 0x86f6c0
// 00841883  8bce                 mov ecx, esi
// 00841885  e806fbffff           call 0x841390
// 0084188a  5f                   pop edi
// 0084188b  5e                   pop esi
// 0084188c  5d                   pop ebp
// 0084188d  33c0                 xor eax, eax
// 0084188f  5b                   pop ebx
// 00841890  83c408               add esp, 8
// 00841893  c3                   ret 
// 00841894  e87322fbff           call 0x7f3b0c
// copied from an identical function in another client (function ?OnInitDialog@CXTPCustomizeCommandsPage@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCustomizeCommandsPage.cpp