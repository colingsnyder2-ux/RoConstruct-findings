// from server: 100% by tester
// roc 2008-06 0078cd60  unit: CXTPRichRender::XTextHost  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078cd60
//
// 0078cd60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0078cd64  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0078cd68  50                   push eax
// 0078cd69  ff15b83e8000         call dword ptr [0x803eb8]
// 0078cd6f  33c0                 xor eax, eax
// 0078cd71  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\Common\XTPOffice2007Image.cpp (function ?EnumResNameProc@CXTPOffice2007Images@@CGHPAUHINSTANCE__@@PBDPADJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPOffice2007Image.cpp
