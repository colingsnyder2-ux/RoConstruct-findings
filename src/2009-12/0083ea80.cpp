// roc 2009-12 0083ea80  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 696 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083ea80
//
// 0083ea80  6aff                 push -1
// 0083ea82  6858ca9500           push 0x95ca58
// 0083ea87  64a100000000         mov eax, dword ptr fs:[0]
// 0083ea8d  50                   push eax
// 0083ea8e  83ec3c               sub esp, 0x3c
// 0083ea91  53                   push ebx
// 0083ea92  55                   push ebp
// 0083ea93  56                   push esi
// 0083ea94  57                   push edi
// 0083ea95  a10052b600           mov eax, dword ptr [0xb65200]
// 0083ea9a  33c4                 xor eax, esp
// 0083ea9c  50                   push eax
// 0083ea9d  8d442450             lea eax, [esp + 0x50]
// 0083eaa1  64a300000000         mov dword ptr fs:[0], eax
// 0083eaa7  894c2414             mov dword ptr [esp + 0x14], ecx
// 0083eaab  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 0083eab1  8b7958               mov edi, dword ptr [ecx + 0x58]
// 0083eab4  33db                 xor ebx, ebx
// 0083eab6  897c2418             mov dword ptr [esp + 0x18], edi
// 0083eaba  3bfb                 cmp edi, ebx
// 0083eabc  0f8462020000         je 0x83ed24
// 0083eac2  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 0083eac8  3bc3                 cmp eax, ebx
// 0083eaca  7404                 je 0x83ead0
// 0083eacc  8bd0                 mov edx, eax
// 0083eace  eb26                 jmp 0x83eaf6
// 0083ead0  8b9788000000         mov edx, dword ptr [edi + 0x88]
// 0083ead6  3bd3                 cmp edx, ebx
// 0083ead8  7f24                 jg 0x83eafe
// 0083eada  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 0083eae0  3bf3                 cmp esi, ebx
// 0083eae2  740c                 je 0x83eaf0
// 0083eae4  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0083eae7  3bd3                 cmp edx, ebx
// 0083eae9  7f13                 jg 0x83eafe
// 0083eaeb  8b5628               mov edx, dword ptr [esi + 0x28]
// 0083eaee  eb06                 jmp 0x83eaf6
// 0083eaf0  8b9784000000         mov edx, dword ptr [edi + 0x84]
// 0083eaf6  3bd3                 cmp edx, ebx
// 0083eaf8  0f8426020000         je 0x83ed24
// 0083eafe  3bc3                 cmp eax, ebx
// 0083eb00  7526                 jne 0x83eb28
// 0083eb02  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 0083eb08  3bc3                 cmp eax, ebx
// 0083eb0a  7f1c                 jg 0x83eb28
// 0083eb0c  8b975c010000         mov edx, dword ptr [edi + 0x15c]
// 0083eb12  3bd3                 cmp edx, ebx
// 0083eb14  740c                 je 0x83eb22
// 0083eb16  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0083eb19  3bc3                 cmp eax, ebx
// 0083eb1b  7f0b                 jg 0x83eb28
// 0083eb1d  8b4228               mov eax, dword ptr [edx + 0x28]
// 0083eb20  eb06                 jmp 0x83eb28
// 0083eb22  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 0083eb28  6a10                 push 0x10
// 0083eb2a  50                   push eax
// 0083eb2b  e8d05bfdff           call 0x814700
// 0083eb30  8bc8                 mov ecx, eax
// 0083eb32  e84910fdff           call 0x80fb80
// 0083eb37  3bc3                 cmp eax, ebx
// 0083eb39  0f84e5010000         je 0x83ed24
// 0083eb3f  8bc8                 mov ecx, eax
// 0083eb41  e8faa5fcff           call 0x809140
// 0083eb46  bd18229a00           mov ebp, 0x9a2218
// 0083eb4b  8bf0                 mov esi, eax
// 0083eb4d  895c2420             mov dword ptr [esp + 0x20], ebx
// 0083eb51  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0083eb55  8bce                 mov ecx, esi
// 0083eb57  895c2458             mov dword ptr [esp + 0x58], ebx
// 0083eb5b  e890a5fcff           call 0x8090f0
// 0083eb60  8bce                 mov ecx, esi
// 0083eb62  85c0                 test eax, eax
// 0083eb64  0f85f1000000         jne 0x83ec5b
// 0083eb6a  8d442424             lea eax, [esp + 0x24]
// 0083eb6e  50                   push eax
// 0083eb6f  e89ca5fcff           call 0x809110
// 0083eb74  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083eb78  51                   push ecx
// 0083eb79  8d4c2440             lea ecx, [esp + 0x40]
// 0083eb7d  e808790e00           call 0x92648a
// 0083eb82  8d4c242c             lea ecx, [esp + 0x2c]
// 0083eb86  c644245801           mov byte ptr [esp + 0x58], 1
// 0083eb8b  e81e790e00           call 0x9264ae
// 0083eb90  8d54243c             lea edx, [esp + 0x3c]
// 0083eb94  52                   push edx
// 0083eb95  8d4c2430             lea ecx, [esp + 0x30]
// 0083eb99  c644245c02           mov byte ptr [esp + 0x5c], 2
// 0083eb9e  e87df5fbff           call 0x7fe120
// 0083eba3  8b442428             mov eax, dword ptr [esp + 0x28]
// 0083eba7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0083ebab  50                   push eax
// 0083ebac  51                   push ecx
// 0083ebad  8d542444             lea edx, [esp + 0x44]
// 0083ebb1  52                   push edx
// 0083ebb2  8d4c2428             lea ecx, [esp + 0x28]
// 0083ebb6  e895b0fcff           call 0x809c50
// 0083ebbb  8d4c242c             lea ecx, [esp + 0x2c]
// 0083ebbf  85c0                 test eax, eax
// 0083ebc1  751c                 jne 0x83ebdf
// 0083ebc3  c644245801           mov byte ptr [esp + 0x58], 1
// 0083ebc8  e8db780e00           call 0x9264a8
// 0083ebcd  8d4c243c             lea ecx, [esp + 0x3c]
// 0083ebd1  885c2458             mov byte ptr [esp + 0x58], bl
// 0083ebd5  e8aa780e00           call 0x926484
// 0083ebda  e930010000           jmp 0x83ed0f
// 0083ebdf  8d44241c             lea eax, [esp + 0x1c]
// 0083ebe3  50                   push eax
// 0083ebe4  e81792fdff           call 0x817e00
// 0083ebe9  6a0f                 push 0xf
// 0083ebeb  8bf8                 mov edi, eax
// 0083ebed  ff15d8ca9800         call dword ptr [0x98cad8]
// 0083ebf3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0083ebf7  8b542424             mov edx, dword ptr [esp + 0x24]
// 0083ebfb  50                   push eax
// 0083ebfc  51                   push ecx
// 0083ebfd  52                   push edx
// 0083ebfe  53                   push ebx
// 0083ebff  53                   push ebx
// 0083ec00  8d4c2440             lea ecx, [esp + 0x40]
// 0083ec04  e88d780e00           call 0x926496
// 0083ec09  53                   push ebx
// 0083ec0a  53                   push ebx
// 0083ec0b  8bce                 mov ecx, esi
// 0083ec0d  33ed                 xor ebp, ebp
// 0083ec0f  e85c0acfff           call 0x52f670
// 0083ec14  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0083ec18  50                   push eax
// 0083ec19  8b442434             mov eax, dword ptr [esp + 0x34]
// 0083ec1d  50                   push eax
// 0083ec1e  51                   push ecx
// 0083ec1f  53                   push ebx
// 0083ec20  55                   push ebp
// 0083ec21  8d4c2448             lea ecx, [esp + 0x48]
// 0083ec25  e8d6f5ffff           call 0x83e200
// 0083ec2a  57                   push edi
// 0083ec2b  8d4c2430             lea ecx, [esp + 0x30]
// 0083ec2f  e8cc91fdff           call 0x817e00
// 0083ec34  8d4c242c             lea ecx, [esp + 0x2c]
// 0083ec38  c644245801           mov byte ptr [esp + 0x58], 1
// 0083ec3d  e866780e00           call 0x9264a8
// 0083ec42  8d4c243c             lea ecx, [esp + 0x3c]
// 0083ec46  c644245800           mov byte ptr [esp + 0x58], 0
// 0083ec4b  e834780e00           call 0x926484
// 0083ec50  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0083ec54  bd18229a00           mov ebp, 0x9a2218
// 0083ec59  eb19                 jmp 0x83ec74
// 0083ec5b  53                   push ebx
// 0083ec5c  e86f31c0ff           call 0x441dd0
// 0083ec61  50                   push eax
// 0083ec62  e8b9bdfcff           call 0x80aa20
// 0083ec67  83c408               add esp, 8
// 0083ec6a  50                   push eax
// 0083ec6b  8d4c2420             lea ecx, [esp + 0x20]
// 0083ec6f  e8b651fbff           call 0x7f3e2a
// 0083ec74  8b542414             mov edx, dword ptr [esp + 0x14]
// 0083ec78  8b4220               mov eax, dword ptr [edx + 0x20]
// 0083ec7b  50                   push eax
// 0083ec7c  ff1504cc9800         call dword ptr [0x98cc04]
// 0083ec82  85c0                 test eax, eax
// 0083ec84  0f8485000000         je 0x83ed0f
// 0083ec8a  ff151ccc9800         call dword ptr [0x98cc1c]
// 0083ec90  85c0                 test eax, eax
// 0083ec92  7475                 je 0x83ed09
// 0083ec94  8d4c241c             lea ecx, [esp + 0x1c]
// 0083ec98  e8d1780e00           call 0x92656e
// 0083ec9d  8b1d18cc9800         mov ebx, dword ptr [0x98cc18]
// 0083eca3  50                   push eax
// 0083eca4  6a02                 push 2
// 0083eca6  ffd3                 call ebx
// 0083eca8  8bce                 mov ecx, esi
// 0083ecaa  e841a4fcff           call 0x8090f0
// 0083ecaf  85c0                 test eax, eax
// 0083ecb1  741a                 je 0x83eccd
// 0083ecb3  e8f817fdff           call 0x8104b0
// 0083ecb8  6a01                 push 1
// 0083ecba  6a02                 push 2
// 0083ecbc  ff15c8b19800         call dword ptr [0x98b1c8]
// 0083ecc2  0fb70db4adb900       movzx ecx, word ptr [0xb9adb4]
// 0083ecc9  50                   push eax
// 0083ecca  51                   push ecx
// 0083eccb  ffd3                 call ebx
// 0083eccd  8bcf                 mov ecx, edi
// 0083eccf  e88c6efbff           call 0x7f5b60
// 0083ecd4  8b742414             mov esi, dword ptr [esp + 0x14]
// 0083ecd8  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0083ecde  50                   push eax
// 0083ecdf  e81c5afdff           call 0x814700
// 0083ece4  8bc8                 mov ecx, eax
// 0083ece6  e885e7fcff           call 0x80d470
// 0083eceb  85c0                 test eax, eax
// 0083eced  741a                 je 0x83ed09
// 0083ecef  8bcf                 mov ecx, edi
// 0083ecf1  e86a6efbff           call 0x7f5b60
// 0083ecf6  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 0083ecfc  50                   push eax
// 0083ecfd  e8fe59fdff           call 0x814700
// 0083ed02  8bc8                 mov ecx, eax
// 0083ed04  e82715fdff           call 0x810230
// 0083ed09  ff150ccc9800         call dword ptr [0x98cc0c]
// 0083ed0f  8d4c241c             lea ecx, [esp + 0x1c]
// 0083ed13  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 0083ed1b  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0083ed1f  e80c05bdff           call 0x40f230
// 0083ed24  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0083ed28  64890d00000000       mov dword ptr fs:[0], ecx
// 0083ed2f  59                   pop ecx
// 0083ed30  5f                   pop edi
// 0083ed31  5e                   pop esi
// 0083ed32  5d                   pop ebp
// 0083ed33  5b                   pop ebx
// 0083ed34  83c448               add esp, 0x48
// 0083ed37  c3                   ret 
// copied from an identical function in another client (function ?OnCustomizeCopyImage@CXTPCustomizeSheet@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp