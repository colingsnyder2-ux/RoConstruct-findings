// roc 2009-06 007b7a30  unit: CXTPRibbonBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b7a30
//
// 007b7a30  56                   push esi
// 007b7a31  8bf1                 mov esi, ecx
// 007b7a33  8b8e80020000         mov ecx, dword ptr [esi + 0x280]
// 007b7a39  85c9                 test ecx, ecx
// 007b7a3b  7412                 je 0x7b7a4f
// 007b7a3d  8b01                 mov eax, dword ptr [ecx]
// 007b7a3f  8b10                 mov edx, dword ptr [eax]
// 007b7a41  6a01                 push 1
// 007b7a43  ffd2                 call edx
// 007b7a45  c7868002000000000000 mov dword ptr [esi + 0x280], 0
// 007b7a4f  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 007b7a55  85c9                 test ecx, ecx
// 007b7a57  7405                 je 0x7b7a5e
// 007b7a59  e8a22afbff           call 0x76a500
// 007b7a5e  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 007b7a64  85c0                 test eax, eax
// 007b7a66  740b                 je 0x7b7a73
// 007b7a68  8d8884010000         lea ecx, [eax + 0x184]
// 007b7a6e  e84dce0300           call 0x7f48c0
// 007b7a73  8bce                 mov ecx, esi
// 007b7a75  5e                   pop esi
// 007b7a76  e92578f7ff           jmp 0x72f2a0
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnRemoved@CXTPRibbonBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
