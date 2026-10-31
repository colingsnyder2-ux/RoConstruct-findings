// roc 2010-06 00458d00  unit: VCWorkspace::?$CComObject  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00458d00
//
// 00458d00  6aff                 push -1
// 00458d02  68a8859a00           push 0x9a85a8
// 00458d07  64a100000000         mov eax, dword ptr fs:[0]
// 00458d0d  50                   push eax
// 00458d0e  64892500000000       mov dword ptr fs:[0], esp
// 00458d15  51                   push ecx
// 00458d16  56                   push esi
// 00458d17  57                   push edi
// 00458d18  8bf9                 mov edi, ecx
// 00458d1a  8b442424             mov eax, dword ptr [esp + 0x24]
// 00458d1e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00458d22  50                   push eax
// 00458d23  83ec08               sub esp, 8
// 00458d26  8bc4                 mov eax, esp
// 00458d28  8908                 mov dword ptr [eax], ecx
// 00458d2a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00458d2e  895004               mov dword ptr [eax + 4], edx
// 00458d31  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00458d35  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00458d3d  89642414             mov dword ptr [esp + 0x14], esp
// 00458d41  85c0                 test eax, eax
// 00458d43  740c                 je 0x458d51
// 00458d45  83c004               add eax, 4
// 00458d48  b901000000           mov ecx, 1
// 00458d4d  f00fc108             lock xadd dword ptr [eax], ecx
// 00458d51  8bcf                 mov ecx, edi
// 00458d53  e8e8292000           call 0x65b740
// 00458d58  8b742420             mov esi, dword ptr [esp + 0x20]
// 00458d5c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00458d64  85f6                 test esi, esi
// 00458d66  742a                 je 0x458d92
// 00458d68  8d5604               lea edx, [esi + 4]
// 00458d6b  83c8ff               or eax, 0xffffffff
// 00458d6e  f00fc102             lock xadd dword ptr [edx], eax
// 00458d72  751e                 jne 0x458d92
// 00458d74  8b16                 mov edx, dword ptr [esi]
// 00458d76  8b4204               mov eax, dword ptr [edx + 4]
// 00458d79  8bce                 mov ecx, esi
// 00458d7b  ffd0                 call eax
// 00458d7d  8d4e08               lea ecx, [esi + 8]
// 00458d80  83caff               or edx, 0xffffffff
// 00458d83  f00fc111             lock xadd dword ptr [ecx], edx
// 00458d87  7509                 jne 0x458d92
// 00458d89  8b06                 mov eax, dword ptr [esi]
// 00458d8b  8b5008               mov edx, dword ptr [eax + 8]
// 00458d8e  8bce                 mov ecx, esi
// 00458d90  ffd2                 call edx
// 00458d92  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00458d96  8bc7                 mov eax, edi
// 00458d98  5f                   pop edi
// 00458d99  64890d00000000       mov dword ptr fs:[0], ecx
// 00458da0  5e                   pop esi
// 00458da1  83c410               add esp, 0x10
// 00458da4  c20c00               ret 0xc
// copied from an identical function in another client (function ??0?$list2@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@_bi@boost@@V?$value@P8CLuaHtmlView@@AEXXZ@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@12@V?$value@P8CLuaHtmlView@@AEXXZ@12@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: boost-1.35.0-dll roc_espeon_dhtmlnativefunction034ab6d87e50f0c3f.cpp