// roc 2009-12 00858cc0  unit: CXTPTabClientWnd::CTabClientDropTarget  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00858cc0
//
// 00858cc0  56                   push esi
// 00858cc1  8bf1                 mov esi, ecx
// 00858cc3  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00858cc6  85c9                 test ecx, ecx
// 00858cc8  743f                 je 0x858d09
// 00858cca  e8f1c4ffff           call 0x8551c0
// 00858ccf  83b8b000000000       cmp dword ptr [eax + 0xb0], 0
// 00858cd6  7431                 je 0x858d09
// 00858cd8  8b442418             mov eax, dword ptr [esp + 0x18]
// 00858cdc  8b542414             mov edx, dword ptr [esp + 0x14]
// 00858ce0  50                   push eax
// 00858ce1  52                   push edx
// 00858ce2  e8e9f9ffff           call 0x8586d0
// 00858ce7  85c0                 test eax, eax
// 00858ce9  741e                 je 0x858d09
// 00858ceb  8b4860               mov ecx, dword ptr [eax + 0x60]
// 00858cee  394104               cmp dword ptr [ecx + 4], eax
// 00858cf1  7416                 je 0x858d09
// 00858cf3  8bc8                 mov ecx, eax
// 00858cf5  e88677eeff           call 0x740480
// 00858cfa  50                   push eax
// 00858cfb  e82aaef9ff           call 0x7f3b2a
// 00858d00  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00858d03  50                   push eax
// 00858d04  e827d5ffff           call 0x856230
// 00858d09  33c0                 xor eax, eax
// 00858d0b  5e                   pop esi
// 00858d0c  c21400               ret 0x14
// copied from an identical function in another client (function ?OnDragOver@CTabClientDropTarget@CXTPTabClientWnd@@EAEKPAVCWnd@@PAVCOleDataObject@@KVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp