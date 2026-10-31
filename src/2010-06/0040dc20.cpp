// roc 2010-06 0040dc20  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040dc20
//
// 0040dc20  6aff                 push -1
// 0040dc22  68abe29700           push 0x97e2ab
// 0040dc27  64a100000000         mov eax, dword ptr fs:[0]
// 0040dc2d  50                   push eax
// 0040dc2e  64892500000000       mov dword ptr fs:[0], esp
// 0040dc35  51                   push ecx
// 0040dc36  57                   push edi
// 0040dc37  8bf9                 mov edi, ecx
// 0040dc39  897c2404             mov dword ptr [esp + 4], edi
// 0040dc3d  f6471402             test byte ptr [edi + 0x14], 2
// 0040dc41  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040dc49  742c                 je 0x40dc77
// 0040dc4b  56                   push esi
// 0040dc4c  8b7708               mov esi, dword ptr [edi + 8]
// 0040dc4f  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0040dc52  7416                 je 0x40dc6a
// 0040dc54  8b06                 mov eax, dword ptr [esi]
// 0040dc56  85c0                 test eax, eax
// 0040dc58  7408                 je 0x40dc62
// 0040dc5a  8b08                 mov ecx, dword ptr [eax]
// 0040dc5c  8b5108               mov edx, dword ptr [ecx + 8]
// 0040dc5f  50                   push eax
// 0040dc60  ffd2                 call edx
// 0040dc62  83c608               add esi, 8
// 0040dc65  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0040dc68  75ea                 jne 0x40dc54
// 0040dc6a  8b4708               mov eax, dword ptr [edi + 8]
// 0040dc6d  50                   push eax
// 0040dc6e  e8d39f3900           call 0x7a7c46
// 0040dc73  83c404               add esp, 4
// 0040dc76  5e                   pop esi
// 0040dc77  8b7f04               mov edi, dword ptr [edi + 4]
// 0040dc7a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0040dc82  85ff                 test edi, edi
// 0040dc84  7408                 je 0x40dc8e
// 0040dc86  8b07                 mov eax, dword ptr [edi]
// 0040dc88  8b4808               mov ecx, dword ptr [eax + 8]
// 0040dc8b  57                   push edi
// 0040dc8c  ffd1                 call ecx
// 0040dc8e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040dc92  5f                   pop edi
// 0040dc93  64890d00000000       mov dword ptr fs:[0], ecx
// 0040dc9a  83c410               add esp, 0x10
// 0040dc9d  c3                   ret 
// copied from an identical function in another client (function ??1?$CComEnumImpl@UIEnumConnections@@$1?_GUID_b196b287_bab4_101a_b69c_00aa00341d07@@3U__s_GUID@@BUtagCONNECTDATA@@V?$_Copy@UtagCONNECTDATA@@@ATL@@@ATL@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp