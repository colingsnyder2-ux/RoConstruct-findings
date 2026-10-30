// roc 2009-12 007f95b0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f95b0
//
// 007f95b0  56                   push esi
// 007f95b1  8bf1                 mov esi, ecx
// 007f95b3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f95b9  e812bc0000           call 0x8051d0
// 007f95be  8b06                 mov eax, dword ptr [esi]
// 007f95c0  8b5070               mov edx, dword ptr [eax + 0x70]
// 007f95c3  6a01                 push 1
// 007f95c5  8bce                 mov ecx, esi
// 007f95c7  ffd2                 call edx
// 007f95c9  5e                   pop esi
// 007f95ca  c3                   ret 
// copied from an identical function in another client (function ?OnUnderlineActivate@CXTPControlComboBox@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp