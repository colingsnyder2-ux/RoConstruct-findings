// roc 2010-06 00847cb0  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00847cb0
//
// 00847cb0  83ec10               sub esp, 0x10
// 00847cb3  56                   push esi
// 00847cb4  8bb188010000         mov esi, dword ptr [ecx + 0x188]
// 00847cba  85f6                 test esi, esi
// 00847cbc  743f                 je 0x847cfd
// 00847cbe  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 00847cc4  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 00847cca  57                   push edi
// 00847ccb  8bb9c8000000         mov edi, dword ptr [ecx + 0xc8]
// 00847cd1  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 00847cd7  6a03                 push 3
// 00847cd9  6a10                 push 0x10
// 00847cdb  6a10                 push 0x10
// 00847cdd  52                   push edx
// 00847cde  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00847ce2  50                   push eax
// 00847ce3  8b4204               mov eax, dword ptr [edx + 4]
// 00847ce6  6a00                 push 0
// 00847ce8  56                   push esi
// 00847ce9  6a00                 push 0
// 00847ceb  6a00                 push 0
// 00847ced  50                   push eax
// 00847cee  897c2438             mov dword ptr [esp + 0x38], edi
// 00847cf2  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00847cf6  ff15a8ba9e00         call dword ptr [0x9ebaa8]
// 00847cfc  5f                   pop edi
// 00847cfd  5e                   pop esi
// 00847cfe  83c410               add esp, 0x10
// 00847d01  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?Draw@CControlMDISysMenuPopup@CXTPMenuBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
