// roc 2011-06 008a3e40  unit: CXTPDockBar  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a3e40
//
// 008a3e40  83ec50               sub esp, 0x50
// 008a3e43  8b01                 mov eax, dword ptr [ecx]
// 008a3e45  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 008a3e4b  8d1424               lea edx, [esp]
// 008a3e4e  52                   push edx
// 008a3e4f  8b542458             mov edx, dword ptr [esp + 0x58]
// 008a3e53  52                   push edx
// 008a3e54  681d040000           push 0x41d
// 008a3e59  c744240c50000000     mov dword ptr [esp + 0xc], 0x50
// 008a3e61  c744241051000000     mov dword ptr [esp + 0x10], 0x51
// 008a3e69  ffd0                 call eax
// 008a3e6b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a3e6f  51                   push ecx
// 008a3e70  e86f6cf6ff           call 0x80aae4
// 008a3e75  50                   push eax
// 008a3e76  e8852ef8ff           call 0x826d00
// 008a3e7b  50                   push eax
// 008a3e7c  e8bb65f6ff           call 0x80a43c
// 008a3e81  83c458               add esp, 0x58
// 008a3e84  c20400               ret 4
// copied from an identical function in another client (function ?GetToolBar@CXTPReBar@@QAEPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPReBar.cpp