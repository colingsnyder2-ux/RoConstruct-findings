// roc 2007-03 0065a0e0  unit: seg_00650000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065a0e0
//
// 0065a0e0  56                   push esi
// 0065a0e1  8bf1                 mov esi, ecx
// 0065a0e3  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0065a0e9  85c9                 test ecx, ecx
// 0065a0eb  7421                 je 0x65a10e
// 0065a0ed  e88045fcff           call 0x61e672
// 0065a0f2  8b06                 mov eax, dword ptr [esi]
// 0065a0f4  8b903c010000         mov edx, dword ptr [eax + 0x13c]
// 0065a0fa  8bce                 mov ecx, esi
// 0065a0fc  ffd2                 call edx
// 0065a0fe  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0065a104  c7808000000000000000 mov dword ptr [eax + 0x80], 0
// 0065a10e  5e                   pop esi
// 0065a10f  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?DestroyAll@CXTPDockingPaneManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
