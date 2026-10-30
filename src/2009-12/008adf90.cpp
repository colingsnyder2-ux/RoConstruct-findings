// roc 2009-12 008adf90  unit: CXTPDockingPaneKeyboardHook  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008adf90
//
// 008adf90  51                   push ecx
// 008adf91  8b542408             mov edx, dword ptr [esp + 8]
// 008adf95  8d0424               lea eax, [esp]
// 008adf98  50                   push eax
// 008adf99  52                   push edx
// 008adf9a  83c108               add ecx, 8
// 008adf9d  c744240800000000     mov dword ptr [esp + 8], 0
// 008adfa5  e8d6e9f5ff           call 0x80c980
// 008adfaa  f7d8                 neg eax
// 008adfac  1bc0                 sbb eax, eax
// 008adfae  230424               and eax, dword ptr [esp]
// 008adfb1  59                   pop ecx
// 008adfb2  c20400               ret 4
// copied from an identical function in another client (function ?Lookup@CXTPDockingPaneKeyboardHook@@IBEPAVCXTPDockingPaneManager@@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneKeyboardHook.cpp