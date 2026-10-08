// from server: 100% by auto
// roc 2008-06 0079aa20  unit: CXTPRibbonControlSystemButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079aa20
//
// 0079aa20  56                   push esi
// 0079aa21  8bf1                 mov esi, ecx
// 0079aa23  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0079aa29  e8e2a3f1ff           call 0x6b4e10
// 0079aa2e  8bc8                 mov ecx, eax
// 0079aa30  e81b9ff0ff           call 0x6a4950
// 0079aa35  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0079aa3b  e880cff1ff           call 0x6b79c0
// 0079aa40  8b4020               mov eax, dword ptr [eax + 0x20]
// 0079aa43  6a00                 push 0
// 0079aa45  6863f00000           push 0xf063
// 0079aa4a  6812010000           push 0x112
// 0079aa4f  50                   push eax
// 0079aa50  ff15142e8000         call dword ptr [0x802e14]
// 0079aa56  b801000000           mov eax, 1
// 0079aa5b  5e                   pop esi
// 0079aa5c  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?OnLButtonDblClk@CXTPRibbonControlSystemButton@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
