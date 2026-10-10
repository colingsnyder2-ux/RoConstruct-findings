// roc 2008-06 0075db80  unit: CXTPDockingPaneAutoHidePanel  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075db80
//
// 0075db80  56                   push esi
// 0075db81  8bf1                 mov esi, ecx
// 0075db83  83bea401000000       cmp dword ptr [esi + 0x1a4], 0
// 0075db8a  741d                 je 0x75dba9
// 0075db8c  8b8ea4010000         mov ecx, dword ptr [esi + 0x1a4]
// 0075db92  8b01                 mov eax, dword ptr [ecx]
// 0075db94  8b5058               mov edx, dword ptr [eax + 0x58]
// 0075db97  ffd2                 call edx
// 0075db99  8d4e54               lea ecx, [esi + 0x54]
// 0075db9c  e8fff8ffff           call 0x75d4a0
// 0075dba1  8bc8                 mov ecx, eax
// 0075dba3  5e                   pop esi
// 0075dba4  e92777f8ff           jmp 0x6e52d0
// 0075dba9  e87a2ef4ff           call 0x6a0a28
// 0075dbae  8d4e54               lea ecx, [esi + 0x54]
// 0075dbb1  e8eaf8ffff           call 0x75d4a0
// 0075dbb6  8bc8                 mov ecx, eax
// 0075dbb8  5e                   pop esi
// 0075dbb9  e91277f8ff           jmp 0x6e52d0
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?_RestoreFocus@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
