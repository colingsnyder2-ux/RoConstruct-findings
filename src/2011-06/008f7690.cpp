// roc 2011-06 008f7690  unit: CXTPRibbonGroup  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f7690
//
// 008f7690  8b442404             mov eax, dword ptr [esp + 4]
// 008f7694  398858010000         cmp dword ptr [eax + 0x158], ecx
// 008f769a  7406                 je 0x8f76a2
// 008f769c  83c8ff               or eax, 0xffffffff
// 008f769f  c20400               ret 4
// 008f76a2  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 008f76a8  8b5168               mov edx, dword ptr [ecx + 0x68]
// 008f76ab  2b8280000000         sub eax, dword ptr [edx + 0x80]
// 008f76b1  03414c               add eax, dword ptr [ecx + 0x4c]
// 008f76b4  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?IndexOf@CXTPRibbonGroup@@QBEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp
