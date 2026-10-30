// roc 2009-06 007eb1e0  unit: CXTPControlCustom  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eb1e0
//
// 007eb1e0  83b97c01000000       cmp dword ptr [ecx + 0x17c], 0
// 007eb1e7  56                   push esi
// 007eb1e8  743a                 je 0x7eb224
// 007eb1ea  83b99001000000       cmp dword ptr [ecx + 0x190], 0
// 007eb1f1  7431                 je 0x7eb224
// 007eb1f3  8b9198010000         mov edx, dword ptr [ecx + 0x198]
// 007eb1f9  03918c010000         add edx, dword ptr [ecx + 0x18c]
// 007eb1ff  8bb194010000         mov esi, dword ptr [ecx + 0x194]
// 007eb205  03b188010000         add esi, dword ptr [ecx + 0x188]
// 007eb20b  039184010000         add edx, dword ptr [ecx + 0x184]
// 007eb211  03b180010000         add esi, dword ptr [ecx + 0x180]
// 007eb217  8b442408             mov eax, dword ptr [esp + 8]
// 007eb21b  8930                 mov dword ptr [eax], esi
// 007eb21d  895004               mov dword ptr [eax + 4], edx
// 007eb220  5e                   pop esi
// 007eb221  c20800               ret 8
// 007eb224  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007eb228  8b742408             mov esi, dword ptr [esp + 8]
// 007eb22c  50                   push eax
// 007eb22d  56                   push esi
// 007eb22e  e82d4df3ff           call 0x71ff60
// 007eb233  8bc6                 mov eax, esi
// 007eb235  5e                   pop esi
// 007eb236  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?GetSize@CXTPControlCustom@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
