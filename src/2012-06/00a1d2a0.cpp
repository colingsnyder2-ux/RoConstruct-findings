// roc 2012-06 00a1d2a0  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1d2a0
//
// 00a1d2a0  83ec10               sub esp, 0x10
// 00a1d2a3  56                   push esi
// 00a1d2a4  8bb188010000         mov esi, dword ptr [ecx + 0x188]
// 00a1d2aa  85f6                 test esi, esi
// 00a1d2ac  743f                 je 0xa1d2ed
// 00a1d2ae  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 00a1d2b4  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 00a1d2ba  57                   push edi
// 00a1d2bb  8bb9c8000000         mov edi, dword ptr [ecx + 0xc8]
// 00a1d2c1  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 00a1d2c7  6a03                 push 3
// 00a1d2c9  6a10                 push 0x10
// 00a1d2cb  6a10                 push 0x10
// 00a1d2cd  52                   push edx
// 00a1d2ce  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a1d2d2  50                   push eax
// 00a1d2d3  8b4204               mov eax, dword ptr [edx + 4]
// 00a1d2d6  6a00                 push 0
// 00a1d2d8  56                   push esi
// 00a1d2d9  6a00                 push 0
// 00a1d2db  6a00                 push 0
// 00a1d2dd  50                   push eax
// 00a1d2de  897c2438             mov dword ptr [esp + 0x38], edi
// 00a1d2e2  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00a1d2e6  ff15183db200         call dword ptr [0xb23d18]
// 00a1d2ec  5f                   pop edi
// 00a1d2ed  5e                   pop esi
// 00a1d2ee  83c410               add esp, 0x10
// 00a1d2f1  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?Draw@CControlMDISysMenuPopup@CXTPMenuBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
