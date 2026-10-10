// roc 2008-06 006e7510  unit: CXTPToolBar::CControlButtonExpand  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e7510
//
// 006e7510  56                   push esi
// 006e7511  8bf1                 mov esi, ecx
// 006e7513  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 006e751a  7515                 jne 0x6e7531
// 006e751c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e7520  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e7524  50                   push eax
// 006e7525  51                   push ecx
// 006e7526  8bce                 mov ecx, esi
// 006e7528  e8a3e10500           call 0x7456d0
// 006e752d  5e                   pop esi
// 006e752e  c20800               ret 8
// 006e7531  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 006e7537  83f8ff               cmp eax, -1
// 006e753a  750f                 jne 0x6e754b
// 006e753c  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 006e7542  85c9                 test ecx, ecx
// 006e7544  7405                 je 0x6e754b
// 006e7546  e87542fcff           call 0x6ab7c0
// 006e754b  85c0                 test eax, eax
// 006e754d  7449                 je 0x6e7598
// 006e754f  83befc00000004       cmp dword ptr [esi + 0xfc], 4
// 006e7556  7540                 jne 0x6e7598
// 006e7558  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 006e755e  83baf800000002       cmp dword ptr [edx + 0xf8], 2
// 006e7565  7531                 jne 0x6e7598
// 006e7567  8bce                 mov ecx, esi
// 006e7569  e8d23cfcff           call 0x6ab240
// 006e756e  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 006e7574  03442408             add eax, dword ptr [esp + 8]
// 006e7578  3986c8000000         cmp dword ptr [esi + 0xc8], eax
// 006e757e  7e18                 jle 0x6e7598
// 006e7580  8bce                 mov ecx, esi
// 006e7582  e8f969d6ff           call 0x44df80
// 006e7587  83f804               cmp eax, 4
// 006e758a  740c                 je 0x6e7598
// 006e758c  8b16                 mov edx, dword ptr [esi]
// 006e758e  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 006e7594  8bce                 mov ecx, esi
// 006e7596  ffd0                 call eax
// 006e7598  5e                   pop esi
// 006e7599  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlPopup.cpp (function ?OnLButtonUp@CXTPControlPopup@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopup.cpp
