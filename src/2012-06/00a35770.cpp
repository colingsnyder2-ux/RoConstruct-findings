// roc 2012-06 00a35770  unit: CXTPDockingPaneAutoHidePanel  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a35770
//
// 00a35770  8b442408             mov eax, dword ptr [esp + 8]
// 00a35774  56                   push esi
// 00a35775  8bf1                 mov esi, ecx
// 00a35777  0fbfc8               movsx ecx, ax
// 00a3577a  c1e810               shr eax, 0x10
// 00a3577d  98                   cwde 
// 00a3577e  57                   push edi
// 00a3577f  50                   push eax
// 00a35780  51                   push ecx
// 00a35781  8bce                 mov ecx, esi
// 00a35783  e828f0ffff           call 0xa347b0
// 00a35788  8bf8                 mov edi, eax
// 00a3578a  85ff                 test edi, edi
// 00a3578c  7432                 je 0xa357c0
// 00a3578e  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a35791  50                   push eax
// 00a35792  e8e9f1f9ff           call 0x9d4980
// 00a35797  83c404               add esp, 4
// 00a3579a  85c0                 test eax, eax
// 00a3579c  7422                 je 0xa357c0
// 00a3579e  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 00a357a4  85c0                 test eax, eax
// 00a357a6  740e                 je 0xa357b6
// 00a357a8  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 00a357ae  39b9a4010000         cmp dword ptr [ecx + 0x1a4], edi
// 00a357b4  740a                 je 0xa357c0
// 00a357b6  6a00                 push 0
// 00a357b8  57                   push edi
// 00a357b9  8bce                 mov ecx, esi
// 00a357bb  e810feffff           call 0xa355d0
// 00a357c0  5f                   pop edi
// 00a357c1  b801000000           mov eax, 1
// 00a357c6  5e                   pop esi
// 00a357c7  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnMouseHover@CXTPDockingPaneAutoHidePanel@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
