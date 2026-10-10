// roc 2008-06 00719a10  unit: CSelectionCaption  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00719a10
//
// 00719a10  56                   push esi
// 00719a11  8bf1                 mov esi, ecx
// 00719a13  f686c800000004       test byte ptr [esi + 0xc8], 4
// 00719a1a  7441                 je 0x719a5d
// 00719a1c  8b4638               mov eax, dword ptr [esi + 0x38]
// 00719a1f  57                   push edi
// 00719a20  85c0                 test eax, eax
// 00719a22  750a                 jne 0x719a2e
// 00719a24  8b4620               mov eax, dword ptr [esi + 0x20]
// 00719a27  50                   push eax
// 00719a28  ff15f82d8000         call dword ptr [0x802df8]
// 00719a2e  50                   push eax
// 00719a2f  e8aa71f8ff           call 0x6a0bde
// 00719a34  8bf8                 mov edi, eax
// 00719a36  85ff                 test edi, edi
// 00719a38  7420                 je 0x719a5a
// 00719a3a  53                   push ebx
// 00719a3b  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 00719a3e  8bce                 mov ecx, esi
// 00719a40  e841280a00           call 0x7bc286
// 00719a45  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00719a48  0fb7c0               movzx eax, ax
// 00719a4b  53                   push ebx
// 00719a4c  50                   push eax
// 00719a4d  6811010000           push 0x111
// 00719a52  51                   push ecx
// 00719a53  ff15142e8000         call dword ptr [0x802e14]
// 00719a59  5b                   pop ebx
// 00719a5a  5f                   pop edi
// 00719a5b  5e                   pop esi
// 00719a5c  c3                   ret 
// 00719a5d  8b16                 mov edx, dword ptr [esi]
// 00719a5f  8b825c010000         mov eax, dword ptr [edx + 0x15c]
// 00719a65  5e                   pop esi
// 00719a66  ffe0                 jmp eax
// library xtp-11.2.2-shared-mfc/Source\Controls\XTCaption.cpp (function ?OnCaptButton@CXTCaption@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp
