// roc 2009-06 007b40d0  unit: CXTPDockBar  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b40d0
//
// 007b40d0  83ec50               sub esp, 0x50
// 007b40d3  8b01                 mov eax, dword ptr [ecx]
// 007b40d5  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 007b40db  8d1424               lea edx, [esp]
// 007b40de  52                   push edx
// 007b40df  8b542458             mov edx, dword ptr [esp + 0x58]
// 007b40e3  52                   push edx
// 007b40e4  681d040000           push 0x41d
// 007b40e9  c744240c50000000     mov dword ptr [esp + 0xc], 0x50
// 007b40f1  c744241051000000     mov dword ptr [esp + 0x10], 0x51
// 007b40f9  ffd0                 call eax
// 007b40fb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007b40ff  51                   push ecx
// 007b4100  e8ad53f6ff           call 0x7194b2
// 007b4105  50                   push eax
// 007b4106  e8455ff8ff           call 0x73a050
// 007b410b  50                   push eax
// 007b410c  e8b54ef6ff           call 0x718fc6
// 007b4111  83c458               add esp, 0x58
// 007b4114  c20400               ret 4
// copied from an identical function in another client (function ?GetToolBar@CXTPReBar@@QAEPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPReBar.cpp