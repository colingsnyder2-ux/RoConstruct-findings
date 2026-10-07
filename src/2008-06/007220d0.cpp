// roc 2008-06 007220d0  unit: CXTPRibbonBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007220d0
//
// 007220d0  56                   push esi
// 007220d1  8bf1                 mov esi, ecx
// 007220d3  8b8e80020000         mov ecx, dword ptr [esi + 0x280]
// 007220d9  85c9                 test ecx, ecx
// 007220db  7412                 je 0x7220ef
// 007220dd  8b01                 mov eax, dword ptr [ecx]
// 007220df  8b10                 mov edx, dword ptr [eax]
// 007220e1  6a01                 push 1
// 007220e3  ffd2                 call edx
// 007220e5  c7868002000000000000 mov dword ptr [esi + 0x280], 0
// 007220ef  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 007220f5  85c9                 test ecx, ecx
// 007220f7  7405                 je 0x7220fe
// 007220f9  e8c2fafcff           call 0x6f1bc0
// 007220fe  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 00722104  85c0                 test eax, eax
// 00722106  740b                 je 0x722113
// 00722108  8d8884010000         lea ecx, [eax + 0x184]
// 0072210e  e8eda00500           call 0x77c200
// 00722113  8bce                 mov ecx, esi
// 00722115  5e                   pop esi
// 00722116  e9154cf9ff           jmp 0x6b6d30
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnRemoved@CXTPRibbonBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
