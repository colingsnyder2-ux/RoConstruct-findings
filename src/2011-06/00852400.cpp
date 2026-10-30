// roc 2011-06 00852400  unit: CXTPControlColorSelector  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00852400
//
// 00852400  8b442404             mov eax, dword ptr [esp + 4]
// 00852404  398174010000         cmp dword ptr [ecx + 0x174], eax
// 0085240a  7413                 je 0x85241f
// 0085240c  898174010000         mov dword ptr [ecx + 0x174], eax
// 00852412  c744240401000000     mov dword ptr [esp + 4], 1
// 0085241a  e971a9fbff           jmp 0x80cd90
// 0085241f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?SetSelectedItem@CXTPControlColorSelector@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
