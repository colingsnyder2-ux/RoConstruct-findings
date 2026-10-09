// roc 2007-03 00721470  unit: seg_00720000  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00721470
//
// 00721470  56                   push esi
// 00721471  8bf1                 mov esi, ecx
// 00721473  e878ffffff           call 0x7213f0
// 00721478  e8233bf3ff           call 0x654fa0
// 0072147d  6a20                 push 0x20
// 0072147f  8bc8                 mov ecx, eax
// 00721481  e82a33f3ff           call 0x6547b0
// 00721486  894614               mov dword ptr [esi + 0x14], eax
// 00721489  e8123bf3ff           call 0x654fa0
// 0072148e  6a20                 push 0x20
// 00721490  8bc8                 mov ecx, eax
// 00721492  e81933f3ff           call 0x6547b0
// 00721497  894618               mov dword ptr [esi + 0x18], eax
// 0072149a  e8013bf3ff           call 0x654fa0
// 0072149f  6a29                 push 0x29
// 007214a1  8bc8                 mov ecx, eax
// 007214a3  e80833f3ff           call 0x6547b0
// 007214a8  89461c               mov dword ptr [esi + 0x1c], eax
// 007214ab  e8f03af3ff           call 0x654fa0
// 007214b0  6a21                 push 0x21
// 007214b2  8bc8                 mov ecx, eax
// 007214b4  e8f732f3ff           call 0x6547b0
// 007214b9  894620               mov dword ptr [esi + 0x20], eax
// 007214bc  e8df3af3ff           call 0x654fa0
// 007214c1  6a1f                 push 0x1f
// 007214c3  8bc8                 mov ecx, eax
// 007214c5  e8e632f3ff           call 0x6547b0
// 007214ca  894624               mov dword ptr [esi + 0x24], eax
// 007214cd  e8ce3af3ff           call 0x654fa0
// 007214d2  6a24                 push 0x24
// 007214d4  8bc8                 mov ecx, eax
// 007214d6  e8d532f3ff           call 0x6547b0
// 007214db  894628               mov dword ptr [esi + 0x28], eax
// 007214de  5e                   pop esi
// 007214df  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?RefreshMetrics@CXTColorSelectorCtrlThemeOfficeXP@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
