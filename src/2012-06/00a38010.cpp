// from server: 100% by auto
// roc 2012-06 00a38010  unit: CXTPDockingPaneMiniWnd  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a38010
//
// 00a38010  56                   push esi
// 00a38011  8bf1                 mov esi, ecx
// 00a38013  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a38016  8d8614010000         lea eax, [esi + 0x114]
// 00a3801c  50                   push eax
// 00a3801d  51                   push ecx
// 00a3801e  ff15f83ab200         call dword ptr [0xb23af8]
// 00a38024  8bce                 mov ecx, esi
// 00a38026  5e                   pop esi
// 00a38027  e97aabf4ff           jmp 0x982ba6
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnDestroy@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
