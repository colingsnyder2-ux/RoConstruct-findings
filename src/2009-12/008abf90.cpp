// roc 2009-12 008abf90  unit: CXTPDockingPaneAutoHidePanel  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008abf90
//
// 008abf90  8b442408             mov eax, dword ptr [esp + 8]
// 008abf94  56                   push esi
// 008abf95  8bf1                 mov esi, ecx
// 008abf97  0fbfc8               movsx ecx, ax
// 008abf9a  c1e810               shr eax, 0x10
// 008abf9d  98                   cwde 
// 008abf9e  57                   push edi
// 008abf9f  50                   push eax
// 008abfa0  51                   push ecx
// 008abfa1  8bce                 mov ecx, esi
// 008abfa3  e818f0ffff           call 0x8aafc0
// 008abfa8  8bf8                 mov edi, eax
// 008abfaa  85ff                 test edi, edi
// 008abfac  7432                 je 0x8abfe0
// 008abfae  8b4620               mov eax, dword ptr [esi + 0x20]
// 008abfb1  50                   push eax
// 008abfb2  e8f9eaf9ff           call 0x84aab0
// 008abfb7  83c404               add esp, 4
// 008abfba  85c0                 test eax, eax
// 008abfbc  7422                 je 0x8abfe0
// 008abfbe  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 008abfc4  85c0                 test eax, eax
// 008abfc6  740e                 je 0x8abfd6
// 008abfc8  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 008abfce  39b9a4010000         cmp dword ptr [ecx + 0x1a4], edi
// 008abfd4  740a                 je 0x8abfe0
// 008abfd6  6a00                 push 0
// 008abfd8  57                   push edi
// 008abfd9  8bce                 mov ecx, esi
// 008abfdb  e810feffff           call 0x8abdf0
// 008abfe0  5f                   pop edi
// 008abfe1  b801000000           mov eax, 1
// 008abfe6  5e                   pop esi
// 008abfe7  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnMouseHover@CXTPDockingPaneAutoHidePanel@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
