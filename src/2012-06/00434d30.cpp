// roc 2012-06 00434d30  unit: MainLogManager  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00434d30
//
// 00434d30  8b442404             mov eax, dword ptr [esp + 4]
// 00434d34  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 00434d3a  7413                 je 0x434d4f
// 00434d3c  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 00434d42  c744240401000000     mov dword ptr [esp + 4], 1
// 00434d4a  e9e1025500           jmp 0x985030
// 00434d4f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?SetChecked@CXTPControl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
