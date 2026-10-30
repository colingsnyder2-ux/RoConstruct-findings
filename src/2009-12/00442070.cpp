// roc 2009-12 00442070  unit: RBXImage  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00442070
//
// 00442070  8b442410             mov eax, dword ptr [esp + 0x10]
// 00442074  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00442078  50                   push eax
// 00442079  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044207d  6a00                 push 0
// 0044207f  6a00                 push 0
// 00442081  52                   push edx
// 00442082  8b542414             mov edx, dword ptr [esp + 0x14]
// 00442086  50                   push eax
// 00442087  52                   push edx
// 00442088  e863feffff           call 0x441ef0
// 0044208d  c21000               ret 0x10
// copied from an identical function in another client (function ?Create@CImage@ATL@@QAEHHHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-9.0 atlmfc/src/mfc/afxtoolbarimages.cpp