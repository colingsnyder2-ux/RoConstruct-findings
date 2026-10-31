// roc 2009-12 00406b00  unit: VCApp::?$CComObject  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00406b00
//
// 00406b00  85c9                 test ecx, ecx
// 00406b02  7416                 je 0x406b1a
// 00406b04  8b542404             mov edx, dword ptr [esp + 4]
// 00406b08  8d4104               lea eax, [ecx + 4]
// 00406b0b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00406b0f  51                   push ecx
// 00406b10  52                   push edx
// 00406b11  50                   push eax
// 00406b12  e879feffff           call 0x406990
// 00406b17  c20800               ret 8
// 00406b1a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00406b1e  8b542404             mov edx, dword ptr [esp + 4]
// 00406b22  51                   push ecx
// 00406b23  33c0                 xor eax, eax
// 00406b25  52                   push edx
// 00406b26  50                   push eax
// 00406b27  e864feffff           call 0x406990
// 00406b2c  c20800               ret 8
// copied from an identical function in another client (function ?AddTermFunc@CAtlModule@ATL@@QAEJP6GXK@ZK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_typeinfo_getti_88c46520c3afb67d.cpp