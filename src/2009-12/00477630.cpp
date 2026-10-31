// roc 2009-12 00477630  unit: VCContent::?$CComObject  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00477630
//
// 00477630  837c240800           cmp dword ptr [esp + 8], 0
// 00477635  7408                 je 0x47763f
// 00477637  b80b000280           mov eax, 0x8002000b
// 0047763c  c21000               ret 0x10
// 0047763f  56                   push esi
// 00477640  8b742414             mov esi, dword ptr [esp + 0x14]
// 00477644  85f6                 test esi, esi
// 00477646  7509                 jne 0x477651
// 00477648  b803400080           mov eax, 0x80004003
// 0047764d  5e                   pop esi
// 0047764e  c21000               ret 0x10
// 00477651  33c0                 xor eax, eax
// 00477653  3905bcbeb000         cmp dword ptr [0xb0bebc], eax
// 00477659  750f                 jne 0x47766a
// 0047765b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0047765f  50                   push eax
// 00477660  b9b0beb000           mov ecx, 0xb0beb0
// 00477665  e8c6f4f8ff           call 0x406b30
// 0047766a  8b0dbcbeb000         mov ecx, dword ptr [0xb0bebc]
// 00477670  890e                 mov dword ptr [esi], ecx
// 00477672  8b0dbcbeb000         mov ecx, dword ptr [0xb0bebc]
// 00477678  85c9                 test ecx, ecx
// 0047767a  740a                 je 0x477686
// 0047767c  8b11                 mov edx, dword ptr [ecx]
// 0047767e  8b4204               mov eax, dword ptr [edx + 4]
// 00477681  51                   push ecx
// 00477682  ffd0                 call eax
// 00477684  33c0                 xor eax, eax
// 00477686  5e                   pop esi
// 00477687  c21000               ret 0x10
// copied from an identical function in another client (function ?GetTypeInfo@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJIKPAPAUITypeInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp