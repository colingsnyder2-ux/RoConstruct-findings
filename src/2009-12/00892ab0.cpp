// roc 2009-12 00892ab0  unit: CXTPDockBar  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00892ab0
//
// 00892ab0  83ec50               sub esp, 0x50
// 00892ab3  8b01                 mov eax, dword ptr [ecx]
// 00892ab5  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 00892abb  8d1424               lea edx, [esp]
// 00892abe  52                   push edx
// 00892abf  8b542458             mov edx, dword ptr [esp + 0x58]
// 00892ac3  52                   push edx
// 00892ac4  681d040000           push 0x41d
// 00892ac9  c744240c50000000     mov dword ptr [esp + 0xc], 0x50
// 00892ad1  c744241051000000     mov dword ptr [esp + 0x10], 0x51
// 00892ad9  ffd0                 call eax
// 00892adb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00892adf  51                   push ecx
// 00892ae0  e8fb17f6ff           call 0x7f42e0
// 00892ae5  50                   push eax
// 00892ae6  e855e6f7ff           call 0x811140
// 00892aeb  50                   push eax
// 00892aec  e84d11f6ff           call 0x7f3c3e
// 00892af1  83c458               add esp, 0x58
// 00892af4  c20400               ret 4
// copied from an identical function in another client (function ?GetToolBar@CXTPReBar@@QAEPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPReBar.cpp