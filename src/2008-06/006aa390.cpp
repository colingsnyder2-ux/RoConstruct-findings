// roc 2008-06 006aa390  unit: CXTPControlComboBoxList  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aa390
//
// 006aa390  56                   push esi
// 006aa391  8bf1                 mov esi, ecx
// 006aa393  8b4660               mov eax, dword ptr [esi + 0x60]
// 006aa396  c780cc01000001000000 mov dword ptr [eax + 0x1cc], 1
// 006aa3a0  ff15102e8000         call dword ptr [0x802e10]
// 006aa3a6  3b4620               cmp eax, dword ptr [esi + 0x20]
// 006aa3a9  7513                 jne 0x6aa3be
// 006aa3ab  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 006aa3af  750d                 jne 0x6aa3be
// 006aa3b1  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 006aa3b4  8b11                 mov edx, dword ptr [ecx]
// 006aa3b6  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 006aa3bc  ffd0                 call eax
// 006aa3be  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006aa3c1  6a00                 push 0
// 006aa3c3  6a03                 push 3
// 006aa3c5  68d3000000           push 0xd3
// 006aa3ca  51                   push ecx
// 006aa3cb  ff15142e8000         call dword ptr [0x802e14]
// 006aa3d1  8bce                 mov ecx, esi
// 006aa3d3  5e                   pop esi
// 006aa3d4  e927e8ffff           jmp 0x6a8c00
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?OnEditChanged@CXTPControlComboBoxEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
