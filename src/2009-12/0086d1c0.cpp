// roc 2009-12 0086d1c0  unit: CSelectionCaption  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086d1c0
//
// 0086d1c0  56                   push esi
// 0086d1c1  8bf1                 mov esi, ecx
// 0086d1c3  f686c800000004       test byte ptr [esi + 0xc8], 4
// 0086d1ca  7441                 je 0x86d20d
// 0086d1cc  8b4638               mov eax, dword ptr [esi + 0x38]
// 0086d1cf  57                   push edi
// 0086d1d0  85c0                 test eax, eax
// 0086d1d2  750a                 jne 0x86d1de
// 0086d1d4  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086d1d7  50                   push eax
// 0086d1d8  ff15bccb9800         call dword ptr [0x98cbbc]
// 0086d1de  50                   push eax
// 0086d1df  e84669f8ff           call 0x7f3b2a
// 0086d1e4  8bf8                 mov edi, eax
// 0086d1e6  85ff                 test edi, edi
// 0086d1e8  7420                 je 0x86d20a
// 0086d1ea  53                   push ebx
// 0086d1eb  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 0086d1ee  8bce                 mov ecx, esi
// 0086d1f0  e8d5940b00           call 0x9266ca
// 0086d1f5  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0086d1f8  0fb7c0               movzx eax, ax
// 0086d1fb  53                   push ebx
// 0086d1fc  50                   push eax
// 0086d1fd  6811010000           push 0x111
// 0086d202  51                   push ecx
// 0086d203  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0086d209  5b                   pop ebx
// 0086d20a  5f                   pop edi
// 0086d20b  5e                   pop esi
// 0086d20c  c3                   ret 
// 0086d20d  8b16                 mov edx, dword ptr [esi]
// 0086d20f  8b825c010000         mov eax, dword ptr [edx + 0x15c]
// 0086d215  5e                   pop esi
// 0086d216  ffe0                 jmp eax
// copied from an identical function in another client (function ?OnCaptButton@CXTCaption@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp