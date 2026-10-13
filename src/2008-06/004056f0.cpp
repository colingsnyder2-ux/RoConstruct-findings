// from server: 100% by king_originala
// roc 2008-06 004056f0  unit: VCWorkspace::?$CComObject  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004056f0
//
// 004056f0  55                   push ebp
// 004056f1  8bec                 mov ebp, esp
// 004056f3  6aff                 push -1
// 004056f5  6898cd7b00           push 0x7bcd98
// 004056fa  64a100000000         mov eax, dword ptr fs:[0]
// 00405700  50                   push eax
// 00405701  64892500000000       mov dword ptr fs:[0], esp
// 00405708  51                   push ecx
// 00405709  53                   push ebx
// 0040570a  56                   push esi
// 0040570b  33f6                 xor esi, esi
// 0040570d  57                   push edi
// 0040570e  8975f0               mov dword ptr [ebp - 0x10], esi
// 00405711  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 00405714  8975fc               mov dword ptr [ebp - 4], esi
// 00405717  3bde                 cmp ebx, esi
// 00405719  7479                 je 0x405794
// 0040571b  53                   push ebx
// 0040571c  ff15e8228000         call dword ptr [0x8022e8]
// 00405722  56                   push esi
// 00405723  40                   inc eax
// 00405724  99                   cdq 
// 00405725  6a02                 push 2
// 00405727  52                   push edx
// 00405728  50                   push eax
// 00405729  e8a2bf2900           call 0x6a16d0
// 0040572e  8bf8                 mov edi, eax
// 00405730  0500000080           add eax, 0x80000000
// 00405735  13d6                 adc edx, esi
// 00405737  85d2                 test edx, edx
// 00405739  7759                 ja 0x405794
// 0040573b  7205                 jb 0x405742
// 0040573d  83f8ff               cmp eax, -1
// 00405740  7752                 ja 0x405794
// 00405742  81ff00040000         cmp edi, 0x400
// 00405748  7f18                 jg 0x405762
// 0040574a  57                   push edi
// 0040574b  e8c0ceffff           call 0x402610
// 00405750  83c404               add esp, 4
// 00405753  84c0                 test al, al
// 00405755  740b                 je 0x405762
// 00405757  8bc7                 mov eax, edi
// 00405759  e802be2900           call 0x6a1560
// 0040575e  8bc4                 mov eax, esp
// 00405760  eb0c                 jmp 0x40576e
// 00405762  57                   push edi
// 00405763  8d4df0               lea ecx, [ebp - 0x10]
// 00405766  e8e5d7ffff           call 0x402f50
// 0040576b  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 0040576e  6a03                 push 3
// 00405770  57                   push edi
// 00405771  53                   push ebx
// 00405772  50                   push eax
// 00405773  e828c0ffff           call 0x4017a0
// 00405778  85c0                 test eax, eax
// 0040577a  751f                 jne 0x40579b
// 0040577c  85f6                 test esi, esi
// 0040577e  7414                 je 0x405794
// 00405780  8b3dc0288000         mov edi, dword ptr [0x8028c0]
// 00405786  8bc6                 mov eax, esi
// 00405788  8b36                 mov esi, dword ptr [esi]
// 0040578a  50                   push eax
// 0040578b  ffd7                 call edi
// 0040578d  83c404               add esp, 4
// 00405790  85f6                 test esi, esi
// 00405792  75f2                 jne 0x405786
// 00405794  b80e000780           mov eax, 0x8007000e
// 00405799  eb35                 jmp 0x4057d0
// 0040579b  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0040579e  6a00                 push 0
// 004057a0  50                   push eax
// 004057a1  0fb74510             movzx eax, word ptr [ebp + 0x10]
// 004057a5  50                   push eax
// 004057a6  51                   push ecx
// 004057a7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004057aa  e8f1fbffff           call 0x4053a0
// 004057af  8bd8                 mov ebx, eax
// 004057b1  85f6                 test esi, esi
// 004057b3  7419                 je 0x4057ce
// 004057b5  8b3dc0288000         mov edi, dword ptr [0x8028c0]
// 004057bb  eb03                 jmp 0x4057c0
// 004057bd  8d4900               lea ecx, [ecx]
// 004057c0  8bc6                 mov eax, esi
// 004057c2  8b36                 mov esi, dword ptr [esi]
// 004057c4  50                   push eax
// 004057c5  ffd7                 call edi
// 004057c7  83c404               add esp, 4
// 004057ca  85f6                 test esi, esi
// 004057cc  75f2                 jne 0x4057c0
// 004057ce  8bc3                 mov eax, ebx
// 004057d0  8d65e4               lea esp, [ebp - 0x1c]
// 004057d3  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004057d6  64890d00000000       mov dword ptr fs:[0], ecx
// 004057dd  5f                   pop edi
// 004057de  5e                   pop esi
// 004057df  5b                   pop ebx
// 004057e0  8be5                 mov esp, ebp
// 004057e2  5d                   pop ebp
// 004057e3  c21000               ret 0x10
// library atl-9.0-dll-rtm-eh/atl.cpp (function ?ResourceUnregister@CRegObject@ATL@@UAGJPB_WI0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm atl.cpp
