// roc 2008-06 00722830  unit: CXTPRibbonBar  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722830
//
// 00722830  56                   push esi
// 00722831  8bf1                 mov esi, ecx
// 00722833  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 00722839  85c0                 test eax, eax
// 0072283b  7416                 je 0x722853
// 0072283d  83c9ff               or ecx, 0xffffffff
// 00722840  0bd1                 or edx, ecx
// 00722842  52                   push edx
// 00722843  51                   push ecx
// 00722844  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00722847  51                   push ecx
// 00722848  8d8884010000         lea ecx, [eax + 0x184]
// 0072284e  e87d9f0500           call 0x77c7d0
// 00722853  6a00                 push 0
// 00722855  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 0072285b  e8104a0700           call 0x797270
// 00722860  8bce                 mov ecx, esi
// 00722862  5e                   pop esi
// 00722863  e90830f9ff           jmp 0x6b5870
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnMouseLeave@CXTPRibbonBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
