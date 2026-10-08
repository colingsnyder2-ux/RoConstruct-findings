// roc 2009-06 007b68d0  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b68d0
//
// 007b68d0  83ec10               sub esp, 0x10
// 007b68d3  56                   push esi
// 007b68d4  8bb188010000         mov esi, dword ptr [ecx + 0x188]
// 007b68da  85f6                 test esi, esi
// 007b68dc  743f                 je 0x7b691d
// 007b68de  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 007b68e4  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 007b68ea  57                   push edi
// 007b68eb  8bb9c8000000         mov edi, dword ptr [ecx + 0xc8]
// 007b68f1  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 007b68f7  6a03                 push 3
// 007b68f9  6a10                 push 0x10
// 007b68fb  6a10                 push 0x10
// 007b68fd  52                   push edx
// 007b68fe  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007b6902  50                   push eax
// 007b6903  8b4204               mov eax, dword ptr [edx + 4]
// 007b6906  6a00                 push 0
// 007b6908  56                   push esi
// 007b6909  6a00                 push 0
// 007b690b  6a00                 push 0
// 007b690d  50                   push eax
// 007b690e  897c2438             mov dword ptr [esp + 0x38], edi
// 007b6912  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007b6916  ff150cef8900         call dword ptr [0x89ef0c]
// 007b691c  5f                   pop edi
// 007b691d  5e                   pop esi
// 007b691e  83c410               add esp, 0x10
// 007b6921  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?Draw@CControlMDISysMenuPopup@CXTPMenuBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
