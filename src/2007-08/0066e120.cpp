// roc 2007-08 0066e120  unit: CXTPControls  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e120
//
// 0066e120  56                   push esi
// 0066e121  8bf1                 mov esi, ecx
// 0066e123  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0066e129  85c9                 test ecx, ecx
// 0066e12b  7421                 je 0x66e14e
// 0066e12d  e8b220fcff           call 0x6301e4
// 0066e132  8b06                 mov eax, dword ptr [esi]
// 0066e134  8b903c010000         mov edx, dword ptr [eax + 0x13c]
// 0066e13a  8bce                 mov ecx, esi
// 0066e13c  ffd2                 call edx
// 0066e13e  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0066e144  c7808000000000000000 mov dword ptr [eax + 0x80], 0
// 0066e14e  5e                   pop esi
// 0066e14f  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?DestroyAll@CXTPDockingPaneManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
