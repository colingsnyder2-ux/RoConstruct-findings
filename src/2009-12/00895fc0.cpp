// roc 2009-12 00895fc0  unit: CXTPRibbonBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00895fc0
//
// 00895fc0  56                   push esi
// 00895fc1  8bf1                 mov esi, ecx
// 00895fc3  e868def5ff           call 0x7f3e30
// 00895fc8  8bce                 mov ecx, esi
// 00895fca  e801edffff           call 0x894cd0
// 00895fcf  85c0                 test eax, eax
// 00895fd1  741d                 je 0x895ff0
// 00895fd3  8b442408             mov eax, dword ptr [esp + 8]
// 00895fd7  3b863c020000         cmp eax, dword ptr [esi + 0x23c]
// 00895fdd  7411                 je 0x895ff0
// 00895fdf  8b8e80020000         mov ecx, dword ptr [esi + 0x280]
// 00895fe5  89863c020000         mov dword ptr [esi + 0x23c], eax
// 00895feb  e8105a0500           call 0x8eba00
// 00895ff0  5e                   pop esi
// 00895ff1  c20800               ret 8
// copied from an identical function in another client (function ?OnShowWindow@CXTPRibbonBar@@IAEXHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp