// roc 2012-06 00a6f9c0  unit: CXTPRibbonGroup  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6f9c0
//
// 00a6f9c0  8b442404             mov eax, dword ptr [esp + 4]
// 00a6f9c4  398858010000         cmp dword ptr [eax + 0x158], ecx
// 00a6f9ca  7406                 je 0xa6f9d2
// 00a6f9cc  83c8ff               or eax, 0xffffffff
// 00a6f9cf  c20400               ret 4
// 00a6f9d2  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 00a6f9d8  8b5168               mov edx, dword ptr [ecx + 0x68]
// 00a6f9db  2b8280000000         sub eax, dword ptr [edx + 0x80]
// 00a6f9e1  03414c               add eax, dword ptr [ecx + 0x4c]
// 00a6f9e4  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?IndexOf@CXTPRibbonGroup@@QBEHPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp
