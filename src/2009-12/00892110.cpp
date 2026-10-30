// roc 2009-12 00892110  unit: CXTPDockBar  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00892110
//
// 00892110  6aff                 push -1
// 00892112  6838139600           push 0x961338
// 00892117  64a100000000         mov eax, dword ptr fs:[0]
// 0089211d  50                   push eax
// 0089211e  83ec1c               sub esp, 0x1c
// 00892121  53                   push ebx
// 00892122  55                   push ebp
// 00892123  56                   push esi
// 00892124  57                   push edi
// 00892125  a10052b600           mov eax, dword ptr [0xb65200]
// 0089212a  33c4                 xor eax, esp
// 0089212c  50                   push eax
// 0089212d  8d442430             lea eax, [esp + 0x30]
// 00892131  64a300000000         mov dword ptr fs:[0], eax
// 00892137  894c2418             mov dword ptr [esp + 0x18], ecx
// 0089213b  33f6                 xor esi, esi
// 0089213d  8d4c241c             lea ecx, [esp + 0x1c]
// 00892141  89742414             mov dword ptr [esp + 0x14], esi
// 00892145  e8d625f8ff           call 0x814720
// 0089214a  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 0089214e  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00892152  89742438             mov dword ptr [esp + 0x38], esi
// 00892156  8b742440             mov esi, dword ptr [esp + 0x40]
// 0089215a  8d9b00000000         lea ebx, [ebx]
// 00892160  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00892164  8b542448             mov edx, dword ptr [esp + 0x48]
// 00892168  8d442454             lea eax, [esp + 0x54]
// 0089216c  50                   push eax
// 0089216d  8b442448             mov eax, dword ptr [esp + 0x48]
// 00892171  55                   push ebp
// 00892172  53                   push ebx
// 00892173  51                   push ecx
// 00892174  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00892178  52                   push edx
// 00892179  50                   push eax
// 0089217a  83cfff               or edi, 0xffffffff
// 0089217d  56                   push esi
// 0089217e  897c2470             mov dword ptr [esp + 0x70], edi
// 00892182  e8e9f7ffff           call 0x891970
// 00892187  3bc7                 cmp eax, edi
// 00892189  752e                 jne 0x8921b9
// 0089218b  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0089218f  85ff                 test edi, edi
// 00892191  7c5c                 jl 0x8921ef
// 00892193  3b7e08               cmp edi, dword ptr [esi + 8]
// 00892196  7d57                 jge 0x8921ef
// 00892198  8b4e04               mov ecx, dword ptr [esi + 4]
// 0089219b  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 0089219e  8b442424             mov eax, dword ptr [esp + 0x24]
// 008921a2  52                   push edx
// 008921a3  50                   push eax
// 008921a4  8d4c2424             lea ecx, [esp + 0x24]
// 008921a8  e8c38afdff           call 0x86ac70
// 008921ad  6a01                 push 1
// 008921af  57                   push edi
// 008921b0  8bce                 mov ecx, esi
// 008921b2  e8c9b0f9ff           call 0x82d280
// 008921b7  eba7                 jmp 0x892160
// 008921b9  01442414             add dword ptr [esp + 0x14], eax
// 008921bd  85db                 test ebx, ebx
// 008921bf  7406                 je 0x8921c7
// 008921c1  01442448             add dword ptr [esp + 0x48], eax
// 008921c5  eb04                 jmp 0x8921cb
// 008921c7  01442444             add dword ptr [esp + 0x44], eax
// 008921cb  837c242400           cmp dword ptr [esp + 0x24], 0
// 008921d0  8d4c241c             lea ecx, [esp + 0x1c]
// 008921d4  7e1e                 jle 0x8921f4
// 008921d6  51                   push ecx
// 008921d7  8bce                 mov ecx, esi
// 008921d9  e8820e0100           call 0x8a3060
// 008921de  57                   push edi
// 008921df  6a00                 push 0
// 008921e1  8d4c2424             lea ecx, [esp + 0x24]
// 008921e5  e8b631fcff           call 0x8553a0
// 008921ea  e971ffffff           jmp 0x892160
// 008921ef  e81819f6ff           call 0x7f3b0c
// 008921f4  897c2438             mov dword ptr [esp + 0x38], edi
// 008921f8  e84325f8ff           call 0x814740
// 008921fd  8b442414             mov eax, dword ptr [esp + 0x14]
// 00892201  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00892205  64890d00000000       mov dword ptr fs:[0], ecx
// 0089220c  59                   pop ecx
// 0089220d  5f                   pop edi
// 0089220e  5e                   pop esi
// 0089220f  5d                   pop ebp
// 00892210  5b                   pop ebx
// 00892211  83c428               add esp, 0x28
// 00892214  c21800               ret 0x18
// copied from an identical function in another client (function ?AdjustRow@CXTPDockBar@@IAEHAAV?$CArray@PAVCXTPToolBar@@PAV1@@@VCPoint@@HHPAUAFX_SIZEPARENTPARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp