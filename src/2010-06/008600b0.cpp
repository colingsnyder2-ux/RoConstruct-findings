// roc 2010-06 008600b0  unit: CXTPDockingPaneAutoHidePanel  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008600b0
//
// 008600b0  8b442408             mov eax, dword ptr [esp + 8]
// 008600b4  56                   push esi
// 008600b5  8bf1                 mov esi, ecx
// 008600b7  0fbfc8               movsx ecx, ax
// 008600ba  c1e810               shr eax, 0x10
// 008600bd  98                   cwde 
// 008600be  57                   push edi
// 008600bf  50                   push eax
// 008600c0  51                   push ecx
// 008600c1  8bce                 mov ecx, esi
// 008600c3  e828f0ffff           call 0x85f0f0
// 008600c8  8bf8                 mov edi, eax
// 008600ca  85ff                 test edi, edi
// 008600cc  7432                 je 0x860100
// 008600ce  8b4620               mov eax, dword ptr [esi + 0x20]
// 008600d1  50                   push eax
// 008600d2  e809eaf9ff           call 0x7feae0
// 008600d7  83c404               add esp, 4
// 008600da  85c0                 test eax, eax
// 008600dc  7422                 je 0x860100
// 008600de  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 008600e4  85c0                 test eax, eax
// 008600e6  740e                 je 0x8600f6
// 008600e8  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 008600ee  39b9a4010000         cmp dword ptr [ecx + 0x1a4], edi
// 008600f4  740a                 je 0x860100
// 008600f6  6a00                 push 0
// 008600f8  57                   push edi
// 008600f9  8bce                 mov ecx, esi
// 008600fb  e810feffff           call 0x85ff10
// 00860100  5f                   pop edi
// 00860101  b801000000           mov eax, 1
// 00860106  5e                   pop esi
// 00860107  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnMouseHover@CXTPDockingPaneAutoHidePanel@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
