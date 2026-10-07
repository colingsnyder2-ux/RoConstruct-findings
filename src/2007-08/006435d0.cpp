// roc 2007-08 006435d0  unit: CXTPPaintManager  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006435d0
//
// 006435d0  8b442404             mov eax, dword ptr [esp + 4]
// 006435d4  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 006435da  7413                 je 0x6435ef
// 006435dc  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 006435e2  c744240401000000     mov dword ptr [esp + 4], 1
// 006435ea  e9a170ffff           jmp 0x63a690
// 006435ef  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlExt.cpp (function ?SetChecked@CXTPControl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlExt.cpp
