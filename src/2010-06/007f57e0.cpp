// roc 2010-06 007f57e0  unit: CXTPCustomizeCommandsPage  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f57e0
//
// 007f57e0  83ec08               sub esp, 8
// 007f57e3  53                   push ebx
// 007f57e4  55                   push ebp
// 007f57e5  56                   push esi
// 007f57e6  57                   push edi
// 007f57e7  8bf1                 mov esi, ecx
// 007f57e9  e8d62afbff           call 0x7a82c4
// 007f57ee  8b1d54ba9e00         mov ebx, dword ptr [0x9eba54]
// 007f57f4  33ff                 xor edi, edi
// 007f57f6  39be44010000         cmp dword ptr [esi + 0x144], edi
// 007f57fc  7e66                 jle 0x7f5864
// 007f57fe  8bff                 mov edi, edi
// 007f5800  85ff                 test edi, edi
// 007f5802  0f8c1c010000         jl 0x7f5924
// 007f5808  3bbe44010000         cmp edi, dword ptr [esi + 0x144]
// 007f580e  0f8d10010000         jge 0x7f5924
// 007f5814  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 007f581a  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 007f581d  8d04b8               lea eax, [eax + edi*4]
// 007f5820  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007f5826  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 007f582c  50                   push eax
// 007f582d  6a00                 push 0
// 007f582f  6880010000           push 0x180
// 007f5834  51                   push ecx
// 007f5835  ffd3                 call ebx
// 007f5837  8b9604010000         mov edx, dword ptr [esi + 0x104]
// 007f583d  57                   push edi
// 007f583e  50                   push eax
// 007f583f  689a010000           push 0x19a
// 007f5844  52                   push edx
// 007f5845  ffd3                 call ebx
// 007f5847  85ff                 test edi, edi
// 007f5849  7510                 jne 0x7f585b
// 007f584b  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 007f5851  57                   push edi
// 007f5852  57                   push edi
// 007f5853  6886010000           push 0x186
// 007f5858  50                   push eax
// 007f5859  ffd3                 call ebx
// 007f585b  47                   inc edi
// 007f585c  3bbe44010000         cmp edi, dword ptr [esi + 0x144]
// 007f5862  7c9c                 jl 0x7f5800
// 007f5864  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 007f586a  8bb9b8000000         mov edi, dword ptr [ecx + 0xb8]
// 007f5870  8bcf                 mov ecx, edi
// 007f5872  e8492ffdff           call 0x7c87c0
// 007f5877  8b28                 mov ebp, dword ptr [eax]
// 007f5879  33c9                 xor ecx, ecx
// 007f587b  57                   push edi
// 007f587c  51                   push ecx
// 007f587d  51                   push ecx
// 007f587e  83ec10               sub esp, 0x10
// 007f5881  8bd4                 mov edx, esp
// 007f5883  890a                 mov dword ptr [edx], ecx
// 007f5885  894a04               mov dword ptr [edx + 4], ecx
// 007f5888  894a08               mov dword ptr [edx + 8], ecx
// 007f588b  51                   push ecx
// 007f588c  894a0c               mov dword ptr [edx + 0xc], ecx
// 007f588f  51                   push ecx
// 007f5890  8d542434             lea edx, [esp + 0x34]
// 007f5894  8bc8                 mov ecx, eax
// 007f5896  8b4570               mov eax, dword ptr [ebp + 0x70]
// 007f5899  52                   push edx
// 007f589a  ffd0                 call eax
// 007f589c  0fb74c2414           movzx ecx, word ptr [esp + 0x14]
// 007f58a1  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 007f58a7  51                   push ecx
// 007f58a8  6aff                 push -1
// 007f58aa  68a0010000           push 0x1a0
// 007f58af  52                   push edx
// 007f58b0  ffd3                 call ebx
// 007f58b2  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 007f58b8  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 007f58be  898edc000000         mov dword ptr [esi + 0xdc], ecx
// 007f58c4  8bcf                 mov ecx, edi
// 007f58c6  c786e000000001000000 mov dword ptr [esi + 0xe0], 1
// 007f58d0  e8ab2bfdff           call 0x7c8480
// 007f58d5  85c0                 test eax, eax
// 007f58d7  7428                 je 0x7f5901
// 007f58d9  6a00                 push 0
// 007f58db  6800004000           push 0x400000
// 007f58e0  6a00                 push 0
// 007f58e2  8d8e88000000         lea ecx, [esi + 0x88]
// 007f58e8  e85926fbff           call 0x7a7f46
// 007f58ed  6a00                 push 0
// 007f58ef  6800700000           push 0x7000
// 007f58f4  6a00                 push 0
// 007f58f6  8d8ee4000000         lea ecx, [esi + 0xe4]
// 007f58fc  e84526fbff           call 0x7a7f46
// 007f5901  8b5620               mov edx, dword ptr [esi + 0x20]
// 007f5904  52                   push edx
// 007f5905  8bcf                 mov ecx, edi
// 007f5907  e83443fdff           call 0x7c9c40
// 007f590c  8bc8                 mov ecx, eax
// 007f590e  e8bddd0200           call 0x8236d0
// 007f5913  8bce                 mov ecx, esi
// 007f5915  e806fbffff           call 0x7f5420
// 007f591a  5f                   pop edi
// 007f591b  5e                   pop esi
// 007f591c  5d                   pop ebp
// 007f591d  33c0                 xor eax, eax
// 007f591f  5b                   pop ebx
// 007f5920  83c408               add esp, 8
// 007f5923  c3                   ret 
// 007f5924  e82323fbff           call 0x7a7c4c
// copied from an identical function in another client (function ?OnInitDialog@CXTPCustomizeCommandsPage@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCustomizeCommandsPage.cpp