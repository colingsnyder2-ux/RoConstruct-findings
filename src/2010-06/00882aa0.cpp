// roc 2010-06 00882aa0  unit: CXTPTabManagerNavigateButton  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00882aa0
//
// 00882aa0  83ec08               sub esp, 8
// 00882aa3  56                   push esi
// 00882aa4  8bf1                 mov esi, ecx
// 00882aa6  8b4608               mov eax, dword ptr [esi + 8]
// 00882aa9  83f802               cmp eax, 2
// 00882aac  7425                 je 0x882ad3
// 00882aae  83f801               cmp eax, 1
// 00882ab1  750f                 jne 0x882ac2
// 00882ab3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00882ab6  8b01                 mov eax, dword ptr [ecx]
// 00882ab8  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00882abb  56                   push esi
// 00882abc  ffd2                 call edx
// 00882abe  85c0                 test eax, eax
// 00882ac0  7511                 jne 0x882ad3
// 00882ac2  83c610               add esi, 0x10
// 00882ac5  56                   push esi
// 00882ac6  ff15e4ba9e00         call dword ptr [0x9ebae4]
// 00882acc  5e                   pop esi
// 00882acd  83c408               add esp, 8
// 00882ad0  c20400               ret 4
// 00882ad3  8b06                 mov eax, dword ptr [esi]
// 00882ad5  8b5008               mov edx, dword ptr [eax + 8]
// 00882ad8  53                   push ebx
// 00882ad9  57                   push edi
// 00882ada  8d4c240c             lea ecx, [esp + 0xc]
// 00882ade  51                   push ecx
// 00882adf  8bce                 mov ecx, esi
// 00882ae1  ffd2                 call edx
// 00882ae3  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00882ae6  8b07                 mov eax, dword ptr [edi]
// 00882ae8  8b5048               mov edx, dword ptr [eax + 0x48]
// 00882aeb  8bcf                 mov ecx, edi
// 00882aed  ffd2                 call edx
// 00882aef  83f802               cmp eax, 2
// 00882af2  740d                 je 0x882b01
// 00882af4  8b07                 mov eax, dword ptr [edi]
// 00882af6  8b5048               mov edx, dword ptr [eax + 0x48]
// 00882af9  8bcf                 mov ecx, edi
// 00882afb  ffd2                 call edx
// 00882afd  85c0                 test eax, eax
// 00882aff  7545                 jne 0x882b46
// 00882b01  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00882b05  8b470c               mov eax, dword ptr [edi + 0xc]
// 00882b08  034704               add eax, dword ptr [edi + 4]
// 00882b0b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00882b0f  99                   cdq 
// 00882b10  2bc2                 sub eax, edx
// 00882b12  8bc8                 mov ecx, eax
// 00882b14  8bc3                 mov eax, ebx
// 00882b16  99                   cdq 
// 00882b17  2bc2                 sub eax, edx
// 00882b19  d1f9                 sar ecx, 1
// 00882b1b  d1f8                 sar eax, 1
// 00882b1d  03c1                 add eax, ecx
// 00882b1f  8b4f08               mov ecx, dword ptr [edi + 8]
// 00882b22  50                   push eax
// 00882b23  51                   push ecx
// 00882b24  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00882b28  2bc3                 sub eax, ebx
// 00882b2a  50                   push eax
// 00882b2b  51                   push ecx
// 00882b2c  83c610               add esi, 0x10
// 00882b2f  56                   push esi
// 00882b30  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 00882b36  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00882b3a  295708               sub dword ptr [edi + 8], edx
// 00882b3d  5f                   pop edi
// 00882b3e  5b                   pop ebx
// 00882b3f  5e                   pop esi
// 00882b40  83c408               add esp, 8
// 00882b43  c20400               ret 4
// 00882b46  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00882b4a  8b4708               mov eax, dword ptr [edi + 8]
// 00882b4d  0307                 add eax, dword ptr [edi]
// 00882b4f  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 00882b52  99                   cdq 
// 00882b53  55                   push ebp
// 00882b54  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00882b58  2bc2                 sub eax, edx
// 00882b5a  8bc8                 mov ecx, eax
// 00882b5c  8bc5                 mov eax, ebp
// 00882b5e  99                   cdq 
// 00882b5f  2bc2                 sub eax, edx
// 00882b61  d1f8                 sar eax, 1
// 00882b63  d1f9                 sar ecx, 1
// 00882b65  53                   push ebx
// 00882b66  2b5c2418             sub ebx, dword ptr [esp + 0x18]
// 00882b6a  2bc8                 sub ecx, eax
// 00882b6c  8d0429               lea eax, [ecx + ebp]
// 00882b6f  50                   push eax
// 00882b70  53                   push ebx
// 00882b71  51                   push ecx
// 00882b72  83c610               add esi, 0x10
// 00882b75  56                   push esi
// 00882b76  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 00882b7c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00882b80  294f0c               sub dword ptr [edi + 0xc], ecx
// 00882b83  5d                   pop ebp
// 00882b84  5f                   pop edi
// 00882b85  5b                   pop ebx
// 00882b86  5e                   pop esi
// 00882b87  83c408               add esp, 8
// 00882b8a  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CXTPTabManagerNavigateButton@@UAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
