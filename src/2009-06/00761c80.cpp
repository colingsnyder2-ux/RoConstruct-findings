// roc 2009-06 00761c80  unit: CXTPControlColorSelector  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00761c80
//
// 00761c80  8b442404             mov eax, dword ptr [esp + 4]
// 00761c84  398174010000         cmp dword ptr [ecx + 0x174], eax
// 00761c8a  7413                 je 0x761c9f
// 00761c8c  898174010000         mov dword ptr [ecx + 0x174], eax
// 00761c92  c744240401000000     mov dword ptr [esp + 4], 1
// 00761c9a  e911e3fbff           jmp 0x71ffb0
// 00761c9f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?SetSelectedItem@CXTPControlColorSelector@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
