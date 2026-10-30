// roc 2009-06 007b85c0  unit: CXTPRibbonBar  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b85c0
//
// 007b85c0  83ec08               sub esp, 8
// 007b85c3  56                   push esi
// 007b85c4  8bf1                 mov esi, ecx
// 007b85c6  e8c54df7ff           call 0x72d390
// 007b85cb  83be0c01000000       cmp dword ptr [esi + 0x10c], 0
// 007b85d2  8d8e0c010000         lea ecx, [esi + 0x10c]
// 007b85d8  7527                 jne 0x7b8601
// 007b85da  83790400             cmp dword ptr [ecx + 4], 0
// 007b85de  7521                 jne 0x7b8601
// 007b85e0  8b4074               mov eax, dword ptr [eax + 0x74]
// 007b85e3  83c064               add eax, 0x64
// 007b85e6  833800               cmp dword ptr [eax], 0
// 007b85e9  7514                 jne 0x7b85ff
// 007b85eb  83780400             cmp dword ptr [eax + 4], 0
// 007b85ef  750e                 jne 0x7b85ff
// 007b85f1  6a00                 push 0
// 007b85f3  8d442408             lea eax, [esp + 8]
// 007b85f7  50                   push eax
// 007b85f8  8bce                 mov ecx, esi
// 007b85fa  e8a11ff8ff           call 0x73a5a0
// 007b85ff  8bc8                 mov ecx, eax
// 007b8601  8b11                 mov edx, dword ptr [ecx]
// 007b8603  8b442410             mov eax, dword ptr [esp + 0x10]
// 007b8607  8b4904               mov ecx, dword ptr [ecx + 4]
// 007b860a  8910                 mov dword ptr [eax], edx
// 007b860c  894804               mov dword ptr [eax + 4], ecx
// 007b860f  5e                   pop esi
// 007b8610  83c408               add esp, 8
// 007b8613  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetIconSize@CXTPRibbonBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
