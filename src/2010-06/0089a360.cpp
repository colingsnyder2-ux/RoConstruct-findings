// roc 2010-06 0089a360  unit: CXTCaptionButton  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089a360
//
// 0089a360  6aff                 push -1
// 0089a362  6838c09b00           push 0x9bc038
// 0089a367  64a100000000         mov eax, dword ptr fs:[0]
// 0089a36d  50                   push eax
// 0089a36e  83ec34               sub esp, 0x34
// 0089a371  53                   push ebx
// 0089a372  56                   push esi
// 0089a373  57                   push edi
// 0089a374  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0089a379  33c4                 xor eax, esp
// 0089a37b  50                   push eax
// 0089a37c  8d442444             lea eax, [esp + 0x44]
// 0089a380  64a300000000         mov dword ptr fs:[0], eax
// 0089a386  8bf9                 mov edi, ecx
// 0089a388  8d4c2420             lea ecx, [esp + 0x20]
// 0089a38c  e8ef45f2ff           call 0x7be980
// 0089a391  0fb74c245c           movzx ecx, word ptr [esp + 0x5c]
// 0089a396  8d442410             lea eax, [esp + 0x10]
// 0089a39a  50                   push eax
// 0089a39b  33db                 xor ebx, ebx
// 0089a39d  51                   push ecx
// 0089a39e  895c2454             mov dword ptr [esp + 0x54], ebx
// 0089a3a2  895c2418             mov dword ptr [esp + 0x18], ebx
// 0089a3a6  e8e557f2ff           call 0x7bfb90
// 0089a3ab  83c408               add esp, 8
// 0089a3ae  3bc3                 cmp eax, ebx
// 0089a3b0  7528                 jne 0x89a3da
// 0089a3b2  8d4c2420             lea ecx, [esp + 0x20]
// 0089a3b6  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0089a3be  e8bd6af2ff           call 0x7c0e80
// 0089a3c3  33c0                 xor eax, eax
// 0089a3c5  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0089a3c9  64890d00000000       mov dword ptr fs:[0], ecx
// 0089a3d0  59                   pop ecx
// 0089a3d1  5f                   pop edi
// 0089a3d2  5e                   pop esi
// 0089a3d3  5b                   pop ebx
// 0089a3d4  83c440               add esp, 0x40
// 0089a3d7  c21000               ret 0x10
// 0089a3da  395c2410             cmp dword ptr [esp + 0x10], ebx
// 0089a3de  740c                 je 0x89a3ec
// 0089a3e0  50                   push eax
// 0089a3e1  8d4c2424             lea ecx, [esp + 0x24]
// 0089a3e5  e8566af2ff           call 0x7c0e40
// 0089a3ea  eb4c                 jmp 0x89a438
// 0089a3ec  bea02ea000           mov esi, 0xa02ea0
// 0089a3f1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0089a3f5  89742418             mov dword ptr [esp + 0x18], esi
// 0089a3f9  50                   push eax
// 0089a3fa  8d4c241c             lea ecx, [esp + 0x1c]
// 0089a3fe  c644245001           mov byte ptr [esp + 0x50], 1
// 0089a403  e862dbf0ff           call 0x7a7f6a
// 0089a408  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0089a40c  52                   push edx
// 0089a40d  8d4c2460             lea ecx, [esp + 0x60]
// 0089a411  e8aa62d8ff           call 0x6206c0
// 0089a416  8bc8                 mov ecx, eax
// 0089a418  e8436df6ff           call 0x801160
// 0089a41d  50                   push eax
// 0089a41e  8d4c2424             lea ecx, [esp + 0x24]
// 0089a422  e8d969f2ff           call 0x7c0e00
// 0089a427  8d4c2418             lea ecx, [esp + 0x18]
// 0089a42b  885c244c             mov byte ptr [esp + 0x4c], bl
// 0089a42f  89742418             mov dword ptr [esp + 0x18], esi
// 0089a433  e82852b7ff           call 0x40f660
// 0089a438  8d4c2420             lea ecx, [esp + 0x20]
// 0089a43c  e8af45f2ff           call 0x7be9f0
// 0089a441  85c0                 test eax, eax
// 0089a443  0f8569ffffff         jne 0x89a3b2
// 0089a449  8b442460             mov eax, dword ptr [esp + 0x60]
// 0089a44d  50                   push eax
// 0089a44e  83ec24               sub esp, 0x24
// 0089a451  8bcc                 mov ecx, esp
// 0089a453  89a42488000000       mov dword ptr [esp + 0x88], esp
// 0089a45a  e82145f2ff           call 0x7be980
// 0089a45f  83ec24               sub esp, 0x24
// 0089a462  8d54246c             lea edx, [esp + 0x6c]
// 0089a466  8bcc                 mov ecx, esp
// 0089a468  89642460             mov dword ptr [esp + 0x60], esp
// 0089a46c  52                   push edx
// 0089a46d  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 0089a475  e81645f2ff           call 0x7be990
// 0089a47a  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 0089a481  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0089a488  50                   push eax
// 0089a489  51                   push ecx
// 0089a48a  8bcf                 mov ecx, edi
// 0089a48c  889c24a0000000       mov byte ptr [esp + 0xa0], bl
// 0089a493  e898fdffff           call 0x89a230
// 0089a498  8d4c2420             lea ecx, [esp + 0x20]
// 0089a49c  8bf0                 mov esi, eax
// 0089a49e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0089a4a6  e8d569f2ff           call 0x7c0e80
// 0089a4ab  8bc6                 mov eax, esi
// 0089a4ad  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0089a4b1  64890d00000000       mov dword ptr fs:[0], ecx
// 0089a4b8  59                   pop ecx
// 0089a4b9  5f                   pop edi
// 0089a4ba  5e                   pop esi
// 0089a4bb  5b                   pop ebx
// 0089a4bc  83c440               add esp, 0x40
// 0089a4bf  c21000               ret 0x10
// copied from an identical function in another client (function ?SetBitmap@CXTButton@@UAEHVCSize@@IH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp