// roc 2012-06 00a1e400  unit: CXTPRibbonBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1e400
//
// 00a1e400  56                   push esi
// 00a1e401  8bf1                 mov esi, ecx
// 00a1e403  8b8e80020000         mov ecx, dword ptr [esi + 0x280]
// 00a1e409  85c9                 test ecx, ecx
// 00a1e40b  7412                 je 0xa1e41f
// 00a1e40d  8b01                 mov eax, dword ptr [ecx]
// 00a1e40f  8b10                 mov edx, dword ptr [eax]
// 00a1e411  6a01                 push 1
// 00a1e413  ffd2                 call edx
// 00a1e415  c7868002000000000000 mov dword ptr [esi + 0x280], 0
// 00a1e41f  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 00a1e425  85c9                 test ecx, ecx
// 00a1e427  7405                 je 0xa1e42e
// 00a1e429  e8620dfbff           call 0x9cf190
// 00a1e42e  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 00a1e434  85c0                 test eax, eax
// 00a1e436  740b                 je 0xa1e443
// 00a1e438  8d8884010000         lea ecx, [eax + 0x184]
// 00a1e43e  e84de40200           call 0xa4c890
// 00a1e443  8bce                 mov ecx, esi
// 00a1e445  5e                   pop esi
// 00a1e446  e96568f7ff           jmp 0x994cb0
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnRemoved@CXTPRibbonBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
