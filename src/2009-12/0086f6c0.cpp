// roc 2009-12 0086f6c0  unit: PAVCXTPCommandBar::?$CArray  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086f6c0
//
// 0086f6c0  8b442404             mov eax, dword ptr [esp + 4]
// 0086f6c4  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0086f6c7  83c12c               add ecx, 0x2c
// 0086f6ca  50                   push eax
// 0086f6cb  52                   push edx
// 0086f6cc  e89fb5ffff           call 0x86ac70
// 0086f6d1  c20400               ret 4
// copied from an identical function in another client (function ?AddTrustedWindow@CXTPMouseManager@@QAEXPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMouseManager.cpp