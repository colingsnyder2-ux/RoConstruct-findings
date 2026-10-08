// roc 2012-06 00a384f0  unit: CXTPDockingPaneMiniWnd  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a384f0
//
// 00a384f0  56                   push esi
// 00a384f1  8bf1                 mov esi, ecx
// 00a384f3  85f6                 test esi, esi
// 00a384f5  7434                 je 0xa3852b
// 00a384f7  837e2000             cmp dword ptr [esi + 0x20], 0
// 00a384fb  742e                 je 0xa3852b
// 00a384fd  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 00a38504  741d                 je 0xa38523
// 00a38506  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00a3850c  8b5038               mov edx, dword ptr [eax + 0x38]
// 00a3850f  8d8ef8000000         lea ecx, [esi + 0xf8]
// 00a38515  6a00                 push 0
// 00a38517  c7865401000000000000 mov dword ptr [esi + 0x154], 0
// 00a38521  ffd2                 call edx
// 00a38523  8bce                 mov ecx, esi
// 00a38525  5e                   pop esi
// 00a38526  e903180600           jmp 0xa99d2e
// 00a3852b  5e                   pop esi
// 00a3852c  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnIdleUpdateCmdUI@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
