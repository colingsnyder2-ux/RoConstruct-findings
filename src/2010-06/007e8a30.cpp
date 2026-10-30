// roc 2010-06 007e8a30  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e8a30
//
// 007e8a30  83ec50               sub esp, 0x50
// 007e8a33  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007e8a38  33c4                 xor eax, esp
// 007e8a3a  8944244c             mov dword ptr [esp + 0x4c], eax
// 007e8a3e  53                   push ebx
// 007e8a3f  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 007e8a43  8b4318               mov eax, dword ptr [ebx + 0x18]
// 007e8a46  55                   push ebp
// 007e8a47  56                   push esi
// 007e8a48  57                   push edi
// 007e8a49  f7d0                 not eax
// 007e8a4b  8bf9                 mov edi, ecx
// 007e8a4d  897c2414             mov dword ptr [esp + 0x14], edi
// 007e8a51  a801                 test al, 1
// 007e8a53  7462                 je 0x7e8ab7
// 007e8a55  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 007e8a58  51                   push ecx
// 007e8a59  8bcb                 mov ecx, ebx
// 007e8a5b  e8d4fafbff           call 0x7a8534
// 007e8a60  837f0c00             cmp dword ptr [edi + 0xc], 0
// 007e8a64  0f84b4000000         je 0x7e8b1e
// 007e8a6a  33ed                 xor ebp, ebp
// 007e8a6c  396f08               cmp dword ptr [edi + 8], ebp
// 007e8a6f  0f86a9000000         jbe 0x7e8b1e
// 007e8a75  8b5704               mov edx, dword ptr [edi + 4]
// 007e8a78  8b34aa               mov esi, dword ptr [edx + ebp*4]
// 007e8a7b  85f6                 test esi, esi
// 007e8a7d  741d                 je 0x7e8a9c
// 007e8a7f  90                   nop 
// 007e8a80  6a01                 push 1
// 007e8a82  56                   push esi
// 007e8a83  53                   push ebx
// 007e8a84  e877210200           call 0x80ac00
// 007e8a89  6a01                 push 1
// 007e8a8b  8d4604               lea eax, [esi + 4]
// 007e8a8e  50                   push eax
// 007e8a8f  53                   push ebx
// 007e8a90  e80be9ffff           call 0x7e73a0
// 007e8a95  8b7648               mov esi, dword ptr [esi + 0x48]
// 007e8a98  85f6                 test esi, esi
// 007e8a9a  75e4                 jne 0x7e8a80
// 007e8a9c  45                   inc ebp
// 007e8a9d  3b6f08               cmp ebp, dword ptr [edi + 8]
// 007e8aa0  72d3                 jb 0x7e8a75
// 007e8aa2  5f                   pop edi
// 007e8aa3  5e                   pop esi
// 007e8aa4  5d                   pop ebp
// 007e8aa5  5b                   pop ebx
// 007e8aa6  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007e8aaa  33cc                 xor ecx, esp
// 007e8aac  e8230afcff           call 0x7a94d4
// 007e8ab1  83c450               add esp, 0x50
// 007e8ab4  c20400               ret 4
// 007e8ab7  8bcb                 mov ecx, ebx
// 007e8ab9  e870fafbff           call 0x7a852e
// 007e8abe  8be8                 mov ebp, eax
// 007e8ac0  85ed                 test ebp, ebp
// 007e8ac2  745a                 je 0x7e8b1e
// 007e8ac4  eb04                 jmp 0x7e8aca
// 007e8ac6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007e8aca  6a3c                 push 0x3c
// 007e8acc  83c8ff               or eax, 0xffffffff
// 007e8acf  8d4c241c             lea ecx, [esp + 0x1c]
// 007e8ad3  6a00                 push 0
// 007e8ad5  51                   push ecx
// 007e8ad6  4d                   dec ebp
// 007e8ad7  89442460             mov dword ptr [esp + 0x60], eax
// 007e8adb  89442464             mov dword ptr [esp + 0x64], eax
// 007e8adf  e80001fcff           call 0x7a8be4
// 007e8ae4  83c40c               add esp, 0xc
// 007e8ae7  6a01                 push 1
// 007e8ae9  8d542414             lea edx, [esp + 0x14]
// 007e8aed  52                   push edx
// 007e8aee  53                   push ebx
// 007e8aef  e80c210200           call 0x80ac00
// 007e8af4  6a01                 push 1
// 007e8af6  8d44241c             lea eax, [esp + 0x1c]
// 007e8afa  50                   push eax
// 007e8afb  53                   push ebx
// 007e8afc  e89fe8ffff           call 0x7e73a0
// 007e8b01  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007e8b05  51                   push ecx
// 007e8b06  8bcf                 mov ecx, edi
// 007e8b08  e803fdffff           call 0x7e8810
// 007e8b0d  b911000000           mov ecx, 0x11
// 007e8b12  8d742418             lea esi, [esp + 0x18]
// 007e8b16  8bf8                 mov edi, eax
// 007e8b18  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007e8b1a  85ed                 test ebp, ebp
// 007e8b1c  75a8                 jne 0x7e8ac6
// 007e8b1e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007e8b22  5f                   pop edi
// 007e8b23  5e                   pop esi
// 007e8b24  5d                   pop ebp
// 007e8b25  5b                   pop ebx
// 007e8b26  33cc                 xor ecx, esp
// 007e8b28  e8a709fcff           call 0x7a94d4
// 007e8b2d  83c450               add esp, 0x50
// 007e8b30  c20400               ret 4
// copied from an identical function in another client (function ?Serialize@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp