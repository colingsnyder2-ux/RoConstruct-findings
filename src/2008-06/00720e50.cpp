// roc 2008-06 00720e50  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00720e50
//
// 00720e50  83ec10               sub esp, 0x10
// 00720e53  56                   push esi
// 00720e54  8bb188010000         mov esi, dword ptr [ecx + 0x188]
// 00720e5a  85f6                 test esi, esi
// 00720e5c  743f                 je 0x720e9d
// 00720e5e  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 00720e64  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 00720e6a  57                   push edi
// 00720e6b  8bb9c8000000         mov edi, dword ptr [ecx + 0xc8]
// 00720e71  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 00720e77  6a03                 push 3
// 00720e79  6a10                 push 0x10
// 00720e7b  6a10                 push 0x10
// 00720e7d  52                   push edx
// 00720e7e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00720e82  50                   push eax
// 00720e83  8b4204               mov eax, dword ptr [edx + 4]
// 00720e86  6a00                 push 0
// 00720e88  56                   push esi
// 00720e89  6a00                 push 0
// 00720e8b  6a00                 push 0
// 00720e8d  50                   push eax
// 00720e8e  897c2438             mov dword ptr [esp + 0x38], edi
// 00720e92  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00720e96  ff15782b8000         call dword ptr [0x802b78]
// 00720e9c  5f                   pop edi
// 00720e9d  5e                   pop esi
// 00720e9e  83c410               add esp, 0x10
// 00720ea1  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?Draw@CControlMDISysMenuPopup@CXTPMenuBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
