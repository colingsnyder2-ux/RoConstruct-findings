// roc 2010-06 00633170  unit: RBX::IStepped  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00633170
//
// 00633170  6aff                 push -1
// 00633172  68a8859a00           push 0x9a85a8
// 00633177  64a100000000         mov eax, dword ptr fs:[0]
// 0063317d  50                   push eax
// 0063317e  64892500000000       mov dword ptr fs:[0], esp
// 00633185  51                   push ecx
// 00633186  56                   push esi
// 00633187  57                   push edi
// 00633188  8bf9                 mov edi, ecx
// 0063318a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0063318e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00633192  50                   push eax
// 00633193  83ec08               sub esp, 8
// 00633196  8bc4                 mov eax, esp
// 00633198  8908                 mov dword ptr [eax], ecx
// 0063319a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0063319e  895004               mov dword ptr [eax + 4], edx
// 006331a1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006331a5  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006331ad  89642414             mov dword ptr [esp + 0x14], esp
// 006331b1  85c0                 test eax, eax
// 006331b3  740c                 je 0x6331c1
// 006331b5  83c004               add eax, 4
// 006331b8  b901000000           mov ecx, 1
// 006331bd  f00fc108             lock xadd dword ptr [eax], ecx
// 006331c1  8bcf                 mov ecx, edi
// 006331c3  e8b84eebff           call 0x4e8080
// 006331c8  8b742420             mov esi, dword ptr [esp + 0x20]
// 006331cc  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006331d4  85f6                 test esi, esi
// 006331d6  742a                 je 0x633202
// 006331d8  8d5604               lea edx, [esi + 4]
// 006331db  83c8ff               or eax, 0xffffffff
// 006331de  f00fc102             lock xadd dword ptr [edx], eax
// 006331e2  751e                 jne 0x633202
// 006331e4  8b16                 mov edx, dword ptr [esi]
// 006331e6  8b4204               mov eax, dword ptr [edx + 4]
// 006331e9  8bce                 mov ecx, esi
// 006331eb  ffd0                 call eax
// 006331ed  8d4e08               lea ecx, [esi + 8]
// 006331f0  83caff               or edx, 0xffffffff
// 006331f3  f00fc111             lock xadd dword ptr [ecx], edx
// 006331f7  7509                 jne 0x633202
// 006331f9  8b06                 mov eax, dword ptr [esi]
// 006331fb  8b5008               mov edx, dword ptr [eax + 8]
// 006331fe  8bce                 mov ecx, esi
// 00633200  ffd2                 call edx
// 00633202  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00633206  8bc7                 mov eax, edi
// 00633208  5f                   pop edi
// 00633209  64890d00000000       mov dword ptr fs:[0], ecx
// 00633210  5e                   pop esi
// 00633211  83c410               add esp, 0x10
// 00633214  c20c00               ret 0xc
// copied from an identical function in another client (function ??0?$list2@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@_bi@boost@@V?$value@P8CLuaHtmlView@@AEXXZ@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@12@V?$value@P8CLuaHtmlView@@AEXXZ@12@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: boost-1.35.0-dll roc_espeon_dhtmlnativefunction034ab6d87e50f0c3f.cpp