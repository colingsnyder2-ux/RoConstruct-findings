// roc 2010-06 00404690  unit: ATL::CComClassFactory  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00404690
//
// 00404690  55                   push ebp
// 00404691  8bec                 mov ebp, esp
// 00404693  6aff                 push -1
// 00404695  6828da9700           push 0x97da28
// 0040469a  64a100000000         mov eax, dword ptr fs:[0]
// 004046a0  50                   push eax
// 004046a1  64892500000000       mov dword ptr fs:[0], esp
// 004046a8  51                   push ecx
// 004046a9  56                   push esi
// 004046aa  57                   push edi
// 004046ab  8b7d08               mov edi, dword ptr [ebp + 8]
// 004046ae  894df0               mov dword ptr [ebp - 0x10], ecx
// 004046b1  85ff                 test edi, edi
// 004046b3  7478                 je 0x40472d
// 004046b5  c7450800000000       mov dword ptr [ebp + 8], 0
// 004046bc  57                   push edi
// 004046bd  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004046c4  ff15a8a39e00         call dword ptr [0x9ea3a8]
// 004046ca  6a00                 push 0
// 004046cc  40                   inc eax
// 004046cd  99                   cdq 
// 004046ce  6a02                 push 2
// 004046d0  52                   push edx
// 004046d1  50                   push eax
// 004046d2  e8d9443a00           call 0x7a8bb0
// 004046d7  8bf0                 mov esi, eax
// 004046d9  0500000080           add eax, 0x80000000
// 004046de  83d200               adc edx, 0
// 004046e1  85d2                 test edx, edx
// 004046e3  7740                 ja 0x404725
// 004046e5  7205                 jb 0x4046ec
// 004046e7  83f8ff               cmp eax, -1
// 004046ea  7739                 ja 0x404725
// 004046ec  81fe00040000         cmp esi, 0x400
// 004046f2  7f18                 jg 0x40470c
// 004046f4  56                   push esi
// 004046f5  e856f4ffff           call 0x403b50
// 004046fa  83c404               add esp, 4
// 004046fd  84c0                 test al, al
// 004046ff  740b                 je 0x40470c
// 00404701  8bc6                 mov eax, esi
// 00404703  e878443a00           call 0x7a8b80
// 00404708  8bc4                 mov eax, esp
// 0040470a  eb09                 jmp 0x404715
// 0040470c  56                   push esi
// 0040470d  8d4d08               lea ecx, [ebp + 8]
// 00404710  e8dbf9ffff           call 0x4040f0
// 00404715  6a03                 push 3
// 00404717  56                   push esi
// 00404718  57                   push edi
// 00404719  50                   push eax
// 0040471a  e841e4ffff           call 0x402b60
// 0040471f  8bf0                 mov esi, eax
// 00404721  85f6                 test esi, esi
// 00404723  750c                 jne 0x404731
// 00404725  8d4d08               lea ecx, [ebp + 8]
// 00404728  e8a3f1ffff           call 0x4038d0
// 0040472d  33c0                 xor eax, eax
// 0040472f  eb1d                 jmp 0x40474e
// 00404731  56                   push esi
// 00404732  ff1588a39e00         call dword ptr [0x9ea388]
// 00404738  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 0040473b  50                   push eax
// 0040473c  56                   push esi
// 0040473d  e8dee8ffff           call 0x403020
// 00404742  8d4d08               lea ecx, [ebp + 8]
// 00404745  8bf0                 mov esi, eax
// 00404747  e884f1ffff           call 0x4038d0
// 0040474c  8bc6                 mov eax, esi
// 0040474e  8d65e8               lea esp, [ebp - 0x18]
// 00404751  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00404754  64890d00000000       mov dword ptr fs:[0], ecx
// 0040475b  5f                   pop edi
// 0040475c  5e                   pop esi
// 0040475d  8be5                 mov esp, ebp
// 0040475f  5d                   pop ebp
// 00404760  c20400               ret 4
// copied from an identical function in another client (function ?AddString@CParseBuffer@CRegParser@ATL@@QAEHPB_W@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp