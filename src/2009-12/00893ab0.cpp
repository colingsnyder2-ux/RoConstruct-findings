// roc 2009-12 00893ab0  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00893ab0
//
// 00893ab0  83ec10               sub esp, 0x10
// 00893ab3  56                   push esi
// 00893ab4  8bb188010000         mov esi, dword ptr [ecx + 0x188]
// 00893aba  85f6                 test esi, esi
// 00893abc  743f                 je 0x893afd
// 00893abe  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 00893ac4  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 00893aca  57                   push edi
// 00893acb  8bb9c8000000         mov edi, dword ptr [ecx + 0xc8]
// 00893ad1  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 00893ad7  6a03                 push 3
// 00893ad9  6a10                 push 0x10
// 00893adb  6a10                 push 0x10
// 00893add  52                   push edx
// 00893ade  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00893ae2  50                   push eax
// 00893ae3  8b4204               mov eax, dword ptr [edx + 4]
// 00893ae6  6a00                 push 0
// 00893ae8  56                   push esi
// 00893ae9  6a00                 push 0
// 00893aeb  6a00                 push 0
// 00893aed  50                   push eax
// 00893aee  897c2438             mov dword ptr [esp + 0x38], edi
// 00893af2  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00893af6  ff15f8ca9800         call dword ptr [0x98caf8]
// 00893afc  5f                   pop edi
// 00893afd  5e                   pop esi
// 00893afe  83c410               add esp, 0x10
// 00893b01  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?Draw@CControlMDISysMenuPopup@CXTPMenuBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
