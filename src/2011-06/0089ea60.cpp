// roc 2011-06 0089ea60  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089ea60
//
// 0089ea60  6aff                 push -1
// 0089ea62  688828a000           push 0xa02888
// 0089ea67  64a100000000         mov eax, dword ptr fs:[0]
// 0089ea6d  50                   push eax
// 0089ea6e  83ec18               sub esp, 0x18
// 0089ea71  53                   push ebx
// 0089ea72  55                   push ebp
// 0089ea73  56                   push esi
// 0089ea74  57                   push edi
// 0089ea75  a12058c900           mov eax, dword ptr [0xc95820]
// 0089ea7a  33c4                 xor eax, esp
// 0089ea7c  50                   push eax
// 0089ea7d  8d44242c             lea eax, [esp + 0x2c]
// 0089ea81  64a300000000         mov dword ptr fs:[0], eax
// 0089ea87  8bd9                 mov ebx, ecx
// 0089ea89  895c2414             mov dword ptr [esp + 0x14], ebx
// 0089ea8d  8b03                 mov eax, dword ptr [ebx]
// 0089ea8f  50                   push eax
// 0089ea90  8d4c241c             lea ecx, [esp + 0x1c]
// 0089ea94  e88fc4f6ff           call 0x80af28
// 0089ea99  33ed                 xor ebp, ebp
// 0089ea9b  396b24               cmp dword ptr [ebx + 0x24], ebp
// 0089ea9e  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0089eaa6  0f8e98000000         jle 0x89eb44
// 0089eaac  8d642400             lea esp, [esp]
// 0089eab0  85ed                 test ebp, ebp
// 0089eab2  0f8cd5000000         jl 0x89eb8d
// 0089eab8  3b6b24               cmp ebp, dword ptr [ebx + 0x24]
// 0089eabb  0f8dcc000000         jge 0x89eb8d
// 0089eac1  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0089eac4  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 0089eac7  8d04a9               lea eax, [ecx + ebp*4]
// 0089eaca  33ff                 xor edi, edi
// 0089eacc  397e2c               cmp dword ptr [esi + 0x2c], edi
// 0089eacf  7e2f                 jle 0x89eb00
// 0089ead1  33db                 xor ebx, ebx
// 0089ead3  85db                 test ebx, ebx
// 0089ead5  0f8cb2000000         jl 0x89eb8d
// 0089eadb  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 0089eade  0f8da9000000         jge 0x89eb8d
// 0089eae4  8b4628               mov eax, dword ptr [esi + 0x28]
// 0089eae7  03c3                 add eax, ebx
// 0089eae9  50                   push eax
// 0089eaea  8d4c241c             lea ecx, [esp + 0x1c]
// 0089eaee  e8f7de1200           call 0x9cc9ea
// 0089eaf3  47                   inc edi
// 0089eaf4  83c310               add ebx, 0x10
// 0089eaf7  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 0089eafa  7cd7                 jl 0x89ead3
// 0089eafc  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0089eb00  56                   push esi
// 0089eb01  8d54241c             lea edx, [esp + 0x1c]
// 0089eb05  52                   push edx
// 0089eb06  8bcb                 mov ecx, ebx
// 0089eb08  e8c3fbffff           call 0x89e6d0
// 0089eb0d  6a00                 push 0
// 0089eb0f  8d4c241c             lea ecx, [esp + 0x1c]
// 0089eb13  e81cdd1200           call 0x9cc834
// 0089eb18  837e2006             cmp dword ptr [esi + 0x20], 6
// 0089eb1c  7e1c                 jle 0x89eb3a
// 0089eb1e  6a01                 push 1
// 0089eb20  55                   push ebp
// 0089eb21  8d4b1c               lea ecx, [ebx + 0x1c]
// 0089eb24  e857b7f8ff           call 0x82a280
// 0089eb29  8bce                 mov ecx, esi
// 0089eb2b  e8d0feffff           call 0x89ea00
// 0089eb30  56                   push esi
// 0089eb31  e822b5f6ff           call 0x80a058
// 0089eb36  83c404               add esp, 4
// 0089eb39  4d                   dec ebp
// 0089eb3a  45                   inc ebp
// 0089eb3b  3b6b24               cmp ebp, dword ptr [ebx + 0x24]
// 0089eb3e  0f8c6cffffff         jl 0x89eab0
// 0089eb44  837b2400             cmp dword ptr [ebx + 0x24], 0
// 0089eb48  751e                 jne 0x89eb68
// 0089eb4a  837b1000             cmp dword ptr [ebx + 0x10], 0
// 0089eb4e  7418                 je 0x89eb68
// 0089eb50  8b03                 mov eax, dword ptr [ebx]
// 0089eb52  8b4020               mov eax, dword ptr [eax + 0x20]
// 0089eb55  6843cd0a00           push 0xacd43
// 0089eb5a  50                   push eax
// 0089eb5b  ff15d019a400         call dword ptr [0xa419d0]
// 0089eb61  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 0089eb68  8d4c2418             lea ecx, [esp + 0x18]
// 0089eb6c  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0089eb74  e8a9c3f6ff           call 0x80af22
// 0089eb79  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089eb7d  64890d00000000       mov dword ptr fs:[0], ecx
// 0089eb84  59                   pop ecx
// 0089eb85  5f                   pop edi
// 0089eb86  5e                   pop esi
// 0089eb87  5d                   pop ebp
// 0089eb88  5b                   pop ebx
// 0089eb89  83c424               add esp, 0x24
// 0089eb8c  c3                   ret 
// 0089eb8d  e878b7f6ff           call 0x80a30a
// copied from an identical function in another client (function ?OnAnimate@CXTPCommandBarAnimation@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp