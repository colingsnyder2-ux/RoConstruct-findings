// roc 2008-06 007024a0  unit: CXTPTabClientWnd::CSingleWorkspace  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007024a0
//
// 007024a0  83c8ff               or eax, 0xffffffff
// 007024a3  0bd0                 or edx, eax
// 007024a5  52                   push edx
// 007024a6  50                   push eax
// 007024a7  8b4120               mov eax, dword ptr [ecx + 0x20]
// 007024aa  50                   push eax
// 007024ab  83c158               add ecx, 0x58
// 007024ae  e81da30700           call 0x77c7d0
// 007024b3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMouseLeave@CSingleWorkspace@CXTPTabClientWnd@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
