// roc 2008-06 006c1d50  unit: CXTPToolBar::CControlButtonExpand  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c1d50
//
// 006c1d50  83ec08               sub esp, 8
// 006c1d53  53                   push ebx
// 006c1d54  56                   push esi
// 006c1d55  57                   push edi
// 006c1d56  8bf1                 mov esi, ecx
// 006c1d58  e8e394feff           call 0x6ab240
// 006c1d5d  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006c1d63  8b10                 mov edx, dword ptr [eax]
// 006c1d65  8b92b0000000         mov edx, dword ptr [edx + 0xb0]
// 006c1d6b  33db                 xor ebx, ebx
// 006c1d6d  83b90001000004       cmp dword ptr [ecx + 0x100], 4
// 006c1d74  8dbe84010000         lea edi, [esi + 0x184]
// 006c1d7a  57                   push edi
// 006c1d7b  0f95c3               setne bl
// 006c1d7e  6a01                 push 1
// 006c1d80  51                   push ecx
// 006c1d81  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006c1d85  56                   push esi
// 006c1d86  4b                   dec ebx
// 006c1d87  83e303               and ebx, 3
// 006c1d8a  53                   push ebx
// 006c1d8b  51                   push ecx
// 006c1d8c  8d4c2424             lea ecx, [esp + 0x24]
// 006c1d90  51                   push ecx
// 006c1d91  8bc8                 mov ecx, eax
// 006c1d93  ffd2                 call edx
// 006c1d95  5f                   pop edi
// 006c1d96  5e                   pop esi
// 006c1d97  5b                   pop ebx
// 006c1d98  83c408               add esp, 8
// 006c1d9b  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?Draw@CControlButtonExpand@CXTPToolBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
