// roc 2010-06 0040db20  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040db20
//
// 0040db20  83ec10               sub esp, 0x10
// 0040db23  53                   push ebx
// 0040db24  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0040db28  56                   push esi
// 0040db29  85db                 test ebx, ebx
// 0040db2b  7406                 je 0x40db33
// 0040db2d  c70300000000         mov dword ptr [ebx], 0
// 0040db33  8b742420             mov esi, dword ptr [esp + 0x20]
// 0040db37  85f6                 test esi, esi
// 0040db39  0f8491000000         je 0x40dbd0
// 0040db3f  85db                 test ebx, ebx
// 0040db41  0f8489000000         je 0x40dbd0
// 0040db47  57                   push edi
// 0040db48  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0040db4c  8b07                 mov eax, dword ptr [edi]
// 0040db4e  8b500c               mov edx, dword ptr [eax + 0xc]
// 0040db51  8d4c240c             lea ecx, [esp + 0xc]
// 0040db55  51                   push ecx
// 0040db56  57                   push edi
// 0040db57  ffd2                 call edx
// 0040db59  8b06                 mov eax, dword ptr [esi]
// 0040db5b  8b00                 mov eax, dword ptr [eax]
// 0040db5d  8d4c2428             lea ecx, [esp + 0x28]
// 0040db61  51                   push ecx
// 0040db62  8d542410             lea edx, [esp + 0x10]
// 0040db66  52                   push edx
// 0040db67  56                   push esi
// 0040db68  ffd0                 call eax
// 0040db6a  8bf0                 mov esi, eax
// 0040db6c  85f6                 test esi, esi
// 0040db6e  7c42                 jl 0x40dbb2
// 0040db70  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0040db74  51                   push ecx
// 0040db75  8d4f04               lea ecx, [edi + 4]
// 0040db78  e863feffff           call 0x40d9e0
// 0040db7d  8903                 mov dword ptr [ebx], eax
// 0040db7f  f7d8                 neg eax
// 0040db81  1bc0                 sbb eax, eax
// 0040db83  25fffdfb7f           and eax, 0x7ffbfdff
// 0040db88  0501020480           add eax, 0x80040201
// 0040db8d  8bf0                 mov esi, eax
// 0040db8f  740c                 je 0x40db9d
// 0040db91  8b442428             mov eax, dword ptr [esp + 0x28]
// 0040db95  8b10                 mov edx, dword ptr [eax]
// 0040db97  50                   push eax
// 0040db98  8b4208               mov eax, dword ptr [edx + 8]
// 0040db9b  ffd0                 call eax
// 0040db9d  85f6                 test esi, esi
// 0040db9f  7d06                 jge 0x40dba7
// 0040dba1  c70300000000         mov dword ptr [ebx], 0
// 0040dba7  5f                   pop edi
// 0040dba8  8bc6                 mov eax, esi
// 0040dbaa  5e                   pop esi
// 0040dbab  5b                   pop ebx
// 0040dbac  83c410               add esp, 0x10
// 0040dbaf  c20c00               ret 0xc
// 0040dbb2  81fe02400080         cmp esi, 0x80004002
// 0040dbb8  75e3                 jne 0x40db9d
// 0040dbba  be02020480           mov esi, 0x80040202
// 0040dbbf  5f                   pop edi
// 0040dbc0  8bc6                 mov eax, esi
// 0040dbc2  5e                   pop esi
// 0040dbc3  c70300000000         mov dword ptr [ebx], 0
// 0040dbc9  5b                   pop ebx
// 0040dbca  83c410               add esp, 0x10
// 0040dbcd  c20c00               ret 0xc
// 0040dbd0  5e                   pop esi
// 0040dbd1  b803400080           mov eax, 0x80004003
// 0040dbd6  5b                   pop ebx
// 0040dbd7  83c410               add esp, 0x10
// 0040dbda  c20c00               ret 0xc
// copied from an identical function in another client (function ?Advise@?$IConnectionPointImpl@VCBrowserViewExternal@@$1?_GUID_dd754d30_321a_45a2_a40c_75783afabfab@@3U__s_GUID@@BVCComDynamicUnkArray@ATL@@@ATL@@UAGJPAUIUnknown@@PAK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp