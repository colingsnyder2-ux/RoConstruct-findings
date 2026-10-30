// roc 2009-12 007f6690  unit: CXTPControl  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f6690
//
// 007f6690  8b442404             mov eax, dword ptr [esp + 4]
// 007f6694  83ec08               sub esp, 8
// 007f6697  6a01                 push 1
// 007f6699  51                   push ecx
// 007f669a  50                   push eax
// 007f669b  8d54240c             lea edx, [esp + 0xc]
// 007f669f  52                   push edx
// 007f66a0  e89bf8ffff           call 0x7f5f40
// 007f66a5  8bc8                 mov ecx, eax
// 007f66a7  e8c4760000           call 0x7fdd70
// 007f66ac  83c408               add esp, 8
// 007f66af  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPControl@@UAEXPAVCDC@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp