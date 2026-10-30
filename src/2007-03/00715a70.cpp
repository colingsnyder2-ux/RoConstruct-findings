// roc 2007-03 00715a70  unit: seg_00710000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00715a70
//
// 00715a70  8b442404             mov eax, dword ptr [esp + 4]
// 00715a74  56                   push esi
// 00715a75  50                   push eax
// 00715a76  8bf1                 mov esi, ecx
// 00715a78  e811510200           call 0x73ab8e
// 00715a7d  50                   push eax
// 00715a7e  8bce                 mov ecx, esi
// 00715a80  e88bfdffff           call 0x715810
// 00715a85  b801000000           mov eax, 1
// 00715a8a  5e                   pop esi
// 00715a8b  c20800               ret 8
// library xtp-11.2.2/Source\SkinFramework\XTPSkinObjectMenu.cpp (function ?OnPrintClient@CXTPSkinObjectMenu@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinObjectMenu.cpp
