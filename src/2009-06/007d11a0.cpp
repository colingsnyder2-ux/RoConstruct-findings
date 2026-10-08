// roc 2009-06 007d11a0  unit: CXTPDockingPaneAutoHidePanel  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d11a0
//
// 007d11a0  8b442408             mov eax, dword ptr [esp + 8]
// 007d11a4  56                   push esi
// 007d11a5  8bf1                 mov esi, ecx
// 007d11a7  0fbfc8               movsx ecx, ax
// 007d11aa  c1e810               shr eax, 0x10
// 007d11ad  98                   cwde 
// 007d11ae  57                   push edi
// 007d11af  50                   push eax
// 007d11b0  51                   push ecx
// 007d11b1  8bce                 mov ecx, esi
// 007d11b3  e8e8efffff           call 0x7d01a0
// 007d11b8  8bf8                 mov edi, eax
// 007d11ba  85ff                 test edi, edi
// 007d11bc  7432                 je 0x7d11f0
// 007d11be  8b4620               mov eax, dword ptr [esi + 0x20]
// 007d11c1  50                   push eax
// 007d11c2  e8e9eaf9ff           call 0x76fcb0
// 007d11c7  83c404               add esp, 4
// 007d11ca  85c0                 test eax, eax
// 007d11cc  7422                 je 0x7d11f0
// 007d11ce  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 007d11d4  85c0                 test eax, eax
// 007d11d6  740e                 je 0x7d11e6
// 007d11d8  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 007d11de  39b9a4010000         cmp dword ptr [ecx + 0x1a4], edi
// 007d11e4  740a                 je 0x7d11f0
// 007d11e6  6a00                 push 0
// 007d11e8  57                   push edi
// 007d11e9  8bce                 mov ecx, esi
// 007d11eb  e810feffff           call 0x7d1000
// 007d11f0  5f                   pop edi
// 007d11f1  b801000000           mov eax, 1
// 007d11f6  5e                   pop esi
// 007d11f7  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnMouseHover@CXTPDockingPaneAutoHidePanel@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
