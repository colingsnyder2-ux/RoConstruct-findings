// roc 2009-06 0046e0e0  unit: VCContent::?$CComObject  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046e0e0
//
// 0046e0e0  837c240800           cmp dword ptr [esp + 8], 0
// 0046e0e5  7408                 je 0x46e0ef
// 0046e0e7  b80b000280           mov eax, 0x8002000b
// 0046e0ec  c21000               ret 0x10
// 0046e0ef  56                   push esi
// 0046e0f0  8b742414             mov esi, dword ptr [esp + 0x14]
// 0046e0f4  85f6                 test esi, esi
// 0046e0f6  7509                 jne 0x46e101
// 0046e0f8  b803400080           mov eax, 0x80004003
// 0046e0fd  5e                   pop esi
// 0046e0fe  c21000               ret 0x10
// 0046e101  33c0                 xor eax, eax
// 0046e103  3905886f9e00         cmp dword ptr [0x9e6f88], eax
// 0046e109  750f                 jne 0x46e11a
// 0046e10b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0046e10f  50                   push eax
// 0046e110  b97c6f9e00           mov ecx, 0x9e6f7c
// 0046e115  e8268df9ff           call 0x406e40
// 0046e11a  8b0d886f9e00         mov ecx, dword ptr [0x9e6f88]
// 0046e120  890e                 mov dword ptr [esi], ecx
// 0046e122  8b0d886f9e00         mov ecx, dword ptr [0x9e6f88]
// 0046e128  85c9                 test ecx, ecx
// 0046e12a  740a                 je 0x46e136
// 0046e12c  8b11                 mov edx, dword ptr [ecx]
// 0046e12e  8b4204               mov eax, dword ptr [edx + 4]
// 0046e131  51                   push ecx
// 0046e132  ffd0                 call eax
// 0046e134  33c0                 xor eax, eax
// 0046e136  5e                   pop esi
// 0046e137  c21000               ret 0x10
// copied from an identical function in another client (function ?GetTypeInfo@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJIKPAPAUITypeInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp