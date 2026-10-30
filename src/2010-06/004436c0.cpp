// roc 2010-06 004436c0  unit: RBXImage  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004436c0
//
// 004436c0  8b442410             mov eax, dword ptr [esp + 0x10]
// 004436c4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004436c8  50                   push eax
// 004436c9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004436cd  6a00                 push 0
// 004436cf  6a00                 push 0
// 004436d1  52                   push edx
// 004436d2  8b542414             mov edx, dword ptr [esp + 0x14]
// 004436d6  50                   push eax
// 004436d7  52                   push edx
// 004436d8  e863feffff           call 0x443540
// 004436dd  c21000               ret 0x10
// copied from an identical function in another client (function ?Create@CImage@ATL@@QAEHHHHK@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-9.0 atlmfc/src/mfc/afxtoolbarimages.cpp