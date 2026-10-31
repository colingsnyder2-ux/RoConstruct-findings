// roc 2009-06 0044f950  unit: VCWorkspace::?$CComObject  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044f950
//
// 0044f950  837c240800           cmp dword ptr [esp + 8], 0
// 0044f955  7408                 je 0x44f95f
// 0044f957  b80b000280           mov eax, 0x8002000b
// 0044f95c  c21000               ret 0x10
// 0044f95f  56                   push esi
// 0044f960  8b742414             mov esi, dword ptr [esp + 0x14]
// 0044f964  85f6                 test esi, esi
// 0044f966  7509                 jne 0x44f971
// 0044f968  b803400080           mov eax, 0x80004003
// 0044f96d  5e                   pop esi
// 0044f96e  c21000               ret 0x10
// 0044f971  33c0                 xor eax, eax
// 0044f973  390550529e00         cmp dword ptr [0x9e5250], eax
// 0044f979  750f                 jne 0x44f98a
// 0044f97b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0044f97f  50                   push eax
// 0044f980  b944529e00           mov ecx, 0x9e5244
// 0044f985  e8b674fbff           call 0x406e40
// 0044f98a  8b0d50529e00         mov ecx, dword ptr [0x9e5250]
// 0044f990  890e                 mov dword ptr [esi], ecx
// 0044f992  8b0d50529e00         mov ecx, dword ptr [0x9e5250]
// 0044f998  85c9                 test ecx, ecx
// 0044f99a  740a                 je 0x44f9a6
// 0044f99c  8b11                 mov edx, dword ptr [ecx]
// 0044f99e  8b4204               mov eax, dword ptr [edx + 4]
// 0044f9a1  51                   push ecx
// 0044f9a2  ffd0                 call eax
// 0044f9a4  33c0                 xor eax, eax
// 0044f9a6  5e                   pop esi
// 0044f9a7  c21000               ret 0x10
// copied from an identical function in another client (function ?GetTypeInfo@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJIKPAPAUITypeInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp