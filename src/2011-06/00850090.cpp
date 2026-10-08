// from server: 100% by auto
// roc 2011-06 00850090  unit: CXTPDockingPaneManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00850090
//
// 00850090  8b442408             mov eax, dword ptr [esp + 8]
// 00850094  56                   push esi
// 00850095  8bf1                 mov esi, ecx
// 00850097  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085009b  50                   push eax
// 0085009c  51                   push ecx
// 0085009d  8bce                 mov ecx, esi
// 0085009f  e88cf1ffff           call 0x84f230
// 008500a4  8bce                 mov ecx, esi
// 008500a6  e815e3ffff           call 0x84e3c0
// 008500ab  5e                   pop esi
// 008500ac  c20800               ret 8
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneManager.cpp (function ?AttachPane@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPaneBase@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneManager.cpp
