// roc 2009-12 00838640  unit: CXTPControls  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838640
//
// 00838640  56                   push esi
// 00838641  8bf1                 mov esi, ecx
// 00838643  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00838649  85c9                 test ecx, ecx
// 0083864b  7421                 je 0x83866e
// 0083864d  e88ab7fbff           call 0x7f3ddc
// 00838652  8b06                 mov eax, dword ptr [esi]
// 00838654  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 0083865a  8bce                 mov ecx, esi
// 0083865c  ffd2                 call edx
// 0083865e  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 00838664  c7808000000000000000 mov dword ptr [eax + 0x80], 0
// 0083866e  5e                   pop esi
// 0083866f  c3                   ret 
// copied from an identical function in another client (function ?DestroyAll@CXTPDockingPaneManager@@QAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp