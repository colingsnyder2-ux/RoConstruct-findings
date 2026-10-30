// roc 2009-12 00811150  unit: CXTPToolBar::CControlButtonHide  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00811150
//
// 00811150  83ec08               sub esp, 8
// 00811153  56                   push esi
// 00811154  8bf1                 mov esi, ecx
// 00811156  e8e54dfeff           call 0x7f5f40
// 0081115b  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00811161  8b10                 mov edx, dword ptr [eax]
// 00811163  8b92b0000000         mov edx, dword ptr [edx + 0xb0]
// 00811169  6a00                 push 0
// 0081116b  6a01                 push 1
// 0081116d  51                   push ecx
// 0081116e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00811172  56                   push esi
// 00811173  6a02                 push 2
// 00811175  51                   push ecx
// 00811176  8d4c241c             lea ecx, [esp + 0x1c]
// 0081117a  51                   push ecx
// 0081117b  8bc8                 mov ecx, eax
// 0081117d  ffd2                 call edx
// 0081117f  5e                   pop esi
// 00811180  83c408               add esp, 8
// 00811183  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlButtonHide@CXTPToolBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp