// roc 2009-12 00855a40  unit: CXTPTabClientWnd::CWorkspace  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00855a40
//
// 00855a40  6aff                 push -1
// 00855a42  68198f9500           push 0x958f19
// 00855a47  64a100000000         mov eax, dword ptr fs:[0]
// 00855a4d  50                   push eax
// 00855a4e  53                   push ebx
// 00855a4f  56                   push esi
// 00855a50  57                   push edi
// 00855a51  a10052b600           mov eax, dword ptr [0xb65200]
// 00855a56  33c4                 xor eax, esp
// 00855a58  50                   push eax
// 00855a59  8d442410             lea eax, [esp + 0x10]
// 00855a5d  64a300000000         mov dword ptr fs:[0], eax
// 00855a63  8bf1                 mov esi, ecx
// 00855a65  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00855a69  85db                 test ebx, ebx
// 00855a6b  7517                 jne 0x855a84
// 00855a6d  33c0                 xor eax, eax
// 00855a6f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00855a73  64890d00000000       mov dword ptr fs:[0], ecx
// 00855a7a  59                   pop ecx
// 00855a7b  5f                   pop edi
// 00855a7c  5e                   pop esi
// 00855a7d  5b                   pop ebx
// 00855a7e  83c40c               add esp, 0xc
// 00855a81  c20400               ret 4
// 00855a84  8bcb                 mov ecx, ebx
// 00855a86  e8ed090d00           call 0x926478
// 00855a8b  a840                 test al, 0x40
// 00855a8d  74de                 je 0x855a6d
// 00855a8f  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 00855a95  8b89d4000000         mov ecx, dword ptr [ecx + 0xd4]
// 00855a9b  83e901               sub ecx, 1
// 00855a9e  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00855aa1  740f                 je 0x855ab2
// 00855aa3  83e901               sub ecx, 1
// 00855aa6  750c                 jne 0x855ab4
// 00855aa8  8bce                 mov ecx, esi
// 00855aaa  e871880700           call 0x8ce320
// 00855aaf  40                   inc eax
// 00855ab0  eb02                 jmp 0x855ab4
// 00855ab2  33c0                 xor eax, eax
// 00855ab4  6a00                 push 0
// 00855ab6  50                   push eax
// 00855ab7  8bce                 mov ecx, esi
// 00855ab9  e8229a0700           call 0x8cf4e0
// 00855abe  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 00855ac4  8b11                 mov edx, dword ptr [ecx]
// 00855ac6  8b925c010000         mov edx, dword ptr [edx + 0x15c]
// 00855acc  8bf8                 mov edi, eax
// 00855ace  53                   push ebx
// 00855acf  8d442424             lea eax, [esp + 0x24]
// 00855ad3  50                   push eax
// 00855ad4  ffd2                 call edx
// 00855ad6  8bc8                 mov ecx, eax
// 00855ad8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00855ae0  ff1580de9800         call dword ptr [0x98de80]
// 00855ae6  50                   push eax
// 00855ae7  8bcf                 mov ecx, edi
// 00855ae9  e842890700           call 0x8ce430
// 00855aee  8d4c2420             lea ecx, [esp + 0x20]
// 00855af2  ff15c0de9800         call dword ptr [0x98dec0]
// 00855af8  8bc7                 mov eax, edi
// 00855afa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00855afe  64890d00000000       mov dword ptr fs:[0], ecx
// 00855b05  59                   pop ecx
// 00855b06  5f                   pop edi
// 00855b07  5e                   pop esi
// 00855b08  5b                   pop ebx
// 00855b09  83c40c               add esp, 0xc
// 00855b0c  c20400               ret 4
// copied from an identical function in another client (function ?AddItem@CWorkspace@CXTPTabClientWnd@@IAEPAVCXTPTabManagerItem@@PBVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPTabClientWnd.cpp