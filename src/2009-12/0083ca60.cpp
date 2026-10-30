// roc 2009-12 0083ca60  unit: CXTPControlColorSelector  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083ca60
//
// 0083ca60  8b442404             mov eax, dword ptr [esp + 4]
// 0083ca64  398174010000         cmp dword ptr [ecx + 0x174], eax
// 0083ca6a  7413                 je 0x83ca7f
// 0083ca6c  898174010000         mov dword ptr [ecx + 0x174], eax
// 0083ca72  c744240401000000     mov dword ptr [esp + 4], 1
// 0083ca7a  e9419cfbff           jmp 0x7f66c0
// 0083ca7f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?SetSelectedItem@CXTPControlColorSelector@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
