// roc 2008-06 00785d50  unit: CXTColorHex  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00785d50
//
// 00785d50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00785d54  33c0                 xor eax, eax
// 00785d56  3b8878978600         cmp ecx, dword ptr [eax + 0x869778]
// 00785d5c  740f                 je 0x785d6d
// 00785d5e  83c004               add eax, 4
// 00785d61  3d40020000           cmp eax, 0x240
// 00785d66  72ee                 jb 0x785d56
// 00785d68  32c0                 xor al, al
// 00785d6a  c20400               ret 4
// 00785d6d  b001                 mov al, 1
// 00785d6f  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorPageStandard.cpp (function ?IsValidColor@CXTColorHex@@MBE_NK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageStandard.cpp
