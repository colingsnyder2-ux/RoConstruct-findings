// roc 2008-06 00720840  unit: CXTPMenuBar::CControlMDIButton  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00720840
//
// 00720840  56                   push esi
// 00720841  8bf1                 mov esi, ecx
// 00720843  e87871f9ff           call 0x6b79c0
// 00720848  50                   push eax
// 00720849  e81809f8ff           call 0x6a1166
// 0072084e  50                   push eax
// 0072084f  e8d203f8ff           call 0x6a0c26
// 00720854  83c408               add esp, 8
// 00720857  85c0                 test eax, eax
// 00720859  7414                 je 0x72086f
// 0072085b  83782000             cmp dword ptr [eax + 0x20], 0
// 0072085f  740e                 je 0x72086f
// 00720861  8b10                 mov edx, dword ptr [eax]
// 00720863  8bc8                 mov ecx, eax
// 00720865  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 0072086b  6a00                 push 0
// 0072086d  ffd0                 call eax
// 0072086f  c786c001000000000000 mov dword ptr [esi + 0x1c0], 0
// 00720879  5e                   pop esi
// 0072087a  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPMenuBar.cpp (function ?SwitchActiveMenu@CXTPMenuBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp
