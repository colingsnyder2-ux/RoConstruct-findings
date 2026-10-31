// roc 2009-12 00407020  unit: VCApp::?$CComObject  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00407020
//
// 00407020  837c240800           cmp dword ptr [esp + 8], 0
// 00407025  7408                 je 0x40702f
// 00407027  b80b000280           mov eax, 0x8002000b
// 0040702c  c21000               ret 0x10
// 0040702f  56                   push esi
// 00407030  8b742414             mov esi, dword ptr [esp + 0x14]
// 00407034  85f6                 test esi, esi
// 00407036  7509                 jne 0x407041
// 00407038  b803400080           mov eax, 0x80004003
// 0040703d  5e                   pop esi
// 0040703e  c21000               ret 0x10
// 00407041  33c0                 xor eax, eax
// 00407043  3905dcfaaf00         cmp dword ptr [0xaffadc], eax
// 00407049  750f                 jne 0x40705a
// 0040704b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040704f  50                   push eax
// 00407050  b9d0faaf00           mov ecx, 0xaffad0
// 00407055  e8d6faffff           call 0x406b30
// 0040705a  8b0ddcfaaf00         mov ecx, dword ptr [0xaffadc]
// 00407060  890e                 mov dword ptr [esi], ecx
// 00407062  8b0ddcfaaf00         mov ecx, dword ptr [0xaffadc]
// 00407068  85c9                 test ecx, ecx
// 0040706a  740a                 je 0x407076
// 0040706c  8b11                 mov edx, dword ptr [ecx]
// 0040706e  8b4204               mov eax, dword ptr [edx + 4]
// 00407071  51                   push ecx
// 00407072  ffd0                 call eax
// 00407074  33c0                 xor eax, eax
// 00407076  5e                   pop esi
// 00407077  c21000               ret 0x10
// copied from an identical function in another client (function ?GetTypeInfo@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJIKPAPAUITypeInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp