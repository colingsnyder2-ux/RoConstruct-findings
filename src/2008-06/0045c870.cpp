// roc 2008-06 0045c870  unit: CRobloxWnd  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045c870
//
// 0045c870  8b41cc               mov eax, dword ptr [ecx - 0x34]
// 0045c873  6a00                 push 0
// 0045c875  6a00                 push 0
// 0045c877  50                   push eax
// 0045c878  ff15242d8000         call dword ptr [0x802d24]
// 0045c87e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?RedrawScrollBar@CXTPScrollBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
