// roc 2009-12 008dfef0  unit: CXTPRichRender::XTextHost  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008dfef0
//
// 008dfef0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008dfef4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008dfef8  50                   push eax
// 008dfef9  ff155cde9800         call dword ptr [0x98de5c]
// 008dfeff  33c0                 xor eax, eax
// 008dff01  c21000               ret 0x10
// copied from an identical function in another client (function ?EnumResNameProc@CXTPOffice2007Images@@CGHPAUHINSTANCE__@@PBDPADJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPOffice2007Image.cpp