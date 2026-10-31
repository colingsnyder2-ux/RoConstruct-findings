// roc 2009-12 0040d7c0  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040d7c0
//
// 0040d7c0  6aff                 push -1
// 0040d7c2  682b799200           push 0x92792b
// 0040d7c7  64a100000000         mov eax, dword ptr fs:[0]
// 0040d7cd  50                   push eax
// 0040d7ce  64892500000000       mov dword ptr fs:[0], esp
// 0040d7d5  51                   push ecx
// 0040d7d6  57                   push edi
// 0040d7d7  8bf9                 mov edi, ecx
// 0040d7d9  897c2404             mov dword ptr [esp + 4], edi
// 0040d7dd  f6471402             test byte ptr [edi + 0x14], 2
// 0040d7e1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040d7e9  742c                 je 0x40d817
// 0040d7eb  56                   push esi
// 0040d7ec  8b7708               mov esi, dword ptr [edi + 8]
// 0040d7ef  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0040d7f2  7416                 je 0x40d80a
// 0040d7f4  8b06                 mov eax, dword ptr [esi]
// 0040d7f6  85c0                 test eax, eax
// 0040d7f8  7408                 je 0x40d802
// 0040d7fa  8b08                 mov ecx, dword ptr [eax]
// 0040d7fc  8b5108               mov edx, dword ptr [ecx + 8]
// 0040d7ff  50                   push eax
// 0040d800  ffd2                 call edx
// 0040d802  83c608               add esi, 8
// 0040d805  3b770c               cmp esi, dword ptr [edi + 0xc]
// 0040d808  75ea                 jne 0x40d7f4
// 0040d80a  8b4708               mov eax, dword ptr [edi + 8]
// 0040d80d  50                   push eax
// 0040d80e  e8f3623e00           call 0x7f3b06
// 0040d813  83c404               add esp, 4
// 0040d816  5e                   pop esi
// 0040d817  8b7f04               mov edi, dword ptr [edi + 4]
// 0040d81a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0040d822  85ff                 test edi, edi
// 0040d824  7408                 je 0x40d82e
// 0040d826  8b07                 mov eax, dword ptr [edi]
// 0040d828  8b4808               mov ecx, dword ptr [eax + 8]
// 0040d82b  57                   push edi
// 0040d82c  ffd1                 call ecx
// 0040d82e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040d832  5f                   pop edi
// 0040d833  64890d00000000       mov dword ptr fs:[0], ecx
// 0040d83a  83c410               add esp, 0x10
// 0040d83d  c3                   ret 
// copied from an identical function in another client (function ??1?$CComEnumImpl@UIEnumConnections@@$1?_GUID_b196b287_bab4_101a_b69c_00aa00341d07@@3U__s_GUID@@BUtagCONNECTDATA@@V?$_Copy@UtagCONNECTDATA@@@ATL@@@ATL@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp