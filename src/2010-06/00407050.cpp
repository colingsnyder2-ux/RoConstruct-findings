// roc 2010-06 00407050  unit: VCApp::?$CComObject  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00407050
//
// 00407050  837c240800           cmp dword ptr [esp + 8], 0
// 00407055  7408                 je 0x40705f
// 00407057  b80b000280           mov eax, 0x8002000b
// 0040705c  c21000               ret 0x10
// 0040705f  56                   push esi
// 00407060  8b742414             mov esi, dword ptr [esp + 0x14]
// 00407064  85f6                 test esi, esi
// 00407066  7509                 jne 0x407071
// 00407068  b803400080           mov eax, 0x80004003
// 0040706d  5e                   pop esi
// 0040706e  c21000               ret 0x10
// 00407071  33c0                 xor eax, eax
// 00407073  3905dc8ab700         cmp dword ptr [0xb78adc], eax
// 00407079  750f                 jne 0x40708a
// 0040707b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040707f  50                   push eax
// 00407080  b9d08ab700           mov ecx, 0xb78ad0
// 00407085  e8a6f9ffff           call 0x406a30
// 0040708a  8b0ddc8ab700         mov ecx, dword ptr [0xb78adc]
// 00407090  890e                 mov dword ptr [esi], ecx
// 00407092  8b0ddc8ab700         mov ecx, dword ptr [0xb78adc]
// 00407098  85c9                 test ecx, ecx
// 0040709a  740a                 je 0x4070a6
// 0040709c  8b11                 mov edx, dword ptr [ecx]
// 0040709e  8b4204               mov eax, dword ptr [edx + 4]
// 004070a1  51                   push ecx
// 004070a2  ffd0                 call eax
// 004070a4  33c0                 xor eax, eax
// 004070a6  5e                   pop esi
// 004070a7  c21000               ret 0x10
// copied from an identical function in another client (function ?GetTypeInfo@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJIKPAPAUITypeInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp