// roc 2011-06 008c00e0  unit: CXTPDockingPaneMiniWnd  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c00e0
//
// 008c00e0  56                   push esi
// 008c00e1  8bf1                 mov esi, ecx
// 008c00e3  85f6                 test esi, esi
// 008c00e5  7434                 je 0x8c011b
// 008c00e7  837e2000             cmp dword ptr [esi + 0x20], 0
// 008c00eb  742e                 je 0x8c011b
// 008c00ed  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 008c00f4  741d                 je 0x8c0113
// 008c00f6  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 008c00fc  8b5038               mov edx, dword ptr [eax + 0x38]
// 008c00ff  8d8ef8000000         lea ecx, [esi + 0xf8]
// 008c0105  6a00                 push 0
// 008c0107  c7865401000000000000 mov dword ptr [esi + 0x154], 0
// 008c0111  ffd2                 call edx
// 008c0113  8bce                 mov ecx, esi
// 008c0115  5e                   pop esi
// 008c0116  e965cc1000           jmp 0x9ccd80
// 008c011b  5e                   pop esi
// 008c011c  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnIdleUpdateCmdUI@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
