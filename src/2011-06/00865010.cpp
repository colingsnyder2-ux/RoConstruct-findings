// roc 2011-06 00865010  unit: CXTPTabClientWnd::CSingleWorkspace  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00865010
//
// 00865010  83c8ff               or eax, 0xffffffff
// 00865013  0bd0                 or edx, eax
// 00865015  52                   push edx
// 00865016  50                   push eax
// 00865017  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0086501a  50                   push eax
// 0086501b  83c158               add ecx, 0x58
// 0086501e  e8edfa0600           call 0x8d4b10
// 00865023  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMouseLeave@CSingleWorkspace@CXTPTabClientWnd@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
