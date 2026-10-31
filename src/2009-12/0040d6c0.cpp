// roc 2009-12 0040d6c0  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040d6c0
//
// 0040d6c0  83ec10               sub esp, 0x10
// 0040d6c3  53                   push ebx
// 0040d6c4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0040d6c8  56                   push esi
// 0040d6c9  85db                 test ebx, ebx
// 0040d6cb  7406                 je 0x40d6d3
// 0040d6cd  c70300000000         mov dword ptr [ebx], 0
// 0040d6d3  8b742420             mov esi, dword ptr [esp + 0x20]
// 0040d6d7  85f6                 test esi, esi
// 0040d6d9  0f8491000000         je 0x40d770
// 0040d6df  85db                 test ebx, ebx
// 0040d6e1  0f8489000000         je 0x40d770
// 0040d6e7  57                   push edi
// 0040d6e8  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0040d6ec  8b07                 mov eax, dword ptr [edi]
// 0040d6ee  8b500c               mov edx, dword ptr [eax + 0xc]
// 0040d6f1  8d4c240c             lea ecx, [esp + 0xc]
// 0040d6f5  51                   push ecx
// 0040d6f6  57                   push edi
// 0040d6f7  ffd2                 call edx
// 0040d6f9  8b06                 mov eax, dword ptr [esi]
// 0040d6fb  8b00                 mov eax, dword ptr [eax]
// 0040d6fd  8d4c2428             lea ecx, [esp + 0x28]
// 0040d701  51                   push ecx
// 0040d702  8d542410             lea edx, [esp + 0x10]
// 0040d706  52                   push edx
// 0040d707  56                   push esi
// 0040d708  ffd0                 call eax
// 0040d70a  8bf0                 mov esi, eax
// 0040d70c  85f6                 test esi, esi
// 0040d70e  7c42                 jl 0x40d752
// 0040d710  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0040d714  51                   push ecx
// 0040d715  8d4f04               lea ecx, [edi + 4]
// 0040d718  e863feffff           call 0x40d580
// 0040d71d  8903                 mov dword ptr [ebx], eax
// 0040d71f  f7d8                 neg eax
// 0040d721  1bc0                 sbb eax, eax
// 0040d723  25fffdfb7f           and eax, 0x7ffbfdff
// 0040d728  0501020480           add eax, 0x80040201
// 0040d72d  8bf0                 mov esi, eax
// 0040d72f  740c                 je 0x40d73d
// 0040d731  8b442428             mov eax, dword ptr [esp + 0x28]
// 0040d735  8b10                 mov edx, dword ptr [eax]
// 0040d737  50                   push eax
// 0040d738  8b4208               mov eax, dword ptr [edx + 8]
// 0040d73b  ffd0                 call eax
// 0040d73d  85f6                 test esi, esi
// 0040d73f  7d06                 jge 0x40d747
// 0040d741  c70300000000         mov dword ptr [ebx], 0
// 0040d747  5f                   pop edi
// 0040d748  8bc6                 mov eax, esi
// 0040d74a  5e                   pop esi
// 0040d74b  5b                   pop ebx
// 0040d74c  83c410               add esp, 0x10
// 0040d74f  c20c00               ret 0xc
// 0040d752  81fe02400080         cmp esi, 0x80004002
// 0040d758  75e3                 jne 0x40d73d
// 0040d75a  be02020480           mov esi, 0x80040202
// 0040d75f  5f                   pop edi
// 0040d760  8bc6                 mov eax, esi
// 0040d762  5e                   pop esi
// 0040d763  c70300000000         mov dword ptr [ebx], 0
// 0040d769  5b                   pop ebx
// 0040d76a  83c410               add esp, 0x10
// 0040d76d  c20c00               ret 0xc
// 0040d770  5e                   pop esi
// 0040d771  b803400080           mov eax, 0x80004003
// 0040d776  5b                   pop ebx
// 0040d777  83c410               add esp, 0x10
// 0040d77a  c20c00               ret 0xc
// copied from an identical function in another client (function ?Advise@?$IConnectionPointImpl@VCBrowserViewExternal@@$1?_GUID_dd754d30_321a_45a2_a40c_75783afabfab@@3U__s_GUID@@BVCComDynamicUnkArray@ATL@@@ATL@@UAGJPAUIUnknown@@PAK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp