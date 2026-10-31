// roc 2012-06 00407930  unit: VCApp::?$CComObject  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00407930
//
// 00407930  85c9                 test ecx, ecx
// 00407932  7416                 je 0x40794a
// 00407934  8b542404             mov edx, dword ptr [esp + 4]
// 00407938  8d4104               lea eax, [ecx + 4]
// 0040793b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040793f  51                   push ecx
// 00407940  52                   push edx
// 00407941  50                   push eax
// 00407942  e849feffff           call 0x407790
// 00407947  c20800               ret 8
// 0040794a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040794e  8b542404             mov edx, dword ptr [esp + 4]
// 00407952  51                   push ecx
// 00407953  33c0                 xor eax, eax
// 00407955  52                   push edx
// 00407956  50                   push eax
// 00407957  e834feffff           call 0x407790
// 0040795c  c20800               ret 8
// copied from an identical function in another client (function ?AddTermFunc@CAtlModule@ATL@@QAEJP6GXK@ZK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_typeinfo_getti_88c46520c3afb67d.cpp