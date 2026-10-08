// roc 2009-06 007d4080  unit: CXTPDockingPaneMiniWnd  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d4080
//
// 007d4080  56                   push esi
// 007d4081  8bf1                 mov esi, ecx
// 007d4083  85f6                 test esi, esi
// 007d4085  7434                 je 0x7d40bb
// 007d4087  837e2000             cmp dword ptr [esi + 0x20], 0
// 007d408b  742e                 je 0x7d40bb
// 007d408d  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 007d4094  741d                 je 0x7d40b3
// 007d4096  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 007d409c  8b5038               mov edx, dword ptr [eax + 0x38]
// 007d409f  8d8ef8000000         lea ecx, [esi + 0xf8]
// 007d40a5  6a00                 push 0
// 007d40a7  c7865401000000000000 mov dword ptr [esi + 0x154], 0
// 007d40b1  ffd2                 call edx
// 007d40b3  8bce                 mov ecx, esi
// 007d40b5  5e                   pop esi
// 007d40b6  e9d3860700           jmp 0x84c78e
// 007d40bb  5e                   pop esi
// 007d40bc  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnIdleUpdateCmdUI@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
