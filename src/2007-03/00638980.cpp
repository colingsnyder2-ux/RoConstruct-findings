// roc 2007-03 00638980  unit: seg_00630000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00638980
//
// 00638980  8b442404             mov eax, dword ptr [esp + 4]
// 00638984  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 0063898a  7413                 je 0x63899f
// 0063898c  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 00638992  c744240401000000     mov dword ptr [esp + 4], 1
// 0063899a  e91172ffff           jmp 0x62fbb0
// 0063899f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?SetChecked@CXTPControl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
