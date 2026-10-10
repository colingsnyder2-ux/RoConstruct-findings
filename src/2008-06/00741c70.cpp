// roc 2008-06 00741c70  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00741c70
//
// 00741c70  56                   push esi
// 00741c71  8bf1                 mov esi, ecx
// 00741c73  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00741c79  e8a23ef7ff           call 0x6b5b20
// 00741c7e  8b06                 mov eax, dword ptr [esi]
// 00741c80  8b5070               mov edx, dword ptr [eax + 0x70]
// 00741c83  6a01                 push 1
// 00741c85  8bce                 mov ecx, esi
// 00741c87  ffd2                 call edx
// 00741c89  5e                   pop esi
// 00741c8a  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?OnUnderlineActivate@CXTPControlComboBox@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
