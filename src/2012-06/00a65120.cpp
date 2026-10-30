// roc 2012-06 00a65120  unit: CXTPRichRender::XTextHost  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a65120
//
// 00a65120  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a65124  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a65128  50                   push eax
// 00a65129  ff157847b200         call dword ptr [0xb24778]
// 00a6512f  33c0                 xor eax, eax
// 00a65131  c21000               ret 0x10
// library xtp-15.2.1-shared-mfc/Source\Common\XTPResourceImage.cpp (function ?EnumResNameProc@CXTPResourceImages@@CGHPAUHINSTANCE__@@PBDPADJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPResourceImage.cpp
