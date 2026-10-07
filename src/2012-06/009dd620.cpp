// roc 2012-06 009dd620  unit: CXTPTabClientWnd::CSingleWorkspace  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dd620
//
// 009dd620  83c8ff               or eax, 0xffffffff
// 009dd623  0bd0                 or edx, eax
// 009dd625  52                   push edx
// 009dd626  50                   push eax
// 009dd627  8b4120               mov eax, dword ptr [ecx + 0x20]
// 009dd62a  50                   push eax
// 009dd62b  83c158               add ecx, 0x58
// 009dd62e  e82df80600           call 0xa4ce60
// 009dd633  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnMouseLeave@CSingleWorkspace@CXTPTabClientWnd@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
