// roc 2008-06 006ee180  unit: CXTPPopupBar::CControlExpandButton  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee180
//
// 006ee180  83ec08               sub esp, 8
// 006ee183  56                   push esi
// 006ee184  8bf1                 mov esi, ecx
// 006ee186  e8b5d0fbff           call 0x6ab240
// 006ee18b  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006ee191  8b10                 mov edx, dword ptr [eax]
// 006ee193  8b92b0000000         mov edx, dword ptr [edx + 0xb0]
// 006ee199  6a00                 push 0
// 006ee19b  6a01                 push 1
// 006ee19d  51                   push ecx
// 006ee19e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ee1a2  56                   push esi
// 006ee1a3  6a01                 push 1
// 006ee1a5  51                   push ecx
// 006ee1a6  8d4c241c             lea ecx, [esp + 0x1c]
// 006ee1aa  51                   push ecx
// 006ee1ab  8bc8                 mov ecx, eax
// 006ee1ad  ffd2                 call edx
// 006ee1af  5e                   pop esi
// 006ee1b0  83c408               add esp, 8
// 006ee1b3  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?Draw@CControlExpandButton@CXTPPopupBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
