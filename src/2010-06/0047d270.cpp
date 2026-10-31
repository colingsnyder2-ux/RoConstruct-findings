// roc 2010-06 0047d270  unit: VCContent::?$CComObject  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047d270
//
// 0047d270  837c240800           cmp dword ptr [esp + 8], 0
// 0047d275  7408                 je 0x47d27f
// 0047d277  b80b000280           mov eax, 0x8002000b
// 0047d27c  c21000               ret 0x10
// 0047d27f  56                   push esi
// 0047d280  8b742414             mov esi, dword ptr [esp + 0x14]
// 0047d284  85f6                 test esi, esi
// 0047d286  7509                 jne 0x47d291
// 0047d288  b803400080           mov eax, 0x80004003
// 0047d28d  5e                   pop esi
// 0047d28e  c21000               ret 0x10
// 0047d291  33c0                 xor eax, eax
// 0047d293  39057458b800         cmp dword ptr [0xb85874], eax
// 0047d299  750f                 jne 0x47d2aa
// 0047d29b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0047d29f  50                   push eax
// 0047d2a0  b96858b800           mov ecx, 0xb85868
// 0047d2a5  e88697f8ff           call 0x406a30
// 0047d2aa  8b0d7458b800         mov ecx, dword ptr [0xb85874]
// 0047d2b0  890e                 mov dword ptr [esi], ecx
// 0047d2b2  8b0d7458b800         mov ecx, dword ptr [0xb85874]
// 0047d2b8  85c9                 test ecx, ecx
// 0047d2ba  740a                 je 0x47d2c6
// 0047d2bc  8b11                 mov edx, dword ptr [ecx]
// 0047d2be  8b4204               mov eax, dword ptr [edx + 4]
// 0047d2c1  51                   push ecx
// 0047d2c2  ffd0                 call eax
// 0047d2c4  33c0                 xor eax, eax
// 0047d2c6  5e                   pop esi
// 0047d2c7  c21000               ret 0x10
// copied from an identical function in another client (function ?GetTypeInfo@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJIKPAPAUITypeInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp