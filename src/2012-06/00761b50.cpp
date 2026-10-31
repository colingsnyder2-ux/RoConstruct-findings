// roc 2012-06 00761b50  unit: RBX::IStepped  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00761b50
//
// 00761b50  6aff                 push -1
// 00761b52  680869ab00           push 0xab6908
// 00761b57  64a100000000         mov eax, dword ptr fs:[0]
// 00761b5d  50                   push eax
// 00761b5e  64892500000000       mov dword ptr fs:[0], esp
// 00761b65  51                   push ecx
// 00761b66  56                   push esi
// 00761b67  57                   push edi
// 00761b68  8bf9                 mov edi, ecx
// 00761b6a  8b442424             mov eax, dword ptr [esp + 0x24]
// 00761b6e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00761b72  50                   push eax
// 00761b73  83ec08               sub esp, 8
// 00761b76  8bc4                 mov eax, esp
// 00761b78  8908                 mov dword ptr [eax], ecx
// 00761b7a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00761b7e  895004               mov dword ptr [eax + 4], edx
// 00761b81  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00761b85  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00761b8d  89642414             mov dword ptr [esp + 0x14], esp
// 00761b91  85c0                 test eax, eax
// 00761b93  740c                 je 0x761ba1
// 00761b95  83c004               add eax, 4
// 00761b98  b901000000           mov ecx, 1
// 00761b9d  f00fc108             lock xadd dword ptr [eax], ecx
// 00761ba1  8bcf                 mov ecx, edi
// 00761ba3  e8087bcdff           call 0x4396b0
// 00761ba8  8b742420             mov esi, dword ptr [esp + 0x20]
// 00761bac  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00761bb4  85f6                 test esi, esi
// 00761bb6  742a                 je 0x761be2
// 00761bb8  8d5604               lea edx, [esi + 4]
// 00761bbb  83c8ff               or eax, 0xffffffff
// 00761bbe  f00fc102             lock xadd dword ptr [edx], eax
// 00761bc2  751e                 jne 0x761be2
// 00761bc4  8b16                 mov edx, dword ptr [esi]
// 00761bc6  8b4204               mov eax, dword ptr [edx + 4]
// 00761bc9  8bce                 mov ecx, esi
// 00761bcb  ffd0                 call eax
// 00761bcd  8d4e08               lea ecx, [esi + 8]
// 00761bd0  83caff               or edx, 0xffffffff
// 00761bd3  f00fc111             lock xadd dword ptr [ecx], edx
// 00761bd7  7509                 jne 0x761be2
// 00761bd9  8b06                 mov eax, dword ptr [esi]
// 00761bdb  8b5008               mov edx, dword ptr [eax + 8]
// 00761bde  8bce                 mov ecx, esi
// 00761be0  ffd2                 call edx
// 00761be2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00761be6  8bc7                 mov eax, edi
// 00761be8  5f                   pop edi
// 00761be9  64890d00000000       mov dword ptr fs:[0], ecx
// 00761bf0  5e                   pop esi
// 00761bf1  83c410               add esp, 0x10
// 00761bf4  c20c00               ret 0xc
// copied from an identical function in another client (function ??0?$list2@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@_bi@boost@@V?$value@P8CLuaHtmlView@@AEXXZ@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@12@V?$value@P8CLuaHtmlView@@AEXXZ@12@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: boost-1.35.0-dll roc_espeon_dhtmlnativefunction034ab6d87e50f0c3f.cpp