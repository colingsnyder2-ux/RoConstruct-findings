// roc 2007-03 0040c770  unit: seg_00400000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040c770
//
// 0040c770  8b442404             mov eax, dword ptr [esp + 4]
// 0040c774  85c0                 test eax, eax
// 0040c776  7418                 je 0x40c790
// 0040c778  8b542408             mov edx, dword ptr [esp + 8]
// 0040c77c  8b48f8               mov ecx, dword ptr [eax - 8]
// 0040c77f  83c0f8               add eax, -8
// 0040c782  52                   push edx
// 0040c783  68e43b7800           push 0x783be4
// 0040c788  50                   push eax
// 0040c789  8b01                 mov eax, dword ptr [ecx]
// 0040c78b  ffd0                 call eax
// 0040c78d  c20800               ret 8
// 0040c790  8b542408             mov edx, dword ptr [esp + 8]
// 0040c794  33c0                 xor eax, eax
// 0040c796  8b08                 mov ecx, dword ptr [eax]
// 0040c798  52                   push edx
// 0040c799  68e43b7800           push 0x783be4
// 0040c79e  50                   push eax
// 0040c79f  8b01                 mov eax, dword ptr [ecx]
// 0040c7a1  ffd0                 call eax
// 0040c7a3  c20800               ret 8
// copied from an identical function in another client (function ?GetConnectionPointContainer@?$IConnectionPointImpl@VCBrowserViewExternal@@$1?_GUID_dd754d30_321a_45a2_a40c_75783afabfab@@3U__s_GUID@@BVCComDynamicUnkArray@ATL@@@ATL@@UAGJPAPAUIConnectionPointContainer@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp