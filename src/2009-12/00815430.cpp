// roc 2009-12 00815430  unit: MyXTPCommandBars  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00815430
//
// 00815430  e82bf6ffff           call 0x814a60
// 00815435  85c0                 test eax, eax
// 00815437  7411                 je 0x81544a
// 00815439  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0081543d  6881000000           push 0x81
// 00815442  51                   push ecx
// 00815443  8bc8                 mov ecx, eax
// 00815445  e886d50700           call 0x8929d0
// 0081544a  c20400               ret 4
// copied from an identical function in another client (function ?OnToolBarAdded@CXTPCommandBars@@MAEXPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp