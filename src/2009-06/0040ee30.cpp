// roc 2009-06 0040ee30  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040ee30
//
// 0040ee30  837c240800           cmp dword ptr [esp + 8], 0
// 0040ee35  7408                 je 0x40ee3f
// 0040ee37  b80b000280           mov eax, 0x8002000b
// 0040ee3c  c21000               ret 0x10
// 0040ee3f  56                   push esi
// 0040ee40  8b742414             mov esi, dword ptr [esp + 0x14]
// 0040ee44  85f6                 test esi, esi
// 0040ee46  7509                 jne 0x40ee51
// 0040ee48  b803400080           mov eax, 0x80004003
// 0040ee4d  5e                   pop esi
// 0040ee4e  c21000               ret 0x10
// 0040ee51  33c0                 xor eax, eax
// 0040ee53  390558e69d00         cmp dword ptr [0x9de658], eax
// 0040ee59  750f                 jne 0x40ee6a
// 0040ee5b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040ee5f  50                   push eax
// 0040ee60  b94ce69d00           mov ecx, 0x9de64c
// 0040ee65  e8d67fffff           call 0x406e40
// 0040ee6a  8b0d58e69d00         mov ecx, dword ptr [0x9de658]
// 0040ee70  890e                 mov dword ptr [esi], ecx
// 0040ee72  8b0d58e69d00         mov ecx, dword ptr [0x9de658]
// 0040ee78  85c9                 test ecx, ecx
// 0040ee7a  740a                 je 0x40ee86
// 0040ee7c  8b11                 mov edx, dword ptr [ecx]
// 0040ee7e  8b4204               mov eax, dword ptr [edx + 4]
// 0040ee81  51                   push ecx
// 0040ee82  ffd0                 call eax
// 0040ee84  33c0                 xor eax, eax
// 0040ee86  5e                   pop esi
// 0040ee87  c21000               ret 0x10
// copied from an identical function in another client (function ?GetTypeInfo@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJIKPAPAUITypeInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp