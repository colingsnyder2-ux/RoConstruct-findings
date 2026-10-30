// roc 2009-12 0083ac00  unit: CXTPToolBar::CControlButtonExpand  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083ac00
//
// 0083ac00  56                   push esi
// 0083ac01  8bf1                 mov esi, ecx
// 0083ac03  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 0083ac0a  7515                 jne 0x83ac21
// 0083ac0c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0083ac10  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0083ac14  50                   push eax
// 0083ac15  51                   push ecx
// 0083ac16  8bce                 mov ecx, esi
// 0083ac18  e8d3550500           call 0x8901f0
// 0083ac1d  5e                   pop esi
// 0083ac1e  c20800               ret 8
// 0083ac21  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0083ac27  83f8ff               cmp eax, -1
// 0083ac2a  750f                 jne 0x83ac3b
// 0083ac2c  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0083ac32  85c9                 test ecx, ecx
// 0083ac34  7405                 je 0x83ac3b
// 0083ac36  e875b9fbff           call 0x7f65b0
// 0083ac3b  85c0                 test eax, eax
// 0083ac3d  7449                 je 0x83ac88
// 0083ac3f  83befc00000004       cmp dword ptr [esi + 0xfc], 4
// 0083ac46  7540                 jne 0x83ac88
// 0083ac48  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 0083ac4e  83baf800000002       cmp dword ptr [edx + 0xf8], 2
// 0083ac55  7531                 jne 0x83ac88
// 0083ac57  8bce                 mov ecx, esi
// 0083ac59  e8e2b2fbff           call 0x7f5f40
// 0083ac5e  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 0083ac64  03442408             add eax, dword ptr [esp + 8]
// 0083ac68  3986c8000000         cmp dword ptr [esi + 0xc8], eax
// 0083ac6e  7e18                 jle 0x83ac88
// 0083ac70  8bce                 mov ecx, esi
// 0083ac72  e8597ac1ff           call 0x4526d0
// 0083ac77  83f804               cmp eax, 4
// 0083ac7a  740c                 je 0x83ac88
// 0083ac7c  8b16                 mov edx, dword ptr [esi]
// 0083ac7e  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 0083ac84  8bce                 mov ecx, esi
// 0083ac86  ffd0                 call eax
// 0083ac88  5e                   pop esi
// 0083ac89  c20800               ret 8
// copied from an identical function in another client (function ?OnLButtonUp@CXTPControlPopup@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopup.cpp