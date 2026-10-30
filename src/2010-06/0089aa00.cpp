// roc 2010-06 0089aa00  unit: CXTCaptionPopupWnd  size: 626 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089aa00
//
// 0089aa00  6aff                 push -1
// 0089aa02  6859c19b00           push 0x9bc159
// 0089aa07  64a100000000         mov eax, dword ptr fs:[0]
// 0089aa0d  50                   push eax
// 0089aa0e  83ec20               sub esp, 0x20
// 0089aa11  53                   push ebx
// 0089aa12  55                   push ebp
// 0089aa13  56                   push esi
// 0089aa14  57                   push edi
// 0089aa15  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0089aa1a  33c4                 xor eax, esp
// 0089aa1c  50                   push eax
// 0089aa1d  8d442434             lea eax, [esp + 0x34]
// 0089aa21  64a300000000         mov dword ptr fs:[0], eax
// 0089aa27  8bf1                 mov esi, ecx
// 0089aa29  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 0089aa2d  33db                 xor ebx, ebx
// 0089aa2f  3bfb                 cmp edi, ebx
// 0089aa31  0f84e4000000         je 0x89ab1b
// 0089aa37  8b4720               mov eax, dword ptr [edi + 0x20]
// 0089aa3a  50                   push eax
// 0089aa3b  ff1528bc9e00         call dword ptr [0x9ebc28]
// 0089aa41  85c0                 test eax, eax
// 0089aa43  0f84d2000000         je 0x89ab1b
// 0089aa49  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0089aa4d  897e54               mov dword ptr [esi + 0x54], edi
// 0089aa50  3beb                 cmp ebp, ebx
// 0089aa52  0f84c3000000         je 0x89ab1b
// 0089aa58  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0089aa5b  51                   push ecx
// 0089aa5c  ff1528bc9e00         call dword ptr [0x9ebc28]
// 0089aa62  85c0                 test eax, eax
// 0089aa64  0f84b1000000         je 0x89ab1b
// 0089aa6a  8b442444             mov eax, dword ptr [esp + 0x44]
// 0089aa6e  53                   push ebx
// 0089aa6f  53                   push ebx
// 0089aa70  896e58               mov dword ptr [esi + 0x58], ebp
// 0089aa73  8b5004               mov edx, dword ptr [eax + 4]
// 0089aa76  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0089aa79  8b6f20               mov ebp, dword ptr [edi + 0x20]
// 0089aa7c  8b38                 mov edi, dword ptr [eax]
// 0089aa7e  8b4008               mov eax, dword ptr [eax + 8]
// 0089aa81  55                   push ebp
// 0089aa82  2bca                 sub ecx, edx
// 0089aa84  51                   push ecx
// 0089aa85  2bc7                 sub eax, edi
// 0089aa87  50                   push eax
// 0089aa88  52                   push edx
// 0089aa89  57                   push edi
// 0089aa8a  6800004090           push 0x90400000
// 0089aa8f  68fe08a000           push 0xa008fe
// 0089aa94  68100ea700           push 0xa70e10
// 0089aa99  6880000000           push 0x80
// 0089aa9e  8bce                 mov ecx, esi
// 0089aaa0  e873cff0ff           call 0x7a7a18
// 0089aaa5  85c0                 test eax, eax
// 0089aaa7  7472                 je 0x89ab1b
// 0089aaa9  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0089aaac  56                   push esi
// 0089aaad  e82eeaf4ff           call 0x7e94e0
// 0089aab2  8d4c2448             lea ecx, [esp + 0x48]
// 0089aab6  89465c               mov dword ptr [esi + 0x5c], eax
// 0089aab9  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 0089aabf  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0089aac3  e8e87df8ff           call 0x8228b0
// 0089aac8  8b10                 mov edx, dword ptr [eax]
// 0089aaca  8b5208               mov edx, dword ptr [edx + 8]
// 0089aacd  6883240000           push 0x2483
// 0089aad2  8d4c244c             lea ecx, [esp + 0x4c]
// 0089aad6  51                   push ecx
// 0089aad7  8bc8                 mov ecx, eax
// 0089aad9  ffd2                 call edx
// 0089aadb  8b7e60               mov edi, dword ptr [esi + 0x60]
// 0089aade  8d6e60               lea ebp, [esi + 0x60]
// 0089aae1  68ffff0000           push 0xffff
// 0089aae6  8d4c2428             lea ecx, [esp + 0x28]
// 0089aaea  e88147f6ff           call 0x7ff270
// 0089aaef  50                   push eax
// 0089aaf0  6801020010           push 0x10000201
// 0089aaf5  6a02                 push 2
// 0089aaf7  8d4c2458             lea ecx, [esp + 0x58]
// 0089aafb  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0089ab01  50                   push eax
// 0089ab02  8b8764010000         mov eax, dword ptr [edi + 0x164]
// 0089ab08  56                   push esi
// 0089ab09  8bcd                 mov ecx, ebp
// 0089ab0b  ffd0                 call eax
// 0089ab0d  85c0                 test eax, eax
// 0089ab0f  7522                 jne 0x89ab33
// 0089ab11  8d4c2448             lea ecx, [esp + 0x48]
// 0089ab15  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0089ab1b  33c0                 xor eax, eax
// 0089ab1d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089ab21  64890d00000000       mov dword ptr fs:[0], ecx
// 0089ab28  59                   pop ecx
// 0089ab29  5f                   pop edi
// 0089ab2a  5e                   pop esi
// 0089ab2b  5d                   pop ebp
// 0089ab2c  5b                   pop ebx
// 0089ab2d  83c42c               add esp, 0x2c
// 0089ab30  c20c00               ret 0xc
// 0089ab33  8b8ef0010000         mov ecx, dword ptr [esi + 0x1f0]
// 0089ab39  8dbef0010000         lea edi, [esi + 0x1f0]
// 0089ab3f  6a64                 push 0x64
// 0089ab41  894c2450             mov dword ptr [esp + 0x50], ecx
// 0089ab45  56                   push esi
// 0089ab46  8d4c242c             lea ecx, [esp + 0x2c]
// 0089ab4a  889ee1000000         mov byte ptr [esi + 0xe1], bl
// 0089ab50  e81b47f6ff           call 0x7ff270
// 0089ab55  8b542454             mov edx, dword ptr [esp + 0x54]
// 0089ab59  50                   push eax
// 0089ab5a  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 0089ab60  684b0f0010           push 0x10000f4b
// 0089ab65  53                   push ebx
// 0089ab66  8bcf                 mov ecx, edi
// 0089ab68  ffd0                 call eax
// 0089ab6a  85c0                 test eax, eax
// 0089ab6c  74a3                 je 0x89ab11
// 0089ab6e  8d4c2414             lea ecx, [esp + 0x14]
// 0089ab72  89ae9c020000         mov dword ptr [esi + 0x29c], ebp
// 0089ab78  e8d3d5f0ff           call 0x7a8150
// 0089ab7d  6a01                 push 1
// 0089ab7f  53                   push ebx
// 0089ab80  6a09                 push 9
// 0089ab82  6a0f                 push 0xf
// 0089ab84  6a10                 push 0x10
// 0089ab86  8d4c2428             lea ecx, [esp + 0x28]
// 0089ab8a  c644245001           mov byte ptr [esp + 0x50], 1
// 0089ab8f  e8b6d5f0ff           call 0x7a814a
// 0089ab94  895c2420             mov dword ptr [esp + 0x20], ebx
// 0089ab98  c744241ca02ea000     mov dword ptr [esp + 0x1c], 0xa02ea0
// 0089aba0  c644243c02           mov byte ptr [esp + 0x3c], 2
// 0089aba5  e8067df8ff           call 0x8228b0
// 0089abaa  8b10                 mov edx, dword ptr [eax]
// 0089abac  8b5214               mov edx, dword ptr [edx + 0x14]
// 0089abaf  6856240000           push 0x2456
// 0089abb4  8d4c2420             lea ecx, [esp + 0x20]
// 0089abb8  51                   push ecx
// 0089abb9  8bc8                 mov ecx, eax
// 0089abbb  ffd2                 call edx
// 0089abbd  68ff00ff00           push 0xff00ff
// 0089abc2  8d442420             lea eax, [esp + 0x20]
// 0089abc6  50                   push eax
// 0089abc7  8d4c241c             lea ecx, [esp + 0x1c]
// 0089abcb  e82089b7ff           call 0x4134f0
// 0089abd0  53                   push ebx
// 0089abd1  8d4c2418             lea ecx, [esp + 0x18]
// 0089abd5  e8c633f2ff           call 0x7bdfa0
// 0089abda  50                   push eax
// 0089abdb  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 0089abe1  e8eaee0000           call 0x8a9ad0
// 0089abe6  6a01                 push 1
// 0089abe8  8d4c2418             lea ecx, [esp + 0x18]
// 0089abec  e8af33f2ff           call 0x7bdfa0
// 0089abf1  50                   push eax
// 0089abf2  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 0089abf8  e8d3ee0000           call 0x8a9ad0
// 0089abfd  8b86a4020000         mov eax, dword ptr [esi + 0x2a4]
// 0089ac03  8b8eac020000         mov ecx, dword ptr [esi + 0x2ac]
// 0089ac09  8b1f                 mov ebx, dword ptr [edi]
// 0089ac0b  6a01                 push 1
// 0089ac0d  50                   push eax
// 0089ac0e  ba10000000           mov edx, 0x10
// 0089ac13  51                   push ecx
// 0089ac14  8d6aff               lea ebp, [edx - 1]
// 0089ac17  55                   push ebp
// 0089ac18  52                   push edx
// 0089ac19  8b9358010000         mov edx, dword ptr [ebx + 0x158]
// 0089ac1f  8bcf                 mov ecx, edi
// 0089ac21  ffd2                 call edx
// 0089ac23  8d4c2414             lea ecx, [esp + 0x14]
// 0089ac27  e8b0290e00           call 0x97d5dc
// 0089ac2c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0089ac2f  6a00                 push 0
// 0089ac31  6a0a                 push 0xa
// 0089ac33  6a01                 push 1
// 0089ac35  50                   push eax
// 0089ac36  ff1554bc9e00         call dword ptr [0x9ebc54]
// 0089ac3c  8d4c241c             lea ecx, [esp + 0x1c]
// 0089ac40  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0089ac45  c744241ca02ea000     mov dword ptr [esp + 0x1c], 0xa02ea0
// 0089ac4d  e80e4ab7ff           call 0x40f660
// 0089ac52  8d4c2414             lea ecx, [esp + 0x14]
// 0089ac56  c644243c00           mov byte ptr [esp + 0x3c], 0
// 0089ac5b  e8d2d4f0ff           call 0x7a8132
// 0089ac60  8d4c2448             lea ecx, [esp + 0x48]
// 0089ac64  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0089ac6a  8d45f2               lea eax, [ebp - 0xe]
// 0089ac6d  e9abfeffff           jmp 0x89ab1d
// copied from an identical function in another client (function ?Create@CXTCaptionPopupWnd@@UAEHABVCRect@@PAVCWnd@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp