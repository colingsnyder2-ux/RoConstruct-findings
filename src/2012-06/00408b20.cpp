// roc 2012-06 00408b20  unit: VCApp::?$CComAggObject  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00408b20
//
// 00408b20  55                   push ebp
// 00408b21  8bec                 mov ebp, esp
// 00408b23  6aff                 push -1
// 00408b25  68c8a3a900           push 0xa9a3c8
// 00408b2a  64a100000000         mov eax, dword ptr fs:[0]
// 00408b30  50                   push eax
// 00408b31  64892500000000       mov dword ptr fs:[0], esp
// 00408b38  51                   push ecx
// 00408b39  53                   push ebx
// 00408b3a  56                   push esi
// 00408b3b  33f6                 xor esi, esi
// 00408b3d  57                   push edi
// 00408b3e  8975f0               mov dword ptr [ebp - 0x10], esi
// 00408b41  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 00408b44  8975fc               mov dword ptr [ebp - 4], esi
// 00408b47  3bde                 cmp ebx, esi
// 00408b49  7479                 je 0x408bc4
// 00408b4b  53                   push ebx
// 00408b4c  ff15c421b200         call dword ptr [0xb221c4]
// 00408b52  56                   push esi
// 00408b53  40                   inc eax
// 00408b54  99                   cdq 
// 00408b55  6a02                 push 2
// 00408b57  52                   push edx
// 00408b58  50                   push eax
// 00408b59  e8e2a75700           call 0x983340
// 00408b5e  8bf8                 mov edi, eax
// 00408b60  0500000080           add eax, 0x80000000
// 00408b65  13d6                 adc edx, esi
// 00408b67  85d2                 test edx, edx
// 00408b69  7759                 ja 0x408bc4
// 00408b6b  7205                 jb 0x408b72
// 00408b6d  83f8ff               cmp eax, -1
// 00408b70  7752                 ja 0x408bc4
// 00408b72  81ff00040000         cmp edi, 0x400
// 00408b78  7f18                 jg 0x408b92
// 00408b7a  57                   push edi
// 00408b7b  e8f0c1ffff           call 0x404d70
// 00408b80  83c404               add esp, 4
// 00408b83  84c0                 test al, al
// 00408b85  740b                 je 0x408b92
// 00408b87  8bc7                 mov eax, edi
// 00408b89  e882a75700           call 0x983310
// 00408b8e  8bc4                 mov eax, esp
// 00408b90  eb0c                 jmp 0x408b9e
// 00408b92  57                   push edi
// 00408b93  8d4df0               lea ecx, [ebp - 0x10]
// 00408b96  e885c6ffff           call 0x405220
// 00408b9b  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 00408b9e  6a03                 push 3
// 00408ba0  57                   push edi
// 00408ba1  53                   push ebx
// 00408ba2  50                   push eax
// 00408ba3  e898b5ffff           call 0x404140
// 00408ba8  85c0                 test eax, eax
// 00408baa  751f                 jne 0x408bcb
// 00408bac  85f6                 test esi, esi
// 00408bae  7414                 je 0x408bc4
// 00408bb0  8b3dc829b200         mov edi, dword ptr [0xb229c8]
// 00408bb6  8bc6                 mov eax, esi
// 00408bb8  8b36                 mov esi, dword ptr [esi]
// 00408bba  50                   push eax
// 00408bbb  ffd7                 call edi
// 00408bbd  83c404               add esp, 4
// 00408bc0  85f6                 test esi, esi
// 00408bc2  75f2                 jne 0x408bb6
// 00408bc4  b80e000780           mov eax, 0x8007000e
// 00408bc9  eb35                 jmp 0x408c00
// 00408bcb  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00408bce  6a00                 push 0
// 00408bd0  50                   push eax
// 00408bd1  0fb74510             movzx eax, word ptr [ebp + 0x10]
// 00408bd5  50                   push eax
// 00408bd6  51                   push ecx
// 00408bd7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00408bda  e8f1fbffff           call 0x4087d0
// 00408bdf  8bd8                 mov ebx, eax
// 00408be1  85f6                 test esi, esi
// 00408be3  7419                 je 0x408bfe
// 00408be5  8b3dc829b200         mov edi, dword ptr [0xb229c8]
// 00408beb  eb03                 jmp 0x408bf0
// 00408bed  8d4900               lea ecx, [ecx]
// 00408bf0  8bc6                 mov eax, esi
// 00408bf2  8b36                 mov esi, dword ptr [esi]
// 00408bf4  50                   push eax
// 00408bf5  ffd7                 call edi
// 00408bf7  83c404               add esp, 4
// 00408bfa  85f6                 test esi, esi
// 00408bfc  75f2                 jne 0x408bf0
// 00408bfe  8bc3                 mov eax, ebx
// 00408c00  8d65e4               lea esp, [ebp - 0x1c]
// 00408c03  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00408c06  64890d00000000       mov dword ptr fs:[0], ecx
// 00408c0d  5f                   pop edi
// 00408c0e  5e                   pop esi
// 00408c0f  5b                   pop ebx
// 00408c10  8be5                 mov esp, ebp
// 00408c12  5d                   pop ebp
// 00408c13  c21000               ret 0x10
// copied from an identical function in another client (function ?ResourceUnregister@CRegObject@ATL@@UAGJPB_WI0@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp