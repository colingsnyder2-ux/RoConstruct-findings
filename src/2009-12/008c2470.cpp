// roc 2009-12 008c2470  unit: CXTPImageEditorDlg::CDlgToolBar  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c2470
//
// 008c2470  6aff                 push -1
// 008c2472  6808989500           push 0x959808
// 008c2477  64a100000000         mov eax, dword ptr fs:[0]
// 008c247d  50                   push eax
// 008c247e  83ec08               sub esp, 8
// 008c2481  56                   push esi
// 008c2482  57                   push edi
// 008c2483  a10052b600           mov eax, dword ptr [0xb65200]
// 008c2488  33c4                 xor eax, esp
// 008c248a  50                   push eax
// 008c248b  8d442414             lea eax, [esp + 0x14]
// 008c248f  64a300000000         mov dword ptr fs:[0], eax
// 008c2495  8bf1                 mov esi, ecx
// 008c2497  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008c249b  85ff                 test edi, edi
// 008c249d  0f84db000000         je 0x8c257e
// 008c24a3  8b8698090000         mov eax, dword ptr [esi + 0x998]
// 008c24a9  85c0                 test eax, eax
// 008c24ab  0f84cd000000         je 0x8c257e
// 008c24b1  83780800             cmp dword ptr [eax + 8], 0
// 008c24b5  741f                 je 0x8c24d6
// 008c24b7  8b4004               mov eax, dword ptr [eax + 4]
// 008c24ba  50                   push eax
// 008c24bb  8bcf                 mov ecx, edi
// 008c24bd  e84ea8f4ff           call 0x80cd10
// 008c24c2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c24c6  64890d00000000       mov dword ptr fs:[0], ecx
// 008c24cd  59                   pop ecx
// 008c24ce  5f                   pop edi
// 008c24cf  5e                   pop esi
// 008c24d0  83c414               add esp, 0x14
// 008c24d3  c20400               ret 4
// 008c24d6  8d4c240c             lea ecx, [esp + 0xc]
// 008c24da  e8311bf3ff           call 0x7f4010
// 008c24df  8b86640a0000         mov eax, dword ptr [esi + 0xa64]
// 008c24e5  8b8e600a0000         mov ecx, dword ptr [esi + 0xa60]
// 008c24eb  6a01                 push 1
// 008c24ed  6a00                 push 0
// 008c24ef  6a19                 push 0x19
// 008c24f1  50                   push eax
// 008c24f2  51                   push ecx
// 008c24f3  8d4c2420             lea ecx, [esp + 0x20]
// 008c24f7  c744243000000000     mov dword ptr [esp + 0x30], 0
// 008c24ff  e8061bf3ff           call 0x7f400a
// 008c2504  8bb698090000         mov esi, dword ptr [esi + 0x998]
// 008c250a  85f6                 test esi, esi
// 008c250c  7403                 je 0x8c2511
// 008c250e  8b7604               mov esi, dword ptr [esi + 4]
// 008c2511  8b542410             mov edx, dword ptr [esp + 0x10]
// 008c2515  68fffeff00           push 0xfffeff
// 008c251a  56                   push esi
// 008c251b  52                   push edx
// 008c251c  e8fd15f3ff           call 0x7f3b1e
// 008c2521  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 008c2527  8b08                 mov ecx, dword ptr [eax]
// 008c2529  e8f20bb5ff           call 0x413120
// 008c252e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c2532  51                   push ecx
// 008c2533  e8e615f3ff           call 0x7f3b1e
// 008c2538  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008c253e  8b0a                 mov ecx, dword ptr [edx]
// 008c2540  e85b0cb9ff           call 0x4531a0
// 008c2545  83f801               cmp eax, 1
// 008c2548  7523                 jne 0x8c256d
// 008c254a  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c254e  6a00                 push 0
// 008c2550  6a00                 push 0
// 008c2552  50                   push eax
// 008c2553  e8c615f3ff           call 0x7f3b1e
// 008c2558  8b8894000000         mov ecx, dword ptr [eax + 0x94]
// 008c255e  8b09                 mov ecx, dword ptr [ecx]
// 008c2560  e89b74f4ff           call 0x809a00
// 008c2565  50                   push eax
// 008c2566  8bcf                 mov ecx, edi
// 008c2568  e8f3a7f4ff           call 0x80cd60
// 008c256d  8d4c240c             lea ecx, [esp + 0xc]
// 008c2571  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 008c2579  e8741af3ff           call 0x7f3ff2
// 008c257e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c2582  64890d00000000       mov dword ptr fs:[0], ecx
// 008c2589  59                   pop ecx
// 008c258a  5f                   pop edi
// 008c258b  5e                   pop esi
// 008c258c  83c414               add esp, 0x14
// 008c258f  c20400               ret 4
// copied from an identical function in another client (function ?GetIcon@CXTPImageEditorDlg@@QAEXPAVCXTPImageManagerIconHandle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPImageEditor.cpp