// roc 2010-06 00848e10  unit: CXTPRibbonBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00848e10
//
// 00848e10  56                   push esi
// 00848e11  8bf1                 mov esi, ecx
// 00848e13  8b8e80020000         mov ecx, dword ptr [esi + 0x280]
// 00848e19  85c9                 test ecx, ecx
// 00848e1b  7412                 je 0x848e2f
// 00848e1d  8b01                 mov eax, dword ptr [ecx]
// 00848e1f  8b10                 mov edx, dword ptr [eax]
// 00848e21  6a01                 push 1
// 00848e23  ffd2                 call edx
// 00848e25  c7868002000000000000 mov dword ptr [esi + 0x280], 0
// 00848e2f  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 00848e35  85c9                 test ecx, ecx
// 00848e37  7405                 je 0x848e3e
// 00848e39  e84205fbff           call 0x7f9380
// 00848e3e  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 00848e44  85c0                 test eax, eax
// 00848e46  740b                 je 0x848e53
// 00848e48  8d8884010000         lea ecx, [eax + 0x184]
// 00848e4e  e8fda70300           call 0x883650
// 00848e53  8bce                 mov ecx, esi
// 00848e55  5e                   pop esi
// 00848e56  e91517f7ff           jmp 0x7ba570
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnRemoved@CXTPRibbonBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
