// roc 2008-06 00758b70  unit: CXTPDockingPaneAutoHidePanel  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00758b70
//
// 00758b70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00758b74  56                   push esi
// 00758b75  8bf1                 mov esi, ecx
// 00758b77  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00758b7b  50                   push eax
// 00758b7c  51                   push ecx
// 00758b7d  8bce                 mov ecx, esi
// 00758b7f  e83cf0ffff           call 0x757bc0
// 00758b84  85c0                 test eax, eax
// 00758b86  742f                 je 0x758bb7
// 00758b88  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 00758b8e  85c9                 test ecx, ecx
// 00758b90  741b                 je 0x758bad
// 00758b92  8b91f8000000         mov edx, dword ptr [ecx + 0xf8]
// 00758b98  3982a4010000         cmp dword ptr [edx + 0x1a4], eax
// 00758b9e  750d                 jne 0x758bad
// 00758ba0  8b10                 mov edx, dword ptr [eax]
// 00758ba2  8bc8                 mov ecx, eax
// 00758ba4  8b4258               mov eax, dword ptr [edx + 0x58]
// 00758ba7  ffd0                 call eax
// 00758ba9  5e                   pop esi
// 00758baa  c20c00               ret 0xc
// 00758bad  6a01                 push 1
// 00758baf  50                   push eax
// 00758bb0  8bce                 mov ecx, esi
// 00758bb2  e869feffff           call 0x758a20
// 00758bb7  5e                   pop esi
// 00758bb8  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnLButtonDown@CXTPDockingPaneAutoHidePanel@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
