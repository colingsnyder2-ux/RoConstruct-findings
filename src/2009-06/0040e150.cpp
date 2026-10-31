// roc 2009-06 0040e150  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040e150
//
// 0040e150  6aff                 push -1
// 0040e152  685bd48400           push 0x84d45b
// 0040e157  64a100000000         mov eax, dword ptr fs:[0]
// 0040e15d  50                   push eax
// 0040e15e  64892500000000       mov dword ptr fs:[0], esp
// 0040e165  51                   push ecx
// 0040e166  57                   push edi
// 0040e167  8bf9                 mov edi, ecx
// 0040e169  897c2404             mov dword ptr [esp + 4], edi
// 0040e16d  f6471402             test byte ptr [edi + 0x14], 2
// 0040e171  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040e179  742c                 je 0x40e1a7
// 0040e17b  56                   push esi
// 0040e17c  8b7708               mov esi, dword ptr [edi + 8]
// 0040e17f  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0040e182  7416                 je 0x40e19a
// 0040e184  8b06                 mov eax, dword ptr [esi]
// 0040e186  85c0                 test eax, eax
// 0040e188  7408                 je 0x40e192
// 0040e18a  8b08                 mov ecx, dword ptr [eax]
// 0040e18c  8b5108               mov edx, dword ptr [ecx + 8]
// 0040e18f  50                   push eax
// 0040e190  ffd2                 call edx
// 0040e192  83c604               add esi, 4
// 0040e195  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0040e198  75ea                 jne 0x40e184
// 0040e19a  8b4708               mov eax, dword ptr [edi + 8]
// 0040e19d  50                   push eax
// 0040e19e  e83bab3000           call 0x718cde
// 0040e1a3  83c404               add esp, 4
// 0040e1a6  5e                   pop esi
// 0040e1a7  8b7f04               mov edi, dword ptr [edi + 4]
// 0040e1aa  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0040e1b2  85ff                 test edi, edi
// 0040e1b4  7408                 je 0x40e1be
// 0040e1b6  8b07                 mov eax, dword ptr [edi]
// 0040e1b8  8b4808               mov ecx, dword ptr [eax + 8]
// 0040e1bb  57                   push edi
// 0040e1bc  ffd1                 call ecx
// 0040e1be  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040e1c2  5f                   pop edi
// 0040e1c3  64890d00000000       mov dword ptr fs:[0], ecx
// 0040e1ca  83c410               add esp, 0x10
// 0040e1cd  c3                   ret 
// copied from an identical function in another client (function ??1?$CComEnumImpl@UIEnumUnknown@@$1?_GUID_00000100_0000_0000_c000_000000000046@@3U__s_GUID@@BPAUIUnknown@@V?$_CopyInterface@UIUnknown@@@ATL@@@ATL@@UAE@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp