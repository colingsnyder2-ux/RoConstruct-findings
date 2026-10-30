// roc 2009-12 008e9ce0  unit: CXTPRibbonGroup  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9ce0
//
// 008e9ce0  8b442404             mov eax, dword ptr [esp + 4]
// 008e9ce4  398858010000         cmp dword ptr [eax + 0x158], ecx
// 008e9cea  7406                 je 0x8e9cf2
// 008e9cec  83c8ff               or eax, 0xffffffff
// 008e9cef  c20400               ret 4
// 008e9cf2  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 008e9cf8  8b5168               mov edx, dword ptr [ecx + 0x68]
// 008e9cfb  2b8280000000         sub eax, dword ptr [edx + 0x80]
// 008e9d01  03414c               add eax, dword ptr [ecx + 0x4c]
// 008e9d04  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?IndexOf@CXTPRibbonGroup@@QBEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp
