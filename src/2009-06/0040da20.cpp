// roc 2009-06 0040da20  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040da20
//
// 0040da20  6aff                 push -1
// 0040da22  685bd48400           push 0x84d45b
// 0040da27  64a100000000         mov eax, dword ptr fs:[0]
// 0040da2d  50                   push eax
// 0040da2e  64892500000000       mov dword ptr fs:[0], esp
// 0040da35  51                   push ecx
// 0040da36  57                   push edi
// 0040da37  8bf9                 mov edi, ecx
// 0040da39  897c2404             mov dword ptr [esp + 4], edi
// 0040da3d  f6471402             test byte ptr [edi + 0x14], 2
// 0040da41  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040da49  742c                 je 0x40da77
// 0040da4b  56                   push esi
// 0040da4c  8b7708               mov esi, dword ptr [edi + 8]
// 0040da4f  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0040da52  7416                 je 0x40da6a
// 0040da54  8b06                 mov eax, dword ptr [esi]
// 0040da56  85c0                 test eax, eax
// 0040da58  7408                 je 0x40da62
// 0040da5a  8b08                 mov ecx, dword ptr [eax]
// 0040da5c  8b5108               mov edx, dword ptr [ecx + 8]
// 0040da5f  50                   push eax
// 0040da60  ffd2                 call edx
// 0040da62  83c608               add esi, 8
// 0040da65  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0040da68  75ea                 jne 0x40da54
// 0040da6a  8b4708               mov eax, dword ptr [edi + 8]
// 0040da6d  50                   push eax
// 0040da6e  e86bb23000           call 0x718cde
// 0040da73  83c404               add esp, 4
// 0040da76  5e                   pop esi
// 0040da77  8b7f04               mov edi, dword ptr [edi + 4]
// 0040da7a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0040da82  85ff                 test edi, edi
// 0040da84  7408                 je 0x40da8e
// 0040da86  8b07                 mov eax, dword ptr [edi]
// 0040da88  8b4808               mov ecx, dword ptr [eax + 8]
// 0040da8b  57                   push edi
// 0040da8c  ffd1                 call ecx
// 0040da8e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040da92  5f                   pop edi
// 0040da93  64890d00000000       mov dword ptr fs:[0], ecx
// 0040da9a  83c410               add esp, 0x10
// 0040da9d  c3                   ret 
// copied from an identical function in another client (function ??1?$CComEnumImpl@UIEnumConnections@@$1?_GUID_b196b287_bab4_101a_b69c_00aa00341d07@@3U__s_GUID@@BUtagCONNECTDATA@@V?$_Copy@UtagCONNECTDATA@@@ATL@@@ATL@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp