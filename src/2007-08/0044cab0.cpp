// roc 2007-08 0044cab0  unit: CRobloxControlColorSelector  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044cab0
//
// 0044cab0  8b442404             mov eax, dword ptr [esp + 4]
// 0044cab4  39819c000000         cmp dword ptr [ecx + 0x9c], eax
// 0044caba  7413                 je 0x44cacf
// 0044cabc  89819c000000         mov dword ptr [ecx + 0x9c], eax
// 0044cac2  c744240401000000     mov dword ptr [esp + 4], 1
// 0044caca  e9c1db1e00           jmp 0x63a690
// 0044cacf  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControl.cpp (function ?SetEnabled@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControl.cpp
