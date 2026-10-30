// roc 2009-06 0043db90  unit: RBXImage  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043db90
//
// 0043db90  8b442410             mov eax, dword ptr [esp + 0x10]
// 0043db94  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0043db98  50                   push eax
// 0043db99  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0043db9d  6a00                 push 0
// 0043db9f  6a00                 push 0
// 0043dba1  52                   push edx
// 0043dba2  8b542414             mov edx, dword ptr [esp + 0x14]
// 0043dba6  50                   push eax
// 0043dba7  52                   push edx
// 0043dba8  e863feffff           call 0x43da10
// 0043dbad  c21000               ret 0x10
// copied from an identical function in another client (function ?Create@CImage@ATL@@QAEHHHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-9.0 atlmfc/src/mfc/afxtoolbarimages.cpp