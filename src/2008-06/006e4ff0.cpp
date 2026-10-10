// roc 2008-06 006e4ff0  unit: CXTPControls  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e4ff0
//
// 006e4ff0  56                   push esi
// 006e4ff1  8bf1                 mov esi, ecx
// 006e4ff3  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 006e4ff9  85c9                 test ecx, ecx
// 006e4ffb  7421                 je 0x6e501e
// 006e4ffd  e8e2bbfbff           call 0x6a0be4
// 006e5002  8b06                 mov eax, dword ptr [esi]
// 006e5004  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 006e500a  8bce                 mov ecx, esi
// 006e500c  ffd2                 call edx
// 006e500e  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 006e5014  c7808000000000000000 mov dword ptr [eax + 0x80], 0
// 006e501e  5e                   pop esi
// 006e501f  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneManager.cpp (function ?DestroyAll@CXTPDockingPaneManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp
