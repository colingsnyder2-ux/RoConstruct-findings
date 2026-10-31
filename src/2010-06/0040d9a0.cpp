// roc 2010-06 0040d9a0  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040d9a0
//
// 0040d9a0  8b442404             mov eax, dword ptr [esp + 4]
// 0040d9a4  85c0                 test eax, eax
// 0040d9a6  7418                 je 0x40d9c0
// 0040d9a8  8b542408             mov edx, dword ptr [esp + 8]
// 0040d9ac  8b48f8               mov ecx, dword ptr [eax - 8]
// 0040d9af  83c0f8               add eax, -8
// 0040d9b2  52                   push edx
// 0040d9b3  682419a000           push 0xa01924
// 0040d9b8  50                   push eax
// 0040d9b9  8b01                 mov eax, dword ptr [ecx]
// 0040d9bb  ffd0                 call eax
// 0040d9bd  c20800               ret 8
// 0040d9c0  8b542408             mov edx, dword ptr [esp + 8]
// 0040d9c4  33c0                 xor eax, eax
// 0040d9c6  8b08                 mov ecx, dword ptr [eax]
// 0040d9c8  52                   push edx
// 0040d9c9  682419a000           push 0xa01924
// 0040d9ce  50                   push eax
// 0040d9cf  8b01                 mov eax, dword ptr [ecx]
// 0040d9d1  ffd0                 call eax
// 0040d9d3  c20800               ret 8
// copied from an identical function in another client (function ?GetConnectionPointContainer@?$IConnectionPointImpl@VCBrowserViewExternal@@$1?_GUID_dd754d30_321a_45a2_a40c_75783afabfab@@3U__s_GUID@@BVCComDynamicUnkArray@ATL@@@ATL@@UAGJPAPAUIConnectionPointContainer@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp