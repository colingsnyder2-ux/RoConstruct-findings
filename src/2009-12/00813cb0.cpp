// roc 2009-12 00813cb0  unit: CXTPToolBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00813cb0
//
// 00813cb0  8b442404             mov eax, dword ptr [esp + 4]
// 00813cb4  56                   push esi
// 00813cb5  8bf1                 mov esi, ecx
// 00813cb7  83bed400000000       cmp dword ptr [esi + 0xd4], 0
// 00813cbe  750d                 jne 0x813ccd
// 00813cc0  85c0                 test eax, eax
// 00813cc2  7409                 je 0x813ccd
// 00813cc4  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00813cc7  898ed4000000         mov dword ptr [esi + 0xd4], ecx
// 00813ccd  50                   push eax
// 00813cce  8bce                 mov ecx, esi
// 00813cd0  e8b909feff           call 0x7f468e
// 00813cd5  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 00813cdc  7512                 jne 0x813cf0
// 00813cde  8b16                 mov edx, dword ptr [esi]
// 00813ce0  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00813ce6  6a00                 push 0
// 00813ce8  6a01                 push 1
// 00813cea  6a01                 push 1
// 00813cec  8bce                 mov ecx, esi
// 00813cee  ffd0                 call eax
// 00813cf0  5e                   pop esi
// 00813cf1  c20400               ret 4
// copied from an identical function in another client (function ?OnSetFocus@CXTPToolBar@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp