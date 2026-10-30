// roc 2009-12 00811380  unit: CXTPToolBar::CControlButtonExpand  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00811380
//
// 00811380  83ec08               sub esp, 8
// 00811383  53                   push ebx
// 00811384  56                   push esi
// 00811385  57                   push edi
// 00811386  8bf1                 mov esi, ecx
// 00811388  e8b34bfeff           call 0x7f5f40
// 0081138d  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00811393  8b10                 mov edx, dword ptr [eax]
// 00811395  8b92b0000000         mov edx, dword ptr [edx + 0xb0]
// 0081139b  33db                 xor ebx, ebx
// 0081139d  83b90001000004       cmp dword ptr [ecx + 0x100], 4
// 008113a4  8dbe84010000         lea edi, [esi + 0x184]
// 008113aa  57                   push edi
// 008113ab  0f95c3               setne bl
// 008113ae  6a01                 push 1
// 008113b0  51                   push ecx
// 008113b1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008113b5  56                   push esi
// 008113b6  4b                   dec ebx
// 008113b7  83e303               and ebx, 3
// 008113ba  53                   push ebx
// 008113bb  51                   push ecx
// 008113bc  8d4c2424             lea ecx, [esp + 0x24]
// 008113c0  51                   push ecx
// 008113c1  8bc8                 mov ecx, eax
// 008113c3  ffd2                 call edx
// 008113c5  5f                   pop edi
// 008113c6  5e                   pop esi
// 008113c7  5b                   pop ebx
// 008113c8  83c408               add esp, 8
// 008113cb  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlButtonExpand@CXTPToolBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp