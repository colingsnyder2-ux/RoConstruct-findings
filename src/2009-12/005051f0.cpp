// roc 2009-12 005051f0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::slot  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005051f0
//
// 005051f0  6aff                 push -1
// 005051f2  68089a9400           push 0x949a08
// 005051f7  64a100000000         mov eax, dword ptr fs:[0]
// 005051fd  50                   push eax
// 005051fe  64892500000000       mov dword ptr fs:[0], esp
// 00505205  51                   push ecx
// 00505206  56                   push esi
// 00505207  57                   push edi
// 00505208  8bf9                 mov edi, ecx
// 0050520a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0050520e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00505212  50                   push eax
// 00505213  83ec08               sub esp, 8
// 00505216  8bc4                 mov eax, esp
// 00505218  8908                 mov dword ptr [eax], ecx
// 0050521a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0050521e  895004               mov dword ptr [eax + 4], edx
// 00505221  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00505225  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0050522d  89642414             mov dword ptr [esp + 0x14], esp
// 00505231  85c0                 test eax, eax
// 00505233  740c                 je 0x505241
// 00505235  83c004               add eax, 4
// 00505238  b901000000           mov ecx, 1
// 0050523d  f00fc108             lock xadd dword ptr [eax], ecx
// 00505241  8bcf                 mov ecx, edi
// 00505243  e858f20000           call 0x5144a0
// 00505248  8b742420             mov esi, dword ptr [esp + 0x20]
// 0050524c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00505254  85f6                 test esi, esi
// 00505256  742a                 je 0x505282
// 00505258  8d5604               lea edx, [esi + 4]
// 0050525b  83c8ff               or eax, 0xffffffff
// 0050525e  f00fc102             lock xadd dword ptr [edx], eax
// 00505262  751e                 jne 0x505282
// 00505264  8b16                 mov edx, dword ptr [esi]
// 00505266  8b4204               mov eax, dword ptr [edx + 4]
// 00505269  8bce                 mov ecx, esi
// 0050526b  ffd0                 call eax
// 0050526d  8d4e08               lea ecx, [esi + 8]
// 00505270  83caff               or edx, 0xffffffff
// 00505273  f00fc111             lock xadd dword ptr [ecx], edx
// 00505277  7509                 jne 0x505282
// 00505279  8b06                 mov eax, dword ptr [esi]
// 0050527b  8b5008               mov edx, dword ptr [eax + 8]
// 0050527e  8bce                 mov ecx, esi
// 00505280  ffd2                 call edx
// 00505282  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00505286  8bc7                 mov eax, edi
// 00505288  5f                   pop edi
// 00505289  64890d00000000       mov dword ptr fs:[0], ecx
// 00505290  5e                   pop esi
// 00505291  83c410               add esp, 0x10
// 00505294  c20c00               ret 0xc
// copied from an identical function in another client (function ??0?$list2@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@_bi@boost@@V?$value@P8CLuaHtmlView@@AEXXZ@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@12@V?$value@P8CLuaHtmlView@@AEXXZ@12@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: boost-1.35.0-dll roc_espeon_dhtmlnativefunction034ab6d87e50f0c3f.cpp