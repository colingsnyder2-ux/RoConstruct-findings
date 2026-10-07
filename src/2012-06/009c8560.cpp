// roc 2012-06 009c8560  unit: CXTPDockingPaneManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c8560
//
// 009c8560  8b442408             mov eax, dword ptr [esp + 8]
// 009c8564  56                   push esi
// 009c8565  8bf1                 mov esi, ecx
// 009c8567  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009c856b  50                   push eax
// 009c856c  51                   push ecx
// 009c856d  8bce                 mov ecx, esi
// 009c856f  e88cf1ffff           call 0x9c7700
// 009c8574  8bce                 mov ecx, esi
// 009c8576  e815e3ffff           call 0x9c6890
// 009c857b  5e                   pop esi
// 009c857c  c20800               ret 8
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneManager.cpp (function ?AttachPane@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPaneBase@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneManager.cpp
