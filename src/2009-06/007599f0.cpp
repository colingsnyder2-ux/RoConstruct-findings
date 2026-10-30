// roc 2009-06 007599f0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007599f0
//
// 007599f0  83ec50               sub esp, 0x50
// 007599f3  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007599f8  33c4                 xor eax, esp
// 007599fa  8944244c             mov dword ptr [esp + 0x4c], eax
// 007599fe  53                   push ebx
// 007599ff  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 00759a03  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00759a06  55                   push ebp
// 00759a07  56                   push esi
// 00759a08  57                   push edi
// 00759a09  f7d0                 not eax
// 00759a0b  8bf9                 mov edi, ecx
// 00759a0d  897c2414             mov dword ptr [esp + 0x14], edi
// 00759a11  a801                 test al, 1
// 00759a13  7462                 je 0x759a77
// 00759a15  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00759a18  51                   push ecx
// 00759a19  8bcb                 mov ecx, ebx
// 00759a1b  e8a6fbfbff           call 0x7195c6
// 00759a20  837f0c00             cmp dword ptr [edi + 0xc], 0
// 00759a24  0f84b4000000         je 0x759ade
// 00759a2a  33ed                 xor ebp, ebp
// 00759a2c  396f08               cmp dword ptr [edi + 8], ebp
// 00759a2f  0f86a9000000         jbe 0x759ade
// 00759a35  8b5704               mov edx, dword ptr [edi + 4]
// 00759a38  8b34aa               mov esi, dword ptr [edx + ebp*4]
// 00759a3b  85f6                 test esi, esi
// 00759a3d  741d                 je 0x759a5c
// 00759a3f  90                   nop 
// 00759a40  6a01                 push 1
// 00759a42  56                   push esi
// 00759a43  53                   push ebx
// 00759a44  e8f7220000           call 0x75bd40
// 00759a49  6a01                 push 1
// 00759a4b  8d4604               lea eax, [esi + 4]
// 00759a4e  50                   push eax
// 00759a4f  53                   push ebx
// 00759a50  e80be9ffff           call 0x758360
// 00759a55  8b7648               mov esi, dword ptr [esi + 0x48]
// 00759a58  85f6                 test esi, esi
// 00759a5a  75e4                 jne 0x759a40
// 00759a5c  45                   inc ebp
// 00759a5d  3b6f08               cmp ebp, dword ptr [edi + 8]
// 00759a60  72d3                 jb 0x759a35
// 00759a62  5f                   pop edi
// 00759a63  5e                   pop esi
// 00759a64  5d                   pop ebp
// 00759a65  5b                   pop ebx
// 00759a66  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00759a6a  33cc                 xor ecx, esp
// 00759a6c  e8090bfcff           call 0x71a57a
// 00759a71  83c450               add esp, 0x50
// 00759a74  c20400               ret 4
// 00759a77  8bcb                 mov ecx, ebx
// 00759a79  e842fbfbff           call 0x7195c0
// 00759a7e  8be8                 mov ebp, eax
// 00759a80  85ed                 test ebp, ebp
// 00759a82  745a                 je 0x759ade
// 00759a84  eb04                 jmp 0x759a8a
// 00759a86  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00759a8a  6a3c                 push 0x3c
// 00759a8c  83c8ff               or eax, 0xffffffff
// 00759a8f  8d4c241c             lea ecx, [esp + 0x1c]
// 00759a93  6a00                 push 0
// 00759a95  51                   push ecx
// 00759a96  4d                   dec ebp
// 00759a97  89442460             mov dword ptr [esp + 0x60], eax
// 00759a9b  89442464             mov dword ptr [esp + 0x64], eax
// 00759a9f  e8d001fcff           call 0x719c74
// 00759aa4  83c40c               add esp, 0xc
// 00759aa7  6a01                 push 1
// 00759aa9  8d542414             lea edx, [esp + 0x14]
// 00759aad  52                   push edx
// 00759aae  53                   push ebx
// 00759aaf  e88c220000           call 0x75bd40
// 00759ab4  6a01                 push 1
// 00759ab6  8d44241c             lea eax, [esp + 0x1c]
// 00759aba  50                   push eax
// 00759abb  53                   push ebx
// 00759abc  e89fe8ffff           call 0x758360
// 00759ac1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00759ac5  51                   push ecx
// 00759ac6  8bcf                 mov ecx, edi
// 00759ac8  e803fdffff           call 0x7597d0
// 00759acd  b911000000           mov ecx, 0x11
// 00759ad2  8d742418             lea esi, [esp + 0x18]
// 00759ad6  8bf8                 mov edi, eax
// 00759ad8  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00759ada  85ed                 test ebp, ebp
// 00759adc  75a8                 jne 0x759a86
// 00759ade  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00759ae2  5f                   pop edi
// 00759ae3  5e                   pop esi
// 00759ae4  5d                   pop ebp
// 00759ae5  5b                   pop ebx
// 00759ae6  33cc                 xor ecx, esp
// 00759ae8  e88d0afcff           call 0x71a57a
// 00759aed  83c450               add esp, 0x50
// 00759af0  c20400               ret 4
// copied from an identical function in another client (function ?Serialize@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@UAEXAAVCArchive@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTTreeBase.cpp