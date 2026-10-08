// roc 2012-06 009ca8b0  unit: CXTPControlColorSelector  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ca8b0
//
// 009ca8b0  8b442404             mov eax, dword ptr [esp + 4]
// 009ca8b4  398174010000         cmp dword ptr [ecx + 0x174], eax
// 009ca8ba  7413                 je 0x9ca8cf
// 009ca8bc  898174010000         mov dword ptr [ecx + 0x174], eax
// 009ca8c2  c744240401000000     mov dword ptr [esp + 4], 1
// 009ca8ca  e961a7fbff           jmp 0x985030
// 009ca8cf  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?SetSelectedItem@CXTPControlColorSelector@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
