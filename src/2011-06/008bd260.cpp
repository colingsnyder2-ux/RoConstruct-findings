// roc 2011-06 008bd260  unit: CXTPDockingPaneAutoHidePanel  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bd260
//
// 008bd260  8b442408             mov eax, dword ptr [esp + 8]
// 008bd264  56                   push esi
// 008bd265  8bf1                 mov esi, ecx
// 008bd267  0fbfc8               movsx ecx, ax
// 008bd26a  c1e810               shr eax, 0x10
// 008bd26d  98                   cwde 
// 008bd26e  57                   push edi
// 008bd26f  50                   push eax
// 008bd270  51                   push ecx
// 008bd271  8bce                 mov ecx, esi
// 008bd273  e838f0ffff           call 0x8bc2b0
// 008bd278  8bf8                 mov edi, eax
// 008bd27a  85ff                 test edi, edi
// 008bd27c  7432                 je 0x8bd2b0
// 008bd27e  8b4620               mov eax, dword ptr [esi + 0x20]
// 008bd281  50                   push eax
// 008bd282  e8d9f2f9ff           call 0x85c560
// 008bd287  83c404               add esp, 4
// 008bd28a  85c0                 test eax, eax
// 008bd28c  7422                 je 0x8bd2b0
// 008bd28e  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 008bd294  85c0                 test eax, eax
// 008bd296  740e                 je 0x8bd2a6
// 008bd298  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 008bd29e  39b9a4010000         cmp dword ptr [ecx + 0x1a4], edi
// 008bd2a4  740a                 je 0x8bd2b0
// 008bd2a6  6a00                 push 0
// 008bd2a8  57                   push edi
// 008bd2a9  8bce                 mov ecx, esi
// 008bd2ab  e810feffff           call 0x8bd0c0
// 008bd2b0  5f                   pop edi
// 008bd2b1  b801000000           mov eax, 1
// 008bd2b6  5e                   pop esi
// 008bd2b7  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnMouseHover@CXTPDockingPaneAutoHidePanel@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
