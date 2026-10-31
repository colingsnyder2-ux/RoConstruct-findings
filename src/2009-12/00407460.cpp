// roc 2009-12 00407460  unit: VCApp::?$CComObject  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00407460
//
// 00407460  55                   push ebp
// 00407461  8bec                 mov ebp, esp
// 00407463  6aff                 push -1
// 00407465  68a8729200           push 0x9272a8
// 0040746a  64a100000000         mov eax, dword ptr fs:[0]
// 00407470  50                   push eax
// 00407471  64892500000000       mov dword ptr fs:[0], esp
// 00407478  51                   push ecx
// 00407479  53                   push ebx
// 0040747a  56                   push esi
// 0040747b  33f6                 xor esi, esi
// 0040747d  57                   push edi
// 0040747e  8975f0               mov dword ptr [ebp - 0x10], esi
// 00407481  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 00407484  8975fc               mov dword ptr [ebp - 4], esi
// 00407487  3bde                 cmp ebx, esi
// 00407489  7479                 je 0x407504
// 0040748b  53                   push ebx
// 0040748c  ff1538b29800         call dword ptr [0x98b238]
// 00407492  56                   push esi
// 00407493  40                   inc eax
// 00407494  99                   cdq 
// 00407495  6a02                 push 2
// 00407497  52                   push edx
// 00407498  50                   push eax
// 00407499  e8d2d53e00           call 0x7f4a70
// 0040749e  8bf8                 mov edi, eax
// 004074a0  0500000080           add eax, 0x80000000
// 004074a5  13d6                 adc edx, esi
// 004074a7  85d2                 test edx, edx
// 004074a9  7759                 ja 0x407504
// 004074ab  7205                 jb 0x4074b2
// 004074ad  83f8ff               cmp eax, -1
// 004074b0  7752                 ja 0x407504
// 004074b2  81ff00040000         cmp edi, 0x400
// 004074b8  7f18                 jg 0x4074d2
// 004074ba  57                   push edi
// 004074bb  e830c6ffff           call 0x403af0
// 004074c0  83c404               add esp, 4
// 004074c3  84c0                 test al, al
// 004074c5  740b                 je 0x4074d2
// 004074c7  8bc7                 mov eax, edi
// 004074c9  e872d53e00           call 0x7f4a40
// 004074ce  8bc4                 mov eax, esp
// 004074d0  eb0c                 jmp 0x4074de
// 004074d2  57                   push edi
// 004074d3  8d4df0               lea ecx, [ebp - 0x10]
// 004074d6  e8b5cbffff           call 0x404090
// 004074db  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 004074de  6a03                 push 3
// 004074e0  57                   push edi
// 004074e1  53                   push ebx
// 004074e2  50                   push eax
// 004074e3  e828b6ffff           call 0x402b10
// 004074e8  85c0                 test eax, eax
// 004074ea  751f                 jne 0x40750b
// 004074ec  85f6                 test esi, esi
// 004074ee  7414                 je 0x407504
// 004074f0  8b3d40b79800         mov edi, dword ptr [0x98b740]
// 004074f6  8bc6                 mov eax, esi
// 004074f8  8b36                 mov esi, dword ptr [esi]
// 004074fa  50                   push eax
// 004074fb  ffd7                 call edi
// 004074fd  83c404               add esp, 4
// 00407500  85f6                 test esi, esi
// 00407502  75f2                 jne 0x4074f6
// 00407504  b80e000780           mov eax, 0x8007000e
// 00407509  eb35                 jmp 0x407540
// 0040750b  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0040750e  6a00                 push 0
// 00407510  50                   push eax
// 00407511  0fb74510             movzx eax, word ptr [ebp + 0x10]
// 00407515  50                   push eax
// 00407516  51                   push ecx
// 00407517  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040751a  e8f1fbffff           call 0x407110
// 0040751f  8bd8                 mov ebx, eax
// 00407521  85f6                 test esi, esi
// 00407523  7419                 je 0x40753e
// 00407525  8b3d40b79800         mov edi, dword ptr [0x98b740]
// 0040752b  eb03                 jmp 0x407530
// 0040752d  8d4900               lea ecx, [ecx]
// 00407530  8bc6                 mov eax, esi
// 00407532  8b36                 mov esi, dword ptr [esi]
// 00407534  50                   push eax
// 00407535  ffd7                 call edi
// 00407537  83c404               add esp, 4
// 0040753a  85f6                 test esi, esi
// 0040753c  75f2                 jne 0x407530
// 0040753e  8bc3                 mov eax, ebx
// 00407540  8d65e4               lea esp, [ebp - 0x1c]
// 00407543  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00407546  64890d00000000       mov dword ptr fs:[0], ecx
// 0040754d  5f                   pop edi
// 0040754e  5e                   pop esi
// 0040754f  5b                   pop ebx
// 00407550  8be5                 mov esp, ebp
// 00407552  5d                   pop ebp
// 00407553  c21000               ret 0x10
// copied from an identical function in another client (function ?ResourceUnregister@CRegObject@ATL@@UAGJPB_WI0@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp