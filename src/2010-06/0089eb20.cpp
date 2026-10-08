// roc 2010-06 0089eb20  unit: CXTPRibbonGroup  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089eb20
//
// 0089eb20  8b442404             mov eax, dword ptr [esp + 4]
// 0089eb24  398858010000         cmp dword ptr [eax + 0x158], ecx
// 0089eb2a  7406                 je 0x89eb32
// 0089eb2c  83c8ff               or eax, 0xffffffff
// 0089eb2f  c20400               ret 4
// 0089eb32  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 0089eb38  8b5168               mov edx, dword ptr [ecx + 0x68]
// 0089eb3b  2b8280000000         sub eax, dword ptr [edx + 0x80]
// 0089eb41  03414c               add eax, dword ptr [ecx + 0x4c]
// 0089eb44  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?IndexOf@CXTPRibbonGroup@@QBEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp
