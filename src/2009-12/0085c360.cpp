// roc 2009-12 0085c360  unit: CXTPStatusBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c360
//
// 0085c360  8b442404             mov eax, dword ptr [esp + 4]
// 0085c364  8b5154               mov edx, dword ptr [ecx + 0x54]
// 0085c367  8b4950               mov ecx, dword ptr [ecx + 0x50]
// 0085c36a  50                   push eax
// 0085c36b  52                   push edx
// 0085c36c  e85ffcffff           call 0x85bfd0
// 0085c371  c20400               ret 4
// copied from an identical function in another client (function ?SetWidth@CXTPStatusBarPane@@QAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp