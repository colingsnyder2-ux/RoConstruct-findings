// roc 2009-06 00407a10  unit: VCApp::?$CComObject  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00407a10
//
// 00407a10  837c240800           cmp dword ptr [esp + 8], 0
// 00407a15  7408                 je 0x407a1f
// 00407a17  b80b000280           mov eax, 0x8002000b
// 00407a1c  c21000               ret 0x10
// 00407a1f  56                   push esi
// 00407a20  8b742414             mov esi, dword ptr [esp + 0x14]
// 00407a24  85f6                 test esi, esi
// 00407a26  7509                 jne 0x407a31
// 00407a28  b803400080           mov eax, 0x80004003
// 00407a2d  5e                   pop esi
// 00407a2e  c21000               ret 0x10
// 00407a31  33c0                 xor eax, eax
// 00407a33  3905dcba9d00         cmp dword ptr [0x9dbadc], eax
// 00407a39  750f                 jne 0x407a4a
// 00407a3b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00407a3f  50                   push eax
// 00407a40  b9d0ba9d00           mov ecx, 0x9dbad0
// 00407a45  e8f6f3ffff           call 0x406e40
// 00407a4a  8b0ddcba9d00         mov ecx, dword ptr [0x9dbadc]
// 00407a50  890e                 mov dword ptr [esi], ecx
// 00407a52  8b0ddcba9d00         mov ecx, dword ptr [0x9dbadc]
// 00407a58  85c9                 test ecx, ecx
// 00407a5a  740a                 je 0x407a66
// 00407a5c  8b11                 mov edx, dword ptr [ecx]
// 00407a5e  8b4204               mov eax, dword ptr [edx + 4]
// 00407a61  51                   push ecx
// 00407a62  ffd0                 call eax
// 00407a64  33c0                 xor eax, eax
// 00407a66  5e                   pop esi
// 00407a67  c21000               ret 0x10
// copied from an identical function in another client (function ?GetTypeInfo@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJIKPAPAUITypeInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp