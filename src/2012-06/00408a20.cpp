// roc 2012-06 00408a20  unit: VCApp::?$CComAggObject  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00408a20
//
// 00408a20  55                   push ebp
// 00408a21  8bec                 mov ebp, esp
// 00408a23  6aff                 push -1
// 00408a25  68c8a3a900           push 0xa9a3c8
// 00408a2a  64a100000000         mov eax, dword ptr fs:[0]
// 00408a30  50                   push eax
// 00408a31  64892500000000       mov dword ptr fs:[0], esp
// 00408a38  51                   push ecx
// 00408a39  53                   push ebx
// 00408a3a  56                   push esi
// 00408a3b  33f6                 xor esi, esi
// 00408a3d  57                   push edi
// 00408a3e  8975f0               mov dword ptr [ebp - 0x10], esi
// 00408a41  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 00408a44  8975fc               mov dword ptr [ebp - 4], esi
// 00408a47  3bde                 cmp ebx, esi
// 00408a49  7479                 je 0x408ac4
// 00408a4b  53                   push ebx
// 00408a4c  ff15c421b200         call dword ptr [0xb221c4]
// 00408a52  56                   push esi
// 00408a53  40                   inc eax
// 00408a54  99                   cdq 
// 00408a55  6a02                 push 2
// 00408a57  52                   push edx
// 00408a58  50                   push eax
// 00408a59  e8e2a85700           call 0x983340
// 00408a5e  8bf8                 mov edi, eax
// 00408a60  0500000080           add eax, 0x80000000
// 00408a65  13d6                 adc edx, esi
// 00408a67  85d2                 test edx, edx
// 00408a69  7759                 ja 0x408ac4
// 00408a6b  7205                 jb 0x408a72
// 00408a6d  83f8ff               cmp eax, -1
// 00408a70  7752                 ja 0x408ac4
// 00408a72  81ff00040000         cmp edi, 0x400
// 00408a78  7f18                 jg 0x408a92
// 00408a7a  57                   push edi
// 00408a7b  e8f0c2ffff           call 0x404d70
// 00408a80  83c404               add esp, 4
// 00408a83  84c0                 test al, al
// 00408a85  740b                 je 0x408a92
// 00408a87  8bc7                 mov eax, edi
// 00408a89  e882a85700           call 0x983310
// 00408a8e  8bc4                 mov eax, esp
// 00408a90  eb0c                 jmp 0x408a9e
// 00408a92  57                   push edi
// 00408a93  8d4df0               lea ecx, [ebp - 0x10]
// 00408a96  e885c7ffff           call 0x405220
// 00408a9b  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 00408a9e  6a03                 push 3
// 00408aa0  57                   push edi
// 00408aa1  53                   push ebx
// 00408aa2  50                   push eax
// 00408aa3  e898b6ffff           call 0x404140
// 00408aa8  85c0                 test eax, eax
// 00408aaa  751f                 jne 0x408acb
// 00408aac  85f6                 test esi, esi
// 00408aae  7414                 je 0x408ac4
// 00408ab0  8b3dc829b200         mov edi, dword ptr [0xb229c8]
// 00408ab6  8bc6                 mov eax, esi
// 00408ab8  8b36                 mov esi, dword ptr [esi]
// 00408aba  50                   push eax
// 00408abb  ffd7                 call edi
// 00408abd  83c404               add esp, 4
// 00408ac0  85f6                 test esi, esi
// 00408ac2  75f2                 jne 0x408ab6
// 00408ac4  b80e000780           mov eax, 0x8007000e
// 00408ac9  eb35                 jmp 0x408b00
// 00408acb  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00408ace  6a01                 push 1
// 00408ad0  50                   push eax
// 00408ad1  0fb74510             movzx eax, word ptr [ebp + 0x10]
// 00408ad5  50                   push eax
// 00408ad6  51                   push ecx
// 00408ad7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00408ada  e8f1fcffff           call 0x4087d0
// 00408adf  8bd8                 mov ebx, eax
// 00408ae1  85f6                 test esi, esi
// 00408ae3  7419                 je 0x408afe
// 00408ae5  8b3dc829b200         mov edi, dword ptr [0xb229c8]
// 00408aeb  eb03                 jmp 0x408af0
// 00408aed  8d4900               lea ecx, [ecx]
// 00408af0  8bc6                 mov eax, esi
// 00408af2  8b36                 mov esi, dword ptr [esi]
// 00408af4  50                   push eax
// 00408af5  ffd7                 call edi
// 00408af7  83c404               add esp, 4
// 00408afa  85f6                 test esi, esi
// 00408afc  75f2                 jne 0x408af0
// 00408afe  8bc3                 mov eax, ebx
// 00408b00  8d65e4               lea esp, [ebp - 0x1c]
// 00408b03  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00408b06  64890d00000000       mov dword ptr fs:[0], ecx
// 00408b0d  5f                   pop edi
// 00408b0e  5e                   pop esi
// 00408b0f  5b                   pop ebx
// 00408b10  8be5                 mov esp, ebp
// 00408b12  5d                   pop ebp
// 00408b13  c21000               ret 0x10
// copied from an identical function in another client (function ?ResourceRegister@CRegObject@ATL@@UAGJPB_WI0@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp