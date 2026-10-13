// from server: 100% by king_originala
// roc 2008-06 004055f0  unit: VCWorkspace::?$CComObject  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004055f0
//
// 004055f0  55                   push ebp
// 004055f1  8bec                 mov ebp, esp
// 004055f3  6aff                 push -1
// 004055f5  6898cd7b00           push 0x7bcd98
// 004055fa  64a100000000         mov eax, dword ptr fs:[0]
// 00405600  50                   push eax
// 00405601  64892500000000       mov dword ptr fs:[0], esp
// 00405608  51                   push ecx
// 00405609  53                   push ebx
// 0040560a  56                   push esi
// 0040560b  33f6                 xor esi, esi
// 0040560d  57                   push edi
// 0040560e  8975f0               mov dword ptr [ebp - 0x10], esi
// 00405611  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 00405614  8975fc               mov dword ptr [ebp - 4], esi
// 00405617  3bde                 cmp ebx, esi
// 00405619  7479                 je 0x405694
// 0040561b  53                   push ebx
// 0040561c  ff15e8228000         call dword ptr [0x8022e8]
// 00405622  56                   push esi
// 00405623  40                   inc eax
// 00405624  99                   cdq 
// 00405625  6a02                 push 2
// 00405627  52                   push edx
// 00405628  50                   push eax
// 00405629  e8a2c02900           call 0x6a16d0
// 0040562e  8bf8                 mov edi, eax
// 00405630  0500000080           add eax, 0x80000000
// 00405635  13d6                 adc edx, esi
// 00405637  85d2                 test edx, edx
// 00405639  7759                 ja 0x405694
// 0040563b  7205                 jb 0x405642
// 0040563d  83f8ff               cmp eax, -1
// 00405640  7752                 ja 0x405694
// 00405642  81ff00040000         cmp edi, 0x400
// 00405648  7f18                 jg 0x405662
// 0040564a  57                   push edi
// 0040564b  e8c0cfffff           call 0x402610
// 00405650  83c404               add esp, 4
// 00405653  84c0                 test al, al
// 00405655  740b                 je 0x405662
// 00405657  8bc7                 mov eax, edi
// 00405659  e802bf2900           call 0x6a1560
// 0040565e  8bc4                 mov eax, esp
// 00405660  eb0c                 jmp 0x40566e
// 00405662  57                   push edi
// 00405663  8d4df0               lea ecx, [ebp - 0x10]
// 00405666  e8e5d8ffff           call 0x402f50
// 0040566b  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 0040566e  6a03                 push 3
// 00405670  57                   push edi
// 00405671  53                   push ebx
// 00405672  50                   push eax
// 00405673  e828c1ffff           call 0x4017a0
// 00405678  85c0                 test eax, eax
// 0040567a  751f                 jne 0x40569b
// 0040567c  85f6                 test esi, esi
// 0040567e  7414                 je 0x405694
// 00405680  8b3dc0288000         mov edi, dword ptr [0x8028c0]
// 00405686  8bc6                 mov eax, esi
// 00405688  8b36                 mov esi, dword ptr [esi]
// 0040568a  50                   push eax
// 0040568b  ffd7                 call edi
// 0040568d  83c404               add esp, 4
// 00405690  85f6                 test esi, esi
// 00405692  75f2                 jne 0x405686
// 00405694  b80e000780           mov eax, 0x8007000e
// 00405699  eb35                 jmp 0x4056d0
// 0040569b  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0040569e  6a01                 push 1
// 004056a0  50                   push eax
// 004056a1  0fb74510             movzx eax, word ptr [ebp + 0x10]
// 004056a5  50                   push eax
// 004056a6  51                   push ecx
// 004056a7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004056aa  e8f1fcffff           call 0x4053a0
// 004056af  8bd8                 mov ebx, eax
// 004056b1  85f6                 test esi, esi
// 004056b3  7419                 je 0x4056ce
// 004056b5  8b3dc0288000         mov edi, dword ptr [0x8028c0]
// 004056bb  eb03                 jmp 0x4056c0
// 004056bd  8d4900               lea ecx, [ecx]
// 004056c0  8bc6                 mov eax, esi
// 004056c2  8b36                 mov esi, dword ptr [esi]
// 004056c4  50                   push eax
// 004056c5  ffd7                 call edi
// 004056c7  83c404               add esp, 4
// 004056ca  85f6                 test esi, esi
// 004056cc  75f2                 jne 0x4056c0
// 004056ce  8bc3                 mov eax, ebx
// 004056d0  8d65e4               lea esp, [ebp - 0x1c]
// 004056d3  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004056d6  64890d00000000       mov dword ptr fs:[0], ecx
// 004056dd  5f                   pop edi
// 004056de  5e                   pop esi
// 004056df  5b                   pop ebx
// 004056e0  8be5                 mov esp, ebp
// 004056e2  5d                   pop ebp
// 004056e3  c21000               ret 0x10
// library atl-9.0-dll-rtm-eh/atl.cpp (function ?ResourceRegister@CRegObject@ATL@@UAGJPB_WI0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm atl.cpp
