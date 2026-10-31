// roc 2010-06 00459720  unit: VCWorkspace::?$CComObject  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00459720
//
// 00459720  837c240800           cmp dword ptr [esp + 8], 0
// 00459725  7408                 je 0x45972f
// 00459727  b80b000280           mov eax, 0x8002000b
// 0045972c  c21000               ret 0x10
// 0045972f  56                   push esi
// 00459730  8b742414             mov esi, dword ptr [esp + 0x14]
// 00459734  85f6                 test esi, esi
// 00459736  7509                 jne 0x459741
// 00459738  b803400080           mov eax, 0x80004003
// 0045973d  5e                   pop esi
// 0045973e  c21000               ret 0x10
// 00459741  33c0                 xor eax, eax
// 00459743  3905dc2db800         cmp dword ptr [0xb82ddc], eax
// 00459749  750f                 jne 0x45975a
// 0045974b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0045974f  50                   push eax
// 00459750  b9d02db800           mov ecx, 0xb82dd0
// 00459755  e8d6d2faff           call 0x406a30
// 0045975a  8b0ddc2db800         mov ecx, dword ptr [0xb82ddc]
// 00459760  890e                 mov dword ptr [esi], ecx
// 00459762  8b0ddc2db800         mov ecx, dword ptr [0xb82ddc]
// 00459768  85c9                 test ecx, ecx
// 0045976a  740a                 je 0x459776
// 0045976c  8b11                 mov edx, dword ptr [ecx]
// 0045976e  8b4204               mov eax, dword ptr [edx + 4]
// 00459771  51                   push ecx
// 00459772  ffd0                 call eax
// 00459774  33c0                 xor eax, eax
// 00459776  5e                   pop esi
// 00459777  c21000               ret 0x10
// copied from an identical function in another client (function ?GetTypeInfo@?$IDispatchImpl@UIBrowserViewExternal@@$1?IID_IBrowserViewExternal@@3U_GUID@@B$1?LIBID_RobloxLib@@3U3@B$00$0A@VCComTypeInfoHolder@ATL@@@ATL@@UAGJIKPAPAUITypeInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp