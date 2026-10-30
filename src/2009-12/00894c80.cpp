// roc 2009-12 00894c80  unit: CXTPRibbonBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894c80
//
// 00894c80  56                   push esi
// 00894c81  8bf1                 mov esi, ecx
// 00894c83  8b8e80020000         mov ecx, dword ptr [esi + 0x280]
// 00894c89  85c9                 test ecx, ecx
// 00894c8b  7412                 je 0x894c9f
// 00894c8d  8b01                 mov eax, dword ptr [ecx]
// 00894c8f  8b10                 mov edx, dword ptr [eax]
// 00894c91  6a01                 push 1
// 00894c93  ffd2                 call edx
// 00894c95  c7868002000000000000 mov dword ptr [esi + 0x280], 0
// 00894c9f  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 00894ca5  85c9                 test ecx, ecx
// 00894ca7  7405                 je 0x894cae
// 00894ca9  e83206fbff           call 0x8452e0
// 00894cae  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 00894cb4  85c0                 test eax, eax
// 00894cb6  740b                 je 0x894cc3
// 00894cb8  8d8884010000         lea ecx, [eax + 0x184]
// 00894cbe  e8ada70300           call 0x8cf470
// 00894cc3  8bce                 mov ecx, esi
// 00894cc5  5e                   pop esi
// 00894cc6  e93517f7ff           jmp 0x806400
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnRemoved@CXTPRibbonBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
