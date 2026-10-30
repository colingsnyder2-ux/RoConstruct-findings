// roc 2010-06 00846c90  unit: CXTPDockBar  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00846c90
//
// 00846c90  83ec50               sub esp, 0x50
// 00846c93  8b01                 mov eax, dword ptr [ecx]
// 00846c95  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 00846c9b  8d1424               lea edx, [esp]
// 00846c9e  52                   push edx
// 00846c9f  8b542458             mov edx, dword ptr [esp + 0x58]
// 00846ca3  52                   push edx
// 00846ca4  681d040000           push 0x41d
// 00846ca9  c744240c50000000     mov dword ptr [esp + 0xc], 0x50
// 00846cb1  c744241051000000     mov dword ptr [esp + 0x10], 0x51
// 00846cb9  ffd0                 call eax
// 00846cbb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00846cbf  51                   push ecx
// 00846cc0  e85b17f6ff           call 0x7a8420
// 00846cc5  50                   push eax
// 00846cc6  e805e5f7ff           call 0x7c51d0
// 00846ccb  50                   push eax
// 00846ccc  e8ad10f6ff           call 0x7a7d7e
// 00846cd1  83c458               add esp, 0x58
// 00846cd4  c20400               ret 4
// copied from an identical function in another client (function ?GetToolBar@CXTPReBar@@QAEPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPReBar.cpp