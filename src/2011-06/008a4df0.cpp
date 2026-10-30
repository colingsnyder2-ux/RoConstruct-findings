// roc 2011-06 008a4df0  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a4df0
//
// 008a4df0  83ec10               sub esp, 0x10
// 008a4df3  56                   push esi
// 008a4df4  8bb188010000         mov esi, dword ptr [ecx + 0x188]
// 008a4dfa  85f6                 test esi, esi
// 008a4dfc  743f                 je 0x8a4e3d
// 008a4dfe  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 008a4e04  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 008a4e0a  57                   push edi
// 008a4e0b  8bb9c8000000         mov edi, dword ptr [ecx + 0xc8]
// 008a4e11  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 008a4e17  6a03                 push 3
// 008a4e19  6a10                 push 0x10
// 008a4e1b  6a10                 push 0x10
// 008a4e1d  52                   push edx
// 008a4e1e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008a4e22  50                   push eax
// 008a4e23  8b4204               mov eax, dword ptr [edx + 4]
// 008a4e26  6a00                 push 0
// 008a4e28  56                   push esi
// 008a4e29  6a00                 push 0
// 008a4e2b  6a00                 push 0
// 008a4e2d  50                   push eax
// 008a4e2e  897c2438             mov dword ptr [esp + 0x38], edi
// 008a4e32  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008a4e36  ff15e41aa400         call dword ptr [0xa41ae4]
// 008a4e3c  5f                   pop edi
// 008a4e3d  5e                   pop esi
// 008a4e3e  83c410               add esp, 0x10
// 008a4e41  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?Draw@CControlMDISysMenuPopup@CXTPMenuBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
