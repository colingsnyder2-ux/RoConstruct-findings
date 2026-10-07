// roc 2007-08 006ca6c0  unit: CXTPToolBar::CControlButtonHide  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ca6c0
//
// 006ca6c0  8b442404             mov eax, dword ptr [esp + 4]
// 006ca6c4  56                   push esi
// 006ca6c5  8bf1                 mov esi, ecx
// 006ca6c7  57                   push edi
// 006ca6c8  8d4e18               lea ecx, [esi + 0x18]
// 006ca6cb  33ff                 xor edi, edi
// 006ca6cd  51                   push ecx
// 006ca6ce  c706607a7d00         mov dword ptr [esi], 0x7d7a60
// 006ca6d4  894604               mov dword ptr [esi + 4], eax
// 006ca6d7  897e14               mov dword ptr [esi + 0x14], edi
// 006ca6da  ff1514ee7700         call dword ptr [0x77ee14]
// 006ca6e0  897e28               mov dword ptr [esi + 0x28], edi
// 006ca6e3  897e2c               mov dword ptr [esi + 0x2c], edi
// 006ca6e6  897e08               mov dword ptr [esi + 8], edi
// 006ca6e9  5f                   pop edi
// 006ca6ea  8bc6                 mov eax, esi
// 006ca6ec  5e                   pop esi
// 006ca6ed  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockContext.cpp (function ??0CXTPDockContext@@QAE@PAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockContext.cpp
