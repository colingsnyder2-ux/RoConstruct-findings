// roc 2009-06 0080a240  unit: CXTCaptionButtonThemeOfficeXP  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080a240
//
// 0080a240  53                   push ebx
// 0080a241  8a5c2408             mov bl, byte ptr [esp + 8]
// 0080a245  57                   push edi
// 0080a246  8bf9                 mov edi, ecx
// 0080a248  f6c304               test bl, 4
// 0080a24b  7413                 je 0x80a260
// 0080a24d  e8cea8f4ff           call 0x754b20
// 0080a252  6a11                 push 0x11
// 0080a254  8bc8                 mov ecx, eax
// 0080a256  e845a0f4ff           call 0x7542a0
// 0080a25b  5f                   pop edi
// 0080a25c  5b                   pop ebx
// 0080a25d  c20800               ret 8
// 0080a260  56                   push esi
// 0080a261  8b742414             mov esi, dword ptr [esp + 0x14]
// 0080a265  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 0080a26c  7546                 jne 0x80a2b4
// 0080a26e  ff153cee8900         call dword ptr [0x89ee3c]
// 0080a274  3b4620               cmp eax, dword ptr [esi + 0x20]
// 0080a277  743b                 je 0x80a2b4
// 0080a279  f6c301               test bl, 1
// 0080a27c  7536                 jne 0x80a2b4
// 0080a27e  8bb6ac000000         mov esi, dword ptr [esi + 0xac]
// 0080a284  85f6                 test esi, esi
// 0080a286  7504                 jne 0x80a28c
// 0080a288  33c0                 xor eax, eax
// 0080a28a  eb03                 jmp 0x80a28f
// 0080a28c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0080a28f  50                   push eax
// 0080a290  ff15e0ed8900         call dword ptr [0x89ede0]
// 0080a296  85c0                 test eax, eax
// 0080a298  7409                 je 0x80a2a3
// 0080a29a  8b4678               mov eax, dword ptr [esi + 0x78]
// 0080a29d  5e                   pop esi
// 0080a29e  5f                   pop edi
// 0080a29f  5b                   pop ebx
// 0080a2a0  c20800               ret 8
// 0080a2a3  8b4734               mov eax, dword ptr [edi + 0x34]
// 0080a2a6  83f8ff               cmp eax, -1
// 0080a2a9  751a                 jne 0x80a2c5
// 0080a2ab  8b4730               mov eax, dword ptr [edi + 0x30]
// 0080a2ae  5e                   pop esi
// 0080a2af  5f                   pop edi
// 0080a2b0  5b                   pop ebx
// 0080a2b1  c20800               ret 8
// 0080a2b4  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 0080a2ba  83f8ff               cmp eax, -1
// 0080a2bd  7506                 jne 0x80a2c5
// 0080a2bf  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 0080a2c5  5e                   pop esi
// 0080a2c6  5f                   pop edi
// 0080a2c7  5b                   pop ebx
// 0080a2c8  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?GetTextColor@CXTCaptionButtonThemeOfficeXP@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
