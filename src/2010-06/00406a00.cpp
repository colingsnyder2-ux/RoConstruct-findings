// roc 2010-06 00406a00  unit: VCApp::?$CComObject  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00406a00
//
// 00406a00  85c9                 test ecx, ecx
// 00406a02  7416                 je 0x406a1a
// 00406a04  8b542404             mov edx, dword ptr [esp + 4]
// 00406a08  8d4104               lea eax, [ecx + 4]
// 00406a0b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00406a0f  51                   push ecx
// 00406a10  52                   push edx
// 00406a11  50                   push eax
// 00406a12  e8d9feffff           call 0x4068f0
// 00406a17  c20800               ret 8
// 00406a1a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00406a1e  8b542404             mov edx, dword ptr [esp + 4]
// 00406a22  51                   push ecx
// 00406a23  33c0                 xor eax, eax
// 00406a25  52                   push edx
// 00406a26  50                   push eax
// 00406a27  e8c4feffff           call 0x4068f0
// 00406a2c  c20800               ret 8
// copied from an identical function in another client (function ?AddTermFunc@CAtlModule@ATL@@QAEJP6GXK@ZK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_typeinfo_getti_88c46520c3afb67d.cpp