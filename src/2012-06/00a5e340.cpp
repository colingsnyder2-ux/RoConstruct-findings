// roc 2012-06 00a5e340  unit: CXTColorHex  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5e340
//
// 00a5e340  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a5e344  33c0                 xor eax, eax
// 00a5e346  3b886041c200         cmp ecx, dword ptr [eax + 0xc24160]
// 00a5e34c  740f                 je 0xa5e35d
// 00a5e34e  83c004               add eax, 4
// 00a5e351  3d40020000           cmp eax, 0x240
// 00a5e356  72ee                 jb 0xa5e346
// 00a5e358  32c0                 xor al, al
// 00a5e35a  c20400               ret 4
// 00a5e35d  b001                 mov al, 1
// 00a5e35f  c20400               ret 4
// library xtp-13.2.1/Source\Controls\XTColorPageStandard.cpp (function ?IsValidColor@CXTColorHex@@MBE_NK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTColorPageStandard.cpp
