// roc 2011-06 00512730  unit: RBX::Network::ClientReplicator  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00512730
//
// 00512730  6aff                 push -1
// 00512732  68585f9d00           push 0x9d5f58
// 00512737  64a100000000         mov eax, dword ptr fs:[0]
// 0051273d  50                   push eax
// 0051273e  64892500000000       mov dword ptr fs:[0], esp
// 00512745  51                   push ecx
// 00512746  56                   push esi
// 00512747  57                   push edi
// 00512748  8bf9                 mov edi, ecx
// 0051274a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0051274e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00512752  50                   push eax
// 00512753  83ec08               sub esp, 8
// 00512756  8bc4                 mov eax, esp
// 00512758  8908                 mov dword ptr [eax], ecx
// 0051275a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0051275e  895004               mov dword ptr [eax + 4], edx
// 00512761  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00512765  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0051276d  89642414             mov dword ptr [esp + 0x14], esp
// 00512771  85c0                 test eax, eax
// 00512773  740c                 je 0x512781
// 00512775  83c004               add eax, 4
// 00512778  b901000000           mov ecx, 1
// 0051277d  f00fc108             lock xadd dword ptr [eax], ecx
// 00512781  8bcf                 mov ecx, edi
// 00512783  e868ea1100           call 0x6311f0
// 00512788  8b742420             mov esi, dword ptr [esp + 0x20]
// 0051278c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00512794  85f6                 test esi, esi
// 00512796  742a                 je 0x5127c2
// 00512798  8d5604               lea edx, [esi + 4]
// 0051279b  83c8ff               or eax, 0xffffffff
// 0051279e  f00fc102             lock xadd dword ptr [edx], eax
// 005127a2  751e                 jne 0x5127c2
// 005127a4  8b16                 mov edx, dword ptr [esi]
// 005127a6  8b4204               mov eax, dword ptr [edx + 4]
// 005127a9  8bce                 mov ecx, esi
// 005127ab  ffd0                 call eax
// 005127ad  8d4e08               lea ecx, [esi + 8]
// 005127b0  83caff               or edx, 0xffffffff
// 005127b3  f00fc111             lock xadd dword ptr [ecx], edx
// 005127b7  7509                 jne 0x5127c2
// 005127b9  8b06                 mov eax, dword ptr [esi]
// 005127bb  8b5008               mov edx, dword ptr [eax + 8]
// 005127be  8bce                 mov ecx, esi
// 005127c0  ffd2                 call edx
// 005127c2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005127c6  8bc7                 mov eax, edi
// 005127c8  5f                   pop edi
// 005127c9  64890d00000000       mov dword ptr fs:[0], ecx
// 005127d0  5e                   pop esi
// 005127d1  83c410               add esp, 0x10
// 005127d4  c20c00               ret 0xc
// copied from an identical function in another client (function ??0?$list2@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@_bi@boost@@V?$value@P8CLuaHtmlView@@AEXXZ@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@12@V?$value@P8CLuaHtmlView@@AEXXZ@12@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: boost-1.35.0-dll roc_espeon_dhtmlnativefunction034ab6d87e50f0c3f.cpp