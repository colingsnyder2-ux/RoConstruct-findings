// from server: 100% by auto
// roc 2008-06 00798650  unit: CXTPRibbonGroup  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00798650
//
// 00798650  8b442404             mov eax, dword ptr [esp + 4]
// 00798654  398858010000         cmp dword ptr [eax + 0x158], ecx
// 0079865a  7406                 je 0x798662
// 0079865c  83c8ff               or eax, 0xffffffff
// 0079865f  c20400               ret 4
// 00798662  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 00798668  8b5168               mov edx, dword ptr [ecx + 0x68]
// 0079866b  2b8280000000         sub eax, dword ptr [edx + 0x80]
// 00798671  03414c               add eax, dword ptr [ecx + 0x4c]
// 00798674  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?IndexOf@CXTPRibbonGroup@@QBEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp
