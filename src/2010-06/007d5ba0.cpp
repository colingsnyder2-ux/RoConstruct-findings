// roc 2010-06 007d5ba0  unit: CXTPReportControl  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d5ba0
//
// 007d5ba0  6aff                 push -1
// 007d5ba2  68a10e9b00           push 0x9b0ea1
// 007d5ba7  64a100000000         mov eax, dword ptr fs:[0]
// 007d5bad  50                   push eax
// 007d5bae  83ec14               sub esp, 0x14
// 007d5bb1  53                   push ebx
// 007d5bb2  55                   push ebp
// 007d5bb3  56                   push esi
// 007d5bb4  57                   push edi
// 007d5bb5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007d5bba  33c4                 xor eax, esp
// 007d5bbc  50                   push eax
// 007d5bbd  8d442428             lea eax, [esp + 0x28]
// 007d5bc1  64a300000000         mov dword ptr fs:[0], eax
// 007d5bc7  8be9                 mov ebp, ecx
// 007d5bc9  8d4c2414             lea ecx, [esp + 0x14]
// 007d5bcd  e82e741a00           call 0x97d000
// 007d5bd2  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007d5bd6  8d442414             lea eax, [esp + 0x14]
// 007d5bda  50                   push eax
// 007d5bdb  68d008a000           push 0xa008d0
// 007d5be0  33ff                 xor edi, edi
// 007d5be2  51                   push ecx
// 007d5be3  897c243c             mov dword ptr [esp + 0x3c], edi
// 007d5be7  e874d6ffff           call 0x7d3260
// 007d5bec  8b442428             mov eax, dword ptr [esp + 0x28]
// 007d5bf0  83c40c               add esp, 0xc
// 007d5bf3  3bc7                 cmp eax, edi
// 007d5bf5  8bd8                 mov ebx, eax
// 007d5bf7  7f30                 jg 0x7d5c29
// 007d5bf9  8d4c2414             lea ecx, [esp + 0x14]
// 007d5bfd  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 007d5c05  e8f0731a00           call 0x97cffa
// 007d5c0a  b801000000           mov eax, 1
// 007d5c0f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007d5c13  64890d00000000       mov dword ptr fs:[0], ecx
// 007d5c1a  59                   pop ecx
// 007d5c1b  5f                   pop edi
// 007d5c1c  5e                   pop esi
// 007d5c1d  5d                   pop ebp
// 007d5c1e  5b                   pop ebx
// 007d5c1f  83c420               add esp, 0x20
// 007d5c22  c20800               ret 8
// 007d5c25  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007d5c29  85ff                 test edi, edi
// 007d5c2b  7c6a                 jl 0x7d5c97
// 007d5c2d  3bf8                 cmp edi, eax
// 007d5c2f  7d66                 jge 0x7d5c97
// 007d5c31  8b542418             mov edx, dword ptr [esp + 0x18]
// 007d5c35  8d04ba               lea eax, [edx + edi*4]
// 007d5c38  50                   push eax
// 007d5c39  8d4c243c             lea ecx, [esp + 0x3c]
// 007d5c3d  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 007d5c43  8d4c2438             lea ecx, [esp + 0x38]
// 007d5c47  c644243001           mov byte ptr [esp + 0x30], 1
// 007d5c4c  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007d5c52  8d4c2438             lea ecx, [esp + 0x38]
// 007d5c56  84c0                 test al, al
// 007d5c58  7528                 jne 0x7d5c82
// 007d5c5a  8b7500               mov esi, dword ptr [ebp]
// 007d5c5d  81c644020000         add esi, 0x244
// 007d5c63  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007d5c69  50                   push eax
// 007d5c6a  8b06                 mov eax, dword ptr [esi]
// 007d5c6c  8bcd                 mov ecx, ebp
// 007d5c6e  ffd0                 call eax
// 007d5c70  85c0                 test eax, eax
// 007d5c72  740a                 je 0x7d5c7e
// 007d5c74  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007d5c78  50                   push eax
// 007d5c79  e8b2b30000           call 0x7e1030
// 007d5c7e  8d4c2438             lea ecx, [esp + 0x38]
// 007d5c82  c644243000           mov byte ptr [esp + 0x30], 0
// 007d5c87  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007d5c8d  47                   inc edi
// 007d5c8e  3bfb                 cmp edi, ebx
// 007d5c90  7c93                 jl 0x7d5c25
// 007d5c92  e962ffffff           jmp 0x7d5bf9
// 007d5c97  e8b01ffdff           call 0x7a7c4c
// copied from an identical function in another client (function ?_ReadRecodsFromText@CXTPReportControl@@MAEHPBDAAVCXTPReportRecords@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp