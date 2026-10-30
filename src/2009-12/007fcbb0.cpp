// roc 2009-12 007fcbb0  unit: CXTPControlComboBoxList  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fcbb0
//
// 007fcbb0  56                   push esi
// 007fcbb1  8bf1                 mov esi, ecx
// 007fcbb3  8b4660               mov eax, dword ptr [esi + 0x60]
// 007fcbb6  c780cc01000001000000 mov dword ptr [eax + 0x1cc], 1
// 007fcbc0  ff15eccb9800         call dword ptr [0x98cbec]
// 007fcbc6  3b4620               cmp eax, dword ptr [esi + 0x20]
// 007fcbc9  7513                 jne 0x7fcbde
// 007fcbcb  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 007fcbcf  750d                 jne 0x7fcbde
// 007fcbd1  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007fcbd4  8b11                 mov edx, dword ptr [ecx]
// 007fcbd6  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 007fcbdc  ffd0                 call eax
// 007fcbde  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007fcbe1  6a00                 push 0
// 007fcbe3  6a03                 push 3
// 007fcbe5  68d3000000           push 0xd3
// 007fcbea  51                   push ecx
// 007fcbeb  ff15c4cb9800         call dword ptr [0x98cbc4]
// 007fcbf1  8bce                 mov ecx, esi
// 007fcbf3  5e                   pop esi
// 007fcbf4  e927e8ffff           jmp 0x7fb420
// copied from an identical function in another client (function ?OnEditChanged@CXTPControlComboBoxEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp