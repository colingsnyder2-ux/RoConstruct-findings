// roc 2012-06 00a1c270  unit: CXTPDockBar  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1c270
//
// 00a1c270  83ec50               sub esp, 0x50
// 00a1c273  8b01                 mov eax, dword ptr [ecx]
// 00a1c275  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 00a1c27b  8d1424               lea edx, [esp]
// 00a1c27e  52                   push edx
// 00a1c27f  8b542458             mov edx, dword ptr [esp + 0x58]
// 00a1c283  52                   push edx
// 00a1c284  681d040000           push 0x41d
// 00a1c289  c744240c50000000     mov dword ptr [esp + 0xc], 0x50
// 00a1c291  c744241051000000     mov dword ptr [esp + 0x10], 0x51
// 00a1c299  ffd0                 call eax
// 00a1c29b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a1c29f  51                   push ecx
// 00a1c2a0  e8d168f6ff           call 0x982b76
// 00a1c2a5  50                   push eax
// 00a1c2a6  e87530f8ff           call 0x99f320
// 00a1c2ab  50                   push eax
// 00a1c2ac  e83562f6ff           call 0x9824e6
// 00a1c2b1  83c458               add esp, 0x58
// 00a1c2b4  c20400               ret 4
// copied from an identical function in another client (function ?GetToolBar@CXTPReBar@@QAEPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPReBar.cpp