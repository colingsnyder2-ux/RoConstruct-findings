// roc 2010-06 0040e2e0  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040e2e0
//
// 0040e2e0  6aff                 push -1
// 0040e2e2  68abe29700           push 0x97e2ab
// 0040e2e7  64a100000000         mov eax, dword ptr fs:[0]
// 0040e2ed  50                   push eax
// 0040e2ee  64892500000000       mov dword ptr fs:[0], esp
// 0040e2f5  51                   push ecx
// 0040e2f6  57                   push edi
// 0040e2f7  8bf9                 mov edi, ecx
// 0040e2f9  897c2404             mov dword ptr [esp + 4], edi
// 0040e2fd  f6471402             test byte ptr [edi + 0x14], 2
// 0040e301  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040e309  742c                 je 0x40e337
// 0040e30b  56                   push esi
// 0040e30c  8b7708               mov esi, dword ptr [edi + 8]
// 0040e30f  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0040e312  7416                 je 0x40e32a
// 0040e314  8b06                 mov eax, dword ptr [esi]
// 0040e316  85c0                 test eax, eax
// 0040e318  7408                 je 0x40e322
// 0040e31a  8b08                 mov ecx, dword ptr [eax]
// 0040e31c  8b5108               mov edx, dword ptr [ecx + 8]
// 0040e31f  50                   push eax
// 0040e320  ffd2                 call edx
// 0040e322  83c604               add esi, 4
// 0040e325  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0040e328  75ea                 jne 0x40e314
// 0040e32a  8b4708               mov eax, dword ptr [edi + 8]
// 0040e32d  50                   push eax
// 0040e32e  e813993900           call 0x7a7c46
// 0040e333  83c404               add esp, 4
// 0040e336  5e                   pop esi
// 0040e337  8b7f04               mov edi, dword ptr [edi + 4]
// 0040e33a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0040e342  85ff                 test edi, edi
// 0040e344  7408                 je 0x40e34e
// 0040e346  8b07                 mov eax, dword ptr [edi]
// 0040e348  8b4808               mov ecx, dword ptr [eax + 8]
// 0040e34b  57                   push edi
// 0040e34c  ffd1                 call ecx
// 0040e34e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040e352  5f                   pop edi
// 0040e353  64890d00000000       mov dword ptr fs:[0], ecx
// 0040e35a  83c410               add esp, 0x10
// 0040e35d  c3                   ret 
// copied from an identical function in another client (function ??1?$CComEnumImpl@UIEnumUnknown@@$1?_GUID_00000100_0000_0000_c000_000000000046@@3U__s_GUID@@BPAUIUnknown@@V?$_CopyInterface@UIUnknown@@@ATL@@@ATL@@UAE@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp