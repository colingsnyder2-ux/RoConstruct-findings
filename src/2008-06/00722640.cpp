// roc 2008-06 00722640  unit: CXTPRibbonBar  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722640
//
// 00722640  56                   push esi
// 00722641  8bf1                 mov esi, ecx
// 00722643  e81a9c0900           call 0x7bc262
// 00722648  8bce                 mov ecx, esi
// 0072264a  e871faffff           call 0x7220c0
// 0072264f  8b10                 mov edx, dword ptr [eax]
// 00722651  8bc8                 mov ecx, eax
// 00722653  8b82ac000000         mov eax, dword ptr [edx + 0xac]
// 00722659  ffd0                 call eax
// 0072265b  8bb668020000         mov esi, dword ptr [esi + 0x268]
// 00722661  8b9684010000         mov edx, dword ptr [esi + 0x184]
// 00722667  8b4204               mov eax, dword ptr [edx + 4]
// 0072266a  8d8e84010000         lea ecx, [esi + 0x184]
// 00722670  5e                   pop esi
// 00722671  ffe0                 jmp eax
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonBar.cpp (function ?OnSysColorChange@CXTPRibbonBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp
