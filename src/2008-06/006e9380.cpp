// roc 2008-06 006e9380  unit: CXTPControlColorSelector  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e9380
//
// 006e9380  8b442404             mov eax, dword ptr [esp + 4]
// 006e9384  398174010000         cmp dword ptr [ecx + 0x174], eax
// 006e938a  7413                 je 0x6e939f
// 006e938c  898174010000         mov dword ptr [ecx + 0x174], eax
// 006e9392  c744240401000000     mov dword ptr [esp + 4], 1
// 006e939a  e93125fcff           jmp 0x6ab8d0
// 006e939f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?SetSelectedItem@CXTPControlColorSelector@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
