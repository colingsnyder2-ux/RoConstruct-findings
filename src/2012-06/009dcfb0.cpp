// roc 2012-06 009dcfb0  unit: CXTPControlTabWorkspace  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dcfb0
//
// 009dcfb0  8b442404             mov eax, dword ptr [esp + 4]
// 009dcfb4  85c0                 test eax, eax
// 009dcfb6  750e                 jne 0x9dcfc6
// 009dcfb8  50                   push eax
// 009dcfb9  8b4120               mov eax, dword ptr [ecx + 0x20]
// 009dcfbc  50                   push eax
// 009dcfbd  ff15143db200         call dword ptr [0xb23d14]
// 009dcfc3  c20400               ret 4
// 009dcfc6  8b4020               mov eax, dword ptr [eax + 0x20]
// 009dcfc9  50                   push eax
// 009dcfca  8b4120               mov eax, dword ptr [ecx + 0x20]
// 009dcfcd  50                   push eax
// 009dcfce  ff15143db200         call dword ptr [0xb23d14]
// 009dcfd4  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPDialogBar.cpp (function ?IsChild@CWnd@@QBEHPBV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDialogBar.cpp
