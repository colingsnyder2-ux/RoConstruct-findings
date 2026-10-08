// roc 2011-06 0081a6f0  unit: CXTPControlComboBoxAutoCompleteWnd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081a6f0
//
// 0081a6f0  8b442404             mov eax, dword ptr [esp + 4]
// 0081a6f4  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 0081a6fa  7413                 je 0x81a70f
// 0081a6fc  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 0081a702  c744240401000000     mov dword ptr [esp + 4], 1
// 0081a70a  e98126ffff           jmp 0x80cd90
// 0081a70f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?SetChecked@CXTPControl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
