// roc 2009-12 00894090  unit: CXTPMenuBarMDIMenus  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894090
//
// 00894090  8b542404             mov edx, dword ptr [esp + 4]
// 00894094  8d442404             lea eax, [esp + 4]
// 00894098  50                   push eax
// 00894099  52                   push edx
// 0089409a  83c120               add ecx, 0x20
// 0089409d  e8de88f7ff           call 0x80c980
// 008940a2  f7d8                 neg eax
// 008940a4  1bc0                 sbb eax, eax
// 008940a6  23442404             and eax, dword ptr [esp + 4]
// 008940aa  c20400               ret 4
// copied from an identical function in another client (function ?Lookup@CXTPMenuBarMDIMenus@@QBEPAVCXTPMenuBarMDIMenuInfo@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMenuBar.cpp