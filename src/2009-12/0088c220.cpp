// roc 2009-12 0088c220  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088c220
//
// 0088c220  56                   push esi
// 0088c221  8bf1                 mov esi, ecx
// 0088c223  e8087cf6ff           call 0x7f3e30
// 0088c228  8b4660               mov eax, dword ptr [esi + 0x60]
// 0088c22b  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0088c231  85c0                 test eax, eax
// 0088c233  7403                 je 0x88c238
// 0088c235  8b4020               mov eax, dword ptr [eax + 0x20]
// 0088c238  8b5620               mov edx, dword ptr [esi + 0x20]
// 0088c23b  6a01                 push 1
// 0088c23d  8d4c2410             lea ecx, [esp + 0x10]
// 0088c241  51                   push ecx
// 0088c242  50                   push eax
// 0088c243  52                   push edx
// 0088c244  ff15c0ca9800         call dword ptr [0x98cac0]
// 0088c24a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0088c24e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088c252  8b542408             mov edx, dword ptr [esp + 8]
// 0088c256  50                   push eax
// 0088c257  8b4660               mov eax, dword ptr [esi + 0x60]
// 0088c25a  51                   push ecx
// 0088c25b  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0088c261  52                   push edx
// 0088c262  e8698bf7ff           call 0x804dd0
// 0088c267  5e                   pop esi
// 0088c268  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnMouseMove@CXTPControlComboBoxEditCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
