// roc 2010-06 00407720  unit: VCApp::?$CComAggObject  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00407720
//
// 00407720  55                   push ebp
// 00407721  8bec                 mov ebp, esp
// 00407723  6aff                 push -1
// 00407725  6878e89700           push 0x97e878
// 0040772a  64a100000000         mov eax, dword ptr fs:[0]
// 00407730  50                   push eax
// 00407731  64892500000000       mov dword ptr fs:[0], esp
// 00407738  51                   push ecx
// 00407739  53                   push ebx
// 0040773a  56                   push esi
// 0040773b  33f6                 xor esi, esi
// 0040773d  57                   push edi
// 0040773e  8975f0               mov dword ptr [ebp - 0x10], esi
// 00407741  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 00407744  8975fc               mov dword ptr [ebp - 4], esi
// 00407747  3bde                 cmp ebx, esi
// 00407749  7479                 je 0x4077c4
// 0040774b  53                   push ebx
// 0040774c  ff15a8a39e00         call dword ptr [0x9ea3a8]
// 00407752  56                   push esi
// 00407753  40                   inc eax
// 00407754  99                   cdq 
// 00407755  6a02                 push 2
// 00407757  52                   push edx
// 00407758  50                   push eax
// 00407759  e852143a00           call 0x7a8bb0
// 0040775e  8bf8                 mov edi, eax
// 00407760  0500000080           add eax, 0x80000000
// 00407765  13d6                 adc edx, esi
// 00407767  85d2                 test edx, edx
// 00407769  7759                 ja 0x4077c4
// 0040776b  7205                 jb 0x407772
// 0040776d  83f8ff               cmp eax, -1
// 00407770  7752                 ja 0x4077c4
// 00407772  81ff00040000         cmp edi, 0x400
// 00407778  7f18                 jg 0x407792
// 0040777a  57                   push edi
// 0040777b  e8d0c3ffff           call 0x403b50
// 00407780  83c404               add esp, 4
// 00407783  84c0                 test al, al
// 00407785  740b                 je 0x407792
// 00407787  8bc7                 mov eax, edi
// 00407789  e8f2133a00           call 0x7a8b80
// 0040778e  8bc4                 mov eax, esp
// 00407790  eb0c                 jmp 0x40779e
// 00407792  57                   push edi
// 00407793  8d4df0               lea ecx, [ebp - 0x10]
// 00407796  e855c9ffff           call 0x4040f0
// 0040779b  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 0040779e  6a03                 push 3
// 004077a0  57                   push edi
// 004077a1  53                   push ebx
// 004077a2  50                   push eax
// 004077a3  e8b8b3ffff           call 0x402b60
// 004077a8  85c0                 test eax, eax
// 004077aa  751f                 jne 0x4077cb
// 004077ac  85f6                 test esi, esi
// 004077ae  7414                 je 0x4077c4
// 004077b0  8b3d08aa9e00         mov edi, dword ptr [0x9eaa08]
// 004077b6  8bc6                 mov eax, esi
// 004077b8  8b36                 mov esi, dword ptr [esi]
// 004077ba  50                   push eax
// 004077bb  ffd7                 call edi
// 004077bd  83c404               add esp, 4
// 004077c0  85f6                 test esi, esi
// 004077c2  75f2                 jne 0x4077b6
// 004077c4  b80e000780           mov eax, 0x8007000e
// 004077c9  eb35                 jmp 0x407800
// 004077cb  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004077ce  6a00                 push 0
// 004077d0  50                   push eax
// 004077d1  0fb74510             movzx eax, word ptr [ebp + 0x10]
// 004077d5  50                   push eax
// 004077d6  51                   push ecx
// 004077d7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004077da  e8f1fbffff           call 0x4073d0
// 004077df  8bd8                 mov ebx, eax
// 004077e1  85f6                 test esi, esi
// 004077e3  7419                 je 0x4077fe
// 004077e5  8b3d08aa9e00         mov edi, dword ptr [0x9eaa08]
// 004077eb  eb03                 jmp 0x4077f0
// 004077ed  8d4900               lea ecx, [ecx]
// 004077f0  8bc6                 mov eax, esi
// 004077f2  8b36                 mov esi, dword ptr [esi]
// 004077f4  50                   push eax
// 004077f5  ffd7                 call edi
// 004077f7  83c404               add esp, 4
// 004077fa  85f6                 test esi, esi
// 004077fc  75f2                 jne 0x4077f0
// 004077fe  8bc3                 mov eax, ebx
// 00407800  8d65e4               lea esp, [ebp - 0x1c]
// 00407803  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00407806  64890d00000000       mov dword ptr fs:[0], ecx
// 0040780d  5f                   pop edi
// 0040780e  5e                   pop esi
// 0040780f  5b                   pop ebx
// 00407810  8be5                 mov esp, ebp
// 00407812  5d                   pop ebp
// 00407813  c21000               ret 0x10
// copied from an identical function in another client (function ?ResourceUnregister@CRegObject@ATL@@UAGJPB_WI0@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp