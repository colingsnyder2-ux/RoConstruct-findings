// roc 2011-06 00407710  unit: VCApp::?$CComObject  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00407710
//
// 00407710  85c9                 test ecx, ecx
// 00407712  7416                 je 0x40772a
// 00407714  8b542404             mov edx, dword ptr [esp + 4]
// 00407718  8d4104               lea eax, [ecx + 4]
// 0040771b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040771f  51                   push ecx
// 00407720  52                   push edx
// 00407721  50                   push eax
// 00407722  e889feffff           call 0x4075b0
// 00407727  c20800               ret 8
// 0040772a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040772e  8b542404             mov edx, dword ptr [esp + 4]
// 00407732  51                   push ecx
// 00407733  33c0                 xor eax, eax
// 00407735  52                   push edx
// 00407736  50                   push eax
// 00407737  e874feffff           call 0x4075b0
// 0040773c  c20800               ret 8
// copied from an identical function in another client (function ?AddTermFunc@CAtlModule@ATL@@QAEJP6GXK@ZK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_typeinfo_getti_88c46520c3afb67d.cpp