// roc 2009-12 0040eb90  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040eb90
//
// 0040eb90  837c240800           cmp dword ptr [esp + 8], 0
// 0040eb95  7408                 je 0x40eb9f
// 0040eb97  b80b000280           mov eax, 0x8002000b
// 0040eb9c  c21000               ret 0x10
// 0040eb9f  56                   push esi
// 0040eba0  8b742414             mov esi, dword ptr [esp + 0x14]
// 0040eba4  85f6                 test esi, esi
// 0040eba6  7509                 jne 0x40ebb1
// 0040eba8  b803400080           mov eax, 0x80004003
// 0040ebad  5e                   pop esi
// 0040ebae  c21000               ret 0x10
// 0040ebb1  33c0                 xor eax, eax
// 0040ebb3  39054027b000         cmp dword ptr [0xb02740], eax
// 0040ebb9  750f                 jne 0x40ebca
// 0040ebbb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040ebbf  50                   push eax
// 0040ebc0  b93427b000           mov ecx, 0xb02734
// 0040ebc5  e8667fffff           call 0x406b30
// 0040ebca  8b0d4027b000         mov ecx, dword ptr [0xb02740]
// 0040ebd0  890e                 mov dword ptr [esi], ecx
// 0040ebd2  8b0d4027b000         mov ecx, dword ptr [0xb02740]
// 0040ebd8  85c9                 test ecx, ecx
// 0040ebda  740a                 je 0x40ebe6
// 0040ebdc  8b11                 mov edx, dword ptr [ecx]
// 0040ebde  8b4204               mov eax, dword ptr [edx + 4]
// 0040ebe1  51                   push ecx
// 0040ebe2  ffd0                 call eax
// 0040ebe4  33c0                 xor eax, eax
// 0040ebe6  5e                   pop esi
// 0040ebe7  c21000               ret 0x10
// copied from an identical function in another client (function ?GetTypeInfo@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJIKPAPAUITypeInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp