// roc 2011-06 00407f70  unit: VCApp::?$CComContainedObject  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00407f70
//
// 00407f70  55                   push ebp
// 00407f71  8bec                 mov ebp, esp
// 00407f73  6aff                 push -1
// 00407f75  6888d39c00           push 0x9cd388
// 00407f7a  64a100000000         mov eax, dword ptr fs:[0]
// 00407f80  50                   push eax
// 00407f81  64892500000000       mov dword ptr fs:[0], esp
// 00407f88  51                   push ecx
// 00407f89  53                   push ebx
// 00407f8a  56                   push esi
// 00407f8b  33f6                 xor esi, esi
// 00407f8d  57                   push edi
// 00407f8e  8975f0               mov dword ptr [ebp - 0x10], esi
// 00407f91  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 00407f94  8975fc               mov dword ptr [ebp - 4], esi
// 00407f97  3bde                 cmp ebx, esi
// 00407f99  7479                 je 0x408014
// 00407f9b  53                   push ebx
// 00407f9c  ff155803a400         call dword ptr [0xa40358]
// 00407fa2  56                   push esi
// 00407fa3  40                   inc eax
// 00407fa4  99                   cdq 
// 00407fa5  6a02                 push 2
// 00407fa7  52                   push edx
// 00407fa8  50                   push eax
// 00407fa9  e802334000           call 0x80b2b0
// 00407fae  8bf8                 mov edi, eax
// 00407fb0  0500000080           add eax, 0x80000000
// 00407fb5  13d6                 adc edx, esi
// 00407fb7  85d2                 test edx, edx
// 00407fb9  7759                 ja 0x408014
// 00407fbb  7205                 jb 0x407fc2
// 00407fbd  83f8ff               cmp eax, -1
// 00407fc0  7752                 ja 0x408014
// 00407fc2  81ff00040000         cmp edi, 0x400
// 00407fc8  7f18                 jg 0x407fe2
// 00407fca  57                   push edi
// 00407fcb  e850c6ffff           call 0x404620
// 00407fd0  83c404               add esp, 4
// 00407fd3  84c0                 test al, al
// 00407fd5  740b                 je 0x407fe2
// 00407fd7  8bc7                 mov eax, edi
// 00407fd9  e8a2324000           call 0x80b280
// 00407fde  8bc4                 mov eax, esp
// 00407fe0  eb0c                 jmp 0x407fee
// 00407fe2  57                   push edi
// 00407fe3  8d4df0               lea ecx, [ebp - 0x10]
// 00407fe6  e8e5cbffff           call 0x404bd0
// 00407feb  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 00407fee  6a03                 push 3
// 00407ff0  57                   push edi
// 00407ff1  53                   push ebx
// 00407ff2  50                   push eax
// 00407ff3  e838b5ffff           call 0x403530
// 00407ff8  85c0                 test eax, eax
// 00407ffa  751f                 jne 0x40801b
// 00407ffc  85f6                 test esi, esi
// 00407ffe  7414                 je 0x408014
// 00408000  8b3d740aa400         mov edi, dword ptr [0xa40a74]
// 00408006  8bc6                 mov eax, esi
// 00408008  8b36                 mov esi, dword ptr [esi]
// 0040800a  50                   push eax
// 0040800b  ffd7                 call edi
// 0040800d  83c404               add esp, 4
// 00408010  85f6                 test esi, esi
// 00408012  75f2                 jne 0x408006
// 00408014  b80e000780           mov eax, 0x8007000e
// 00408019  eb35                 jmp 0x408050
// 0040801b  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0040801e  6a00                 push 0
// 00408020  50                   push eax
// 00408021  0fb74510             movzx eax, word ptr [ebp + 0x10]
// 00408025  50                   push eax
// 00408026  51                   push ecx
// 00408027  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040802a  e8f1fbffff           call 0x407c20
// 0040802f  8bd8                 mov ebx, eax
// 00408031  85f6                 test esi, esi
// 00408033  7419                 je 0x40804e
// 00408035  8b3d740aa400         mov edi, dword ptr [0xa40a74]
// 0040803b  eb03                 jmp 0x408040
// 0040803d  8d4900               lea ecx, [ecx]
// 00408040  8bc6                 mov eax, esi
// 00408042  8b36                 mov esi, dword ptr [esi]
// 00408044  50                   push eax
// 00408045  ffd7                 call edi
// 00408047  83c404               add esp, 4
// 0040804a  85f6                 test esi, esi
// 0040804c  75f2                 jne 0x408040
// 0040804e  8bc3                 mov eax, ebx
// 00408050  8d65e4               lea esp, [ebp - 0x1c]
// 00408053  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00408056  64890d00000000       mov dword ptr fs:[0], ecx
// 0040805d  5f                   pop edi
// 0040805e  5e                   pop esi
// 0040805f  5b                   pop ebx
// 00408060  8be5                 mov esp, ebp
// 00408062  5d                   pop ebp
// 00408063  c21000               ret 0x10
// copied from an identical function in another client (function ?ResourceUnregister@CRegObject@ATL@@UAGJPB_WI0@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp