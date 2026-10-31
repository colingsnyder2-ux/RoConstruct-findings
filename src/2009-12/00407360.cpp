// roc 2009-12 00407360  unit: VCApp::?$CComObject  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00407360
//
// 00407360  55                   push ebp
// 00407361  8bec                 mov ebp, esp
// 00407363  6aff                 push -1
// 00407365  68a8729200           push 0x9272a8
// 0040736a  64a100000000         mov eax, dword ptr fs:[0]
// 00407370  50                   push eax
// 00407371  64892500000000       mov dword ptr fs:[0], esp
// 00407378  51                   push ecx
// 00407379  53                   push ebx
// 0040737a  56                   push esi
// 0040737b  33f6                 xor esi, esi
// 0040737d  57                   push edi
// 0040737e  8975f0               mov dword ptr [ebp - 0x10], esi
// 00407381  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 00407384  8975fc               mov dword ptr [ebp - 4], esi
// 00407387  3bde                 cmp ebx, esi
// 00407389  7479                 je 0x407404
// 0040738b  53                   push ebx
// 0040738c  ff1538b29800         call dword ptr [0x98b238]
// 00407392  56                   push esi
// 00407393  40                   inc eax
// 00407394  99                   cdq 
// 00407395  6a02                 push 2
// 00407397  52                   push edx
// 00407398  50                   push eax
// 00407399  e8d2d63e00           call 0x7f4a70
// 0040739e  8bf8                 mov edi, eax
// 004073a0  0500000080           add eax, 0x80000000
// 004073a5  13d6                 adc edx, esi
// 004073a7  85d2                 test edx, edx
// 004073a9  7759                 ja 0x407404
// 004073ab  7205                 jb 0x4073b2
// 004073ad  83f8ff               cmp eax, -1
// 004073b0  7752                 ja 0x407404
// 004073b2  81ff00040000         cmp edi, 0x400
// 004073b8  7f18                 jg 0x4073d2
// 004073ba  57                   push edi
// 004073bb  e830c7ffff           call 0x403af0
// 004073c0  83c404               add esp, 4
// 004073c3  84c0                 test al, al
// 004073c5  740b                 je 0x4073d2
// 004073c7  8bc7                 mov eax, edi
// 004073c9  e872d63e00           call 0x7f4a40
// 004073ce  8bc4                 mov eax, esp
// 004073d0  eb0c                 jmp 0x4073de
// 004073d2  57                   push edi
// 004073d3  8d4df0               lea ecx, [ebp - 0x10]
// 004073d6  e8b5ccffff           call 0x404090
// 004073db  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 004073de  6a03                 push 3
// 004073e0  57                   push edi
// 004073e1  53                   push ebx
// 004073e2  50                   push eax
// 004073e3  e828b7ffff           call 0x402b10
// 004073e8  85c0                 test eax, eax
// 004073ea  751f                 jne 0x40740b
// 004073ec  85f6                 test esi, esi
// 004073ee  7414                 je 0x407404
// 004073f0  8b3d40b79800         mov edi, dword ptr [0x98b740]
// 004073f6  8bc6                 mov eax, esi
// 004073f8  8b36                 mov esi, dword ptr [esi]
// 004073fa  50                   push eax
// 004073fb  ffd7                 call edi
// 004073fd  83c404               add esp, 4
// 00407400  85f6                 test esi, esi
// 00407402  75f2                 jne 0x4073f6
// 00407404  b80e000780           mov eax, 0x8007000e
// 00407409  eb35                 jmp 0x407440
// 0040740b  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0040740e  6a01                 push 1
// 00407410  50                   push eax
// 00407411  0fb74510             movzx eax, word ptr [ebp + 0x10]
// 00407415  50                   push eax
// 00407416  51                   push ecx
// 00407417  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040741a  e8f1fcffff           call 0x407110
// 0040741f  8bd8                 mov ebx, eax
// 00407421  85f6                 test esi, esi
// 00407423  7419                 je 0x40743e
// 00407425  8b3d40b79800         mov edi, dword ptr [0x98b740]
// 0040742b  eb03                 jmp 0x407430
// 0040742d  8d4900               lea ecx, [ecx]
// 00407430  8bc6                 mov eax, esi
// 00407432  8b36                 mov esi, dword ptr [esi]
// 00407434  50                   push eax
// 00407435  ffd7                 call edi
// 00407437  83c404               add esp, 4
// 0040743a  85f6                 test esi, esi
// 0040743c  75f2                 jne 0x407430
// 0040743e  8bc3                 mov eax, ebx
// 00407440  8d65e4               lea esp, [ebp - 0x1c]
// 00407443  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00407446  64890d00000000       mov dword ptr fs:[0], ecx
// 0040744d  5f                   pop edi
// 0040744e  5e                   pop esi
// 0040744f  5b                   pop ebx
// 00407450  8be5                 mov esp, ebp
// 00407452  5d                   pop ebp
// 00407453  c21000               ret 0x10
// copied from an identical function in another client (function ?ResourceRegister@CRegObject@ATL@@UAGJPB_WI0@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp