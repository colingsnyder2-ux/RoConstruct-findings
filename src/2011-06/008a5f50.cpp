// roc 2011-06 008a5f50  unit: CXTPRibbonBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a5f50
//
// 008a5f50  56                   push esi
// 008a5f51  8bf1                 mov esi, ecx
// 008a5f53  8b8e80020000         mov ecx, dword ptr [esi + 0x280]
// 008a5f59  85c9                 test ecx, ecx
// 008a5f5b  7412                 je 0x8a5f6f
// 008a5f5d  8b01                 mov eax, dword ptr [ecx]
// 008a5f5f  8b10                 mov edx, dword ptr [eax]
// 008a5f61  6a01                 push 1
// 008a5f63  ffd2                 call edx
// 008a5f65  c7868002000000000000 mov dword ptr [esi + 0x280], 0
// 008a5f6f  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 008a5f75  85c9                 test ecx, ecx
// 008a5f77  7405                 je 0x8a5f7e
// 008a5f79  e8420dfbff           call 0x856cc0
// 008a5f7e  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 008a5f84  85c0                 test eax, eax
// 008a5f86  740b                 je 0x8a5f93
// 008a5f88  8d8884010000         lea ecx, [eax + 0x184]
// 008a5f8e  e8ade50200           call 0x8d4540
// 008a5f93  8bce                 mov ecx, esi
// 008a5f95  5e                   pop esi
// 008a5f96  e9456af7ff           jmp 0x81c9e0
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnRemoved@CXTPRibbonBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
