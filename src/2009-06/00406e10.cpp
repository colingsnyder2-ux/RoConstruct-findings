// roc 2009-06 00406e10  unit: VCApp::?$CComObject  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00406e10
//
// 00406e10  85c9                 test ecx, ecx
// 00406e12  7416                 je 0x406e2a
// 00406e14  8b542404             mov edx, dword ptr [esp + 4]
// 00406e18  8d4104               lea eax, [ecx + 4]
// 00406e1b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00406e1f  51                   push ecx
// 00406e20  52                   push edx
// 00406e21  50                   push eax
// 00406e22  e879feffff           call 0x406ca0
// 00406e27  c20800               ret 8
// 00406e2a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00406e2e  8b542404             mov edx, dword ptr [esp + 4]
// 00406e32  51                   push ecx
// 00406e33  33c0                 xor eax, eax
// 00406e35  52                   push edx
// 00406e36  50                   push eax
// 00406e37  e864feffff           call 0x406ca0
// 00406e3c  c20800               ret 8
// copied from an identical function in another client (function ?AddTermFunc@CAtlModule@ATL@@QAEJP6GXK@ZK@Z)

// from server: 100% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp