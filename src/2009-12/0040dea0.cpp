// roc 2009-12 0040dea0  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040dea0
//
// 0040dea0  6aff                 push -1
// 0040dea2  682b799200           push 0x92792b
// 0040dea7  64a100000000         mov eax, dword ptr fs:[0]
// 0040dead  50                   push eax
// 0040deae  64892500000000       mov dword ptr fs:[0], esp
// 0040deb5  51                   push ecx
// 0040deb6  57                   push edi
// 0040deb7  8bf9                 mov edi, ecx
// 0040deb9  897c2404             mov dword ptr [esp + 4], edi
// 0040debd  f6471402             test byte ptr [edi + 0x14], 2
// 0040dec1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040dec9  742c                 je 0x40def7
// 0040decb  56                   push esi
// 0040decc  8b7708               mov esi, dword ptr [edi + 8]
// 0040decf  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0040ded2  7416                 je 0x40deea
// 0040ded4  8b06                 mov eax, dword ptr [esi]
// 0040ded6  85c0                 test eax, eax
// 0040ded8  7408                 je 0x40dee2
// 0040deda  8b08                 mov ecx, dword ptr [eax]
// 0040dedc  8b5108               mov edx, dword ptr [ecx + 8]
// 0040dedf  50                   push eax
// 0040dee0  ffd2                 call edx
// 0040dee2  83c604               add esi, 4
// 0040dee5  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0040dee8  75ea                 jne 0x40ded4
// 0040deea  8b4708               mov eax, dword ptr [edi + 8]
// 0040deed  50                   push eax
// 0040deee  e8135c3e00           call 0x7f3b06
// 0040def3  83c404               add esp, 4
// 0040def6  5e                   pop esi
// 0040def7  8b7f04               mov edi, dword ptr [edi + 4]
// 0040defa  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0040df02  85ff                 test edi, edi
// 0040df04  7408                 je 0x40df0e
// 0040df06  8b07                 mov eax, dword ptr [edi]
// 0040df08  8b4808               mov ecx, dword ptr [eax + 8]
// 0040df0b  57                   push edi
// 0040df0c  ffd1                 call ecx
// 0040df0e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040df12  5f                   pop edi
// 0040df13  64890d00000000       mov dword ptr fs:[0], ecx
// 0040df1a  83c410               add esp, 0x10
// 0040df1d  c3                   ret 
// copied from an identical function in another client (function ??1?$CComEnumImpl@UIEnumUnknown@@$1?_GUID_00000100_0000_0000_c000_000000000046@@3U__s_GUID@@BPAUIUnknown@@V?$_CopyInterface@UIUnknown@@@ATL@@@ATL@@UAE@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp