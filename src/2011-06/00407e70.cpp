// roc 2011-06 00407e70  unit: VCApp::?$CComContainedObject  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00407e70
//
// 00407e70  55                   push ebp
// 00407e71  8bec                 mov ebp, esp
// 00407e73  6aff                 push -1
// 00407e75  6888d39c00           push 0x9cd388
// 00407e7a  64a100000000         mov eax, dword ptr fs:[0]
// 00407e80  50                   push eax
// 00407e81  64892500000000       mov dword ptr fs:[0], esp
// 00407e88  51                   push ecx
// 00407e89  53                   push ebx
// 00407e8a  56                   push esi
// 00407e8b  33f6                 xor esi, esi
// 00407e8d  57                   push edi
// 00407e8e  8975f0               mov dword ptr [ebp - 0x10], esi
// 00407e91  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 00407e94  8975fc               mov dword ptr [ebp - 4], esi
// 00407e97  3bde                 cmp ebx, esi
// 00407e99  7479                 je 0x407f14
// 00407e9b  53                   push ebx
// 00407e9c  ff155803a400         call dword ptr [0xa40358]
// 00407ea2  56                   push esi
// 00407ea3  40                   inc eax
// 00407ea4  99                   cdq 
// 00407ea5  6a02                 push 2
// 00407ea7  52                   push edx
// 00407ea8  50                   push eax
// 00407ea9  e802344000           call 0x80b2b0
// 00407eae  8bf8                 mov edi, eax
// 00407eb0  0500000080           add eax, 0x80000000
// 00407eb5  13d6                 adc edx, esi
// 00407eb7  85d2                 test edx, edx
// 00407eb9  7759                 ja 0x407f14
// 00407ebb  7205                 jb 0x407ec2
// 00407ebd  83f8ff               cmp eax, -1
// 00407ec0  7752                 ja 0x407f14
// 00407ec2  81ff00040000         cmp edi, 0x400
// 00407ec8  7f18                 jg 0x407ee2
// 00407eca  57                   push edi
// 00407ecb  e850c7ffff           call 0x404620
// 00407ed0  83c404               add esp, 4
// 00407ed3  84c0                 test al, al
// 00407ed5  740b                 je 0x407ee2
// 00407ed7  8bc7                 mov eax, edi
// 00407ed9  e8a2334000           call 0x80b280
// 00407ede  8bc4                 mov eax, esp
// 00407ee0  eb0c                 jmp 0x407eee
// 00407ee2  57                   push edi
// 00407ee3  8d4df0               lea ecx, [ebp - 0x10]
// 00407ee6  e8e5ccffff           call 0x404bd0
// 00407eeb  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 00407eee  6a03                 push 3
// 00407ef0  57                   push edi
// 00407ef1  53                   push ebx
// 00407ef2  50                   push eax
// 00407ef3  e838b6ffff           call 0x403530
// 00407ef8  85c0                 test eax, eax
// 00407efa  751f                 jne 0x407f1b
// 00407efc  85f6                 test esi, esi
// 00407efe  7414                 je 0x407f14
// 00407f00  8b3d740aa400         mov edi, dword ptr [0xa40a74]
// 00407f06  8bc6                 mov eax, esi
// 00407f08  8b36                 mov esi, dword ptr [esi]
// 00407f0a  50                   push eax
// 00407f0b  ffd7                 call edi
// 00407f0d  83c404               add esp, 4
// 00407f10  85f6                 test esi, esi
// 00407f12  75f2                 jne 0x407f06
// 00407f14  b80e000780           mov eax, 0x8007000e
// 00407f19  eb35                 jmp 0x407f50
// 00407f1b  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00407f1e  6a01                 push 1
// 00407f20  50                   push eax
// 00407f21  0fb74510             movzx eax, word ptr [ebp + 0x10]
// 00407f25  50                   push eax
// 00407f26  51                   push ecx
// 00407f27  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00407f2a  e8f1fcffff           call 0x407c20
// 00407f2f  8bd8                 mov ebx, eax
// 00407f31  85f6                 test esi, esi
// 00407f33  7419                 je 0x407f4e
// 00407f35  8b3d740aa400         mov edi, dword ptr [0xa40a74]
// 00407f3b  eb03                 jmp 0x407f40
// 00407f3d  8d4900               lea ecx, [ecx]
// 00407f40  8bc6                 mov eax, esi
// 00407f42  8b36                 mov esi, dword ptr [esi]
// 00407f44  50                   push eax
// 00407f45  ffd7                 call edi
// 00407f47  83c404               add esp, 4
// 00407f4a  85f6                 test esi, esi
// 00407f4c  75f2                 jne 0x407f40
// 00407f4e  8bc3                 mov eax, ebx
// 00407f50  8d65e4               lea esp, [ebp - 0x1c]
// 00407f53  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00407f56  64890d00000000       mov dword ptr fs:[0], ecx
// 00407f5d  5f                   pop edi
// 00407f5e  5e                   pop esi
// 00407f5f  5b                   pop ebx
// 00407f60  8be5                 mov esp, ebp
// 00407f62  5d                   pop ebp
// 00407f63  c21000               ret 0x10
// copied from an identical function in another client (function ?ResourceRegister@CRegObject@ATL@@UAGJPB_WI0@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp