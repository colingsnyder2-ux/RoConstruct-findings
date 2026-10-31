// roc 2009-06 00407580  unit: VCApp::?$CComContainedObject  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00407580
//
// 00407580  55                   push ebp
// 00407581  8bec                 mov ebp, esp
// 00407583  6aff                 push -1
// 00407585  6858da8400           push 0x84da58
// 0040758a  64a100000000         mov eax, dword ptr fs:[0]
// 00407590  50                   push eax
// 00407591  64892500000000       mov dword ptr fs:[0], esp
// 00407598  51                   push ecx
// 00407599  53                   push ebx
// 0040759a  56                   push esi
// 0040759b  33f6                 xor esi, esi
// 0040759d  57                   push edi
// 0040759e  8975f0               mov dword ptr [ebp - 0x10], esi
// 004075a1  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 004075a4  8975fc               mov dword ptr [ebp - 4], esi
// 004075a7  3bde                 cmp ebx, esi
// 004075a9  7479                 je 0x407624
// 004075ab  53                   push ebx
// 004075ac  ff1500e28900         call dword ptr [0x89e200]
// 004075b2  56                   push esi
// 004075b3  40                   inc eax
// 004075b4  99                   cdq 
// 004075b5  6a02                 push 2
// 004075b7  52                   push edx
// 004075b8  50                   push eax
// 004075b9  e882263100           call 0x719c40
// 004075be  8bf8                 mov edi, eax
// 004075c0  0500000080           add eax, 0x80000000
// 004075c5  13d6                 adc edx, esi
// 004075c7  85d2                 test edx, edx
// 004075c9  7759                 ja 0x407624
// 004075cb  7205                 jb 0x4075d2
// 004075cd  83f8ff               cmp eax, -1
// 004075d0  7752                 ja 0x407624
// 004075d2  81ff00040000         cmp edi, 0x400
// 004075d8  7f18                 jg 0x4075f2
// 004075da  57                   push edi
// 004075db  e850c8ffff           call 0x403e30
// 004075e0  83c404               add esp, 4
// 004075e3  84c0                 test al, al
// 004075e5  740b                 je 0x4075f2
// 004075e7  8bc7                 mov eax, edi
// 004075e9  e822263100           call 0x719c10
// 004075ee  8bc4                 mov eax, esp
// 004075f0  eb0c                 jmp 0x4075fe
// 004075f2  57                   push edi
// 004075f3  8d4df0               lea ecx, [ebp - 0x10]
// 004075f6  e8d5cdffff           call 0x4043d0
// 004075fb  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 004075fe  6a03                 push 3
// 00407600  57                   push edi
// 00407601  53                   push ebx
// 00407602  50                   push eax
// 00407603  e838b8ffff           call 0x402e40
// 00407608  85c0                 test eax, eax
// 0040760a  751f                 jne 0x40762b
// 0040760c  85f6                 test esi, esi
// 0040760e  7414                 je 0x407624
// 00407610  8b3dcce98900         mov edi, dword ptr [0x89e9cc]
// 00407616  8bc6                 mov eax, esi
// 00407618  8b36                 mov esi, dword ptr [esi]
// 0040761a  50                   push eax
// 0040761b  ffd7                 call edi
// 0040761d  83c404               add esp, 4
// 00407620  85f6                 test esi, esi
// 00407622  75f2                 jne 0x407616
// 00407624  b80e000780           mov eax, 0x8007000e
// 00407629  eb35                 jmp 0x407660
// 0040762b  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0040762e  6a01                 push 1
// 00407630  50                   push eax
// 00407631  0fb74510             movzx eax, word ptr [ebp + 0x10]
// 00407635  50                   push eax
// 00407636  51                   push ecx
// 00407637  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040763a  e8f1fcffff           call 0x407330
// 0040763f  8bd8                 mov ebx, eax
// 00407641  85f6                 test esi, esi
// 00407643  7419                 je 0x40765e
// 00407645  8b3dcce98900         mov edi, dword ptr [0x89e9cc]
// 0040764b  eb03                 jmp 0x407650
// 0040764d  8d4900               lea ecx, [ecx]
// 00407650  8bc6                 mov eax, esi
// 00407652  8b36                 mov esi, dword ptr [esi]
// 00407654  50                   push eax
// 00407655  ffd7                 call edi
// 00407657  83c404               add esp, 4
// 0040765a  85f6                 test esi, esi
// 0040765c  75f2                 jne 0x407650
// 0040765e  8bc3                 mov eax, ebx
// 00407660  8d65e4               lea esp, [ebp - 0x1c]
// 00407663  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00407666  64890d00000000       mov dword ptr fs:[0], ecx
// 0040766d  5f                   pop edi
// 0040766e  5e                   pop esi
// 0040766f  5b                   pop ebx
// 00407670  8be5                 mov esp, ebp
// 00407672  5d                   pop ebp
// 00407673  c21000               ret 0x10
// copied from an identical function in another client (function ?ResourceRegister@CRegObject@ATL@@UAGJPB_WI0@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp