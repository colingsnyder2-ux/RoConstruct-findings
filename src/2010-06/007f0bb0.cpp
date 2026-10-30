// roc 2010-06 007f0bb0  unit: CXTPControlColorSelector  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f0bb0
//
// 007f0bb0  8b442404             mov eax, dword ptr [esp + 4]
// 007f0bb4  398174010000         cmp dword ptr [ecx + 0x174], eax
// 007f0bba  7413                 je 0x7f0bcf
// 007f0bbc  898174010000         mov dword ptr [ecx + 0x174], eax
// 007f0bc2  c744240401000000     mov dword ptr [esp + 4], 1
// 007f0bca  e9d19bfbff           jmp 0x7aa7a0
// 007f0bcf  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?SetSelectedItem@CXTPControlColorSelector@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
