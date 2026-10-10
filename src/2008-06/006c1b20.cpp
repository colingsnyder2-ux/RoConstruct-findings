// roc 2008-06 006c1b20  unit: CXTPToolBar::CControlButtonHide  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c1b20
//
// 006c1b20  83ec08               sub esp, 8
// 006c1b23  56                   push esi
// 006c1b24  8bf1                 mov esi, ecx
// 006c1b26  e81597feff           call 0x6ab240
// 006c1b2b  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006c1b31  8b10                 mov edx, dword ptr [eax]
// 006c1b33  8b92b0000000         mov edx, dword ptr [edx + 0xb0]
// 006c1b39  6a00                 push 0
// 006c1b3b  6a01                 push 1
// 006c1b3d  51                   push ecx
// 006c1b3e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006c1b42  56                   push esi
// 006c1b43  6a02                 push 2
// 006c1b45  51                   push ecx
// 006c1b46  8d4c241c             lea ecx, [esp + 0x1c]
// 006c1b4a  51                   push ecx
// 006c1b4b  8bc8                 mov ecx, eax
// 006c1b4d  ffd2                 call edx
// 006c1b4f  5e                   pop esi
// 006c1b50  83c408               add esp, 8
// 006c1b53  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?Draw@CControlButtonHide@CXTPToolBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
