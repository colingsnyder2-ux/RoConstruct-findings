// roc 2010-06 007b8210  unit: CXTPControlComboBoxAutoCompleteWnd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b8210
//
// 007b8210  8b442404             mov eax, dword ptr [esp + 4]
// 007b8214  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 007b821a  7413                 je 0x7b822f
// 007b821c  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 007b8222  c744240401000000     mov dword ptr [esp + 4], 1
// 007b822a  e97125ffff           jmp 0x7aa7a0
// 007b822f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?SetChecked@CXTPControl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
