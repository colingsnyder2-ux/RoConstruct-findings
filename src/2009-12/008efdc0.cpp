// roc 2009-12 008efdc0  unit: CXTPRibbonTabPopupToolBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008efdc0
//
// 008efdc0  56                   push esi
// 008efdc1  8bf1                 mov esi, ecx
// 008efdc3  6a00                 push 0
// 008efdc5  8d8e5c020000         lea ecx, [esi + 0x25c]
// 008efdcb  e870f9ffff           call 0x8ef740
// 008efdd0  8b442410             mov eax, dword ptr [esp + 0x10]
// 008efdd4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008efdd8  8b542408             mov edx, dword ptr [esp + 8]
// 008efddc  50                   push eax
// 008efddd  51                   push ecx
// 008efdde  52                   push edx
// 008efddf  8bce                 mov ecx, esi
// 008efde1  e85a40f5ff           call 0x843e40
// 008efde6  5e                   pop esi
// 008efde7  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetTrackingMode@CXTPRibbonTabPopupToolBar@@UAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonPopups.cpp