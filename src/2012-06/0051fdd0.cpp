// roc 2012-06 0051fdd0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0051fdd0
//
// 0051fdd0  6aff                 push -1
// 0051fdd2  680869ab00           push 0xab6908
// 0051fdd7  64a100000000         mov eax, dword ptr fs:[0]
// 0051fddd  50                   push eax
// 0051fdde  64892500000000       mov dword ptr fs:[0], esp
// 0051fde5  51                   push ecx
// 0051fde6  56                   push esi
// 0051fde7  57                   push edi
// 0051fde8  8bf9                 mov edi, ecx
// 0051fdea  8b442424             mov eax, dword ptr [esp + 0x24]
// 0051fdee  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051fdf2  50                   push eax
// 0051fdf3  83ec08               sub esp, 8
// 0051fdf6  8bc4                 mov eax, esp
// 0051fdf8  8908                 mov dword ptr [eax], ecx
// 0051fdfa  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0051fdfe  895004               mov dword ptr [eax + 4], edx
// 0051fe01  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0051fe05  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0051fe0d  89642414             mov dword ptr [esp + 0x14], esp
// 0051fe11  85c0                 test eax, eax
// 0051fe13  740c                 je 0x51fe21
// 0051fe15  83c004               add eax, 4
// 0051fe18  b901000000           mov ecx, 1
// 0051fe1d  f00fc108             lock xadd dword ptr [eax], ecx
// 0051fe21  8bcf                 mov ecx, edi
// 0051fe23  e8d8e2ffff           call 0x51e100
// 0051fe28  8b742420             mov esi, dword ptr [esp + 0x20]
// 0051fe2c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0051fe34  85f6                 test esi, esi
// 0051fe36  742a                 je 0x51fe62
// 0051fe38  8d5604               lea edx, [esi + 4]
// 0051fe3b  83c8ff               or eax, 0xffffffff
// 0051fe3e  f00fc102             lock xadd dword ptr [edx], eax
// 0051fe42  751e                 jne 0x51fe62
// 0051fe44  8b16                 mov edx, dword ptr [esi]
// 0051fe46  8b4204               mov eax, dword ptr [edx + 4]
// 0051fe49  8bce                 mov ecx, esi
// 0051fe4b  ffd0                 call eax
// 0051fe4d  8d4e08               lea ecx, [esi + 8]
// 0051fe50  83caff               or edx, 0xffffffff
// 0051fe53  f00fc111             lock xadd dword ptr [ecx], edx
// 0051fe57  7509                 jne 0x51fe62
// 0051fe59  8b06                 mov eax, dword ptr [esi]
// 0051fe5b  8b5008               mov edx, dword ptr [eax + 8]
// 0051fe5e  8bce                 mov ecx, esi
// 0051fe60  ffd2                 call edx
// 0051fe62  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051fe66  8bc7                 mov eax, edi
// 0051fe68  5f                   pop edi
// 0051fe69  64890d00000000       mov dword ptr fs:[0], ecx
// 0051fe70  5e                   pop esi
// 0051fe71  83c410               add esp, 0x10
// 0051fe74  c20c00               ret 0xc
// copied from an identical function in another client (function ??0?$list2@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@_bi@boost@@V?$value@P8CLuaHtmlView@@AEXXZ@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@12@V?$value@P8CLuaHtmlView@@AEXXZ@12@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: boost-1.35.0-dll roc_espeon_dhtmlnativefunction034ab6d87e50f0c3f.cpp