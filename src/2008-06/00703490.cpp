// roc 2008-06 00703490  unit: CXTPTabClientWnd::CWorkspace  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00703490
//
// 00703490  56                   push esi
// 00703491  8bf1                 mov esi, ecx
// 00703493  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00703497  85c9                 test ecx, ecx
// 00703499  7472                 je 0x70350d
// 0070349b  57                   push edi
// 0070349c  e8dfa0f0ff           call 0x60d580
// 007034a1  50                   push eax
// 007034a2  e837d7f9ff           call 0x6a0bde
// 007034a7  8bf8                 mov edi, eax
// 007034a9  85ff                 test edi, edi
// 007034ab  745f                 je 0x70350c
// 007034ad  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 007034b3  57                   push edi
// 007034b4  e807f4ffff           call 0x7028c0
// 007034b9  ff15102e8000         call dword ptr [0x802e10]
// 007034bf  50                   push eax
// 007034c0  e819d7f9ff           call 0x6a0bde
// 007034c5  8bf0                 mov esi, eax
// 007034c7  85f6                 test esi, esi
// 007034c9  743a                 je 0x703505
// 007034cb  837e2000             cmp dword ptr [esi + 0x20], 0
// 007034cf  7434                 je 0x703505
// 007034d1  3bf7                 cmp esi, edi
// 007034d3  7437                 je 0x70350c
// 007034d5  56                   push esi
// 007034d6  8bcf                 mov ecx, edi
// 007034d8  e833e9ffff           call 0x701e10
// 007034dd  85c0                 test eax, eax
// 007034df  752b                 jne 0x70350c
// 007034e1  8bce                 mov ecx, esi
// 007034e3  e82837fbff           call 0x6b6c10
// 007034e8  85c0                 test eax, eax
// 007034ea  7419                 je 0x703505
// 007034ec  83782000             cmp dword ptr [eax + 0x20], 0
// 007034f0  7413                 je 0x703505
// 007034f2  8bce                 mov ecx, esi
// 007034f4  e81737fbff           call 0x6b6c10
// 007034f9  50                   push eax
// 007034fa  8bcf                 mov ecx, edi
// 007034fc  e80fe9ffff           call 0x701e10
// 00703501  85c0                 test eax, eax
// 00703503  7507                 jne 0x70350c
// 00703505  8bcf                 mov ecx, edi
// 00703507  e81cd5f9ff           call 0x6a0a28
// 0070350c  5f                   pop edi
// 0070350d  5e                   pop esi
// 0070350e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnItemClick@CWorkspace@CXTPTabClientWnd@@MAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
