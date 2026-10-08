// roc 2009-06 0072cff0  unit: CXTPCommandBarsOptions  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072cff0
//
// 0072cff0  8b442404             mov eax, dword ptr [esp + 4]
// 0072cff4  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 0072cffa  7413                 je 0x72d00f
// 0072cffc  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 0072d002  c744240401000000     mov dword ptr [esp + 4], 1
// 0072d00a  e9a12fffff           jmp 0x71ffb0
// 0072d00f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?SetChecked@CXTPControl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
