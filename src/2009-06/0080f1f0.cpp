// roc 2009-06 0080f1f0  unit: CXTPRibbonGroup  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080f1f0
//
// 0080f1f0  8b442404             mov eax, dword ptr [esp + 4]
// 0080f1f4  398858010000         cmp dword ptr [eax + 0x158], ecx
// 0080f1fa  7406                 je 0x80f202
// 0080f1fc  83c8ff               or eax, 0xffffffff
// 0080f1ff  c20400               ret 4
// 0080f202  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 0080f208  8b5168               mov edx, dword ptr [ecx + 0x68]
// 0080f20b  2b8280000000         sub eax, dword ptr [edx + 0x80]
// 0080f211  03414c               add eax, dword ptr [ecx + 0x4c]
// 0080f214  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?IndexOf@CXTPRibbonGroup@@QBEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp
