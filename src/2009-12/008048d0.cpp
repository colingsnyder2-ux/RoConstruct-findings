// roc 2009-12 008048d0  unit: CXTPControlComboBoxPopupBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008048d0
//
// 008048d0  8bc1                 mov eax, ecx
// 008048d2  8b8874010000         mov ecx, dword ptr [eax + 0x174]
// 008048d8  85c9                 test ecx, ecx
// 008048da  7415                 je 0x8048f1
// 008048dc  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008048e0  52                   push edx
// 008048e1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008048e5  52                   push edx
// 008048e6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008048ea  52                   push edx
// 008048eb  50                   push eax
// 008048ec  e8afeb0500           call 0x8634a0
// 008048f1  c20c00               ret 0xc
// copied from an identical function in another client (function ?FilterToolTipMessage@CXTPCommandBar@@QAEXIIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp