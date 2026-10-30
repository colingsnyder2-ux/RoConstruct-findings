// roc 2009-12 0085c380  unit: CXTPStatusBar  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c380
//
// 0085c380  e8fb18ffff           call 0x84dc80
// 0085c385  25fffffffb           and eax, 0xfbffffff
// 0085c38a  837c240400           cmp dword ptr [esp + 4], 0
// 0085c38f  7505                 jne 0x85c396
// 0085c391  0d00000004           or eax, 0x4000000
// 0085c396  89442404             mov dword ptr [esp + 4], eax
// 0085c39a  e9c1ffffff           jmp 0x85c360
// copied from an identical function in another client (function ?SetEnabled@CXTPStatusBarPane@@QAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp