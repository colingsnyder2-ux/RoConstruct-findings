// roc 2009-12 00841940  unit: CXTPPopupBar::CControlExpandButton  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841940
//
// 00841940  83ec08               sub esp, 8
// 00841943  56                   push esi
// 00841944  8bf1                 mov esi, ecx
// 00841946  e8f545fbff           call 0x7f5f40
// 0084194b  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00841951  8b10                 mov edx, dword ptr [eax]
// 00841953  8b92b0000000         mov edx, dword ptr [edx + 0xb0]
// 00841959  6a00                 push 0
// 0084195b  6a01                 push 1
// 0084195d  51                   push ecx
// 0084195e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00841962  56                   push esi
// 00841963  6a01                 push 1
// 00841965  51                   push ecx
// 00841966  8d4c241c             lea ecx, [esp + 0x1c]
// 0084196a  51                   push ecx
// 0084196b  8bc8                 mov ecx, eax
// 0084196d  ffd2                 call edx
// 0084196f  5e                   pop esi
// 00841970  83c408               add esp, 8
// 00841973  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlExpandButton@CXTPPopupBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp