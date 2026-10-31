// roc 2012-06 0070ffa0  unit: RBX::Tool  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0070ffa0
//
// 0070ffa0  6aff                 push -1
// 0070ffa2  680869ab00           push 0xab6908
// 0070ffa7  64a100000000         mov eax, dword ptr fs:[0]
// 0070ffad  50                   push eax
// 0070ffae  64892500000000       mov dword ptr fs:[0], esp
// 0070ffb5  51                   push ecx
// 0070ffb6  56                   push esi
// 0070ffb7  57                   push edi
// 0070ffb8  8bf9                 mov edi, ecx
// 0070ffba  8b442424             mov eax, dword ptr [esp + 0x24]
// 0070ffbe  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0070ffc2  50                   push eax
// 0070ffc3  83ec08               sub esp, 8
// 0070ffc6  8bc4                 mov eax, esp
// 0070ffc8  8908                 mov dword ptr [eax], ecx
// 0070ffca  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0070ffce  895004               mov dword ptr [eax + 4], edx
// 0070ffd1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0070ffd5  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0070ffdd  89642414             mov dword ptr [esp + 0x14], esp
// 0070ffe1  85c0                 test eax, eax
// 0070ffe3  740c                 je 0x70fff1
// 0070ffe5  83c004               add eax, 4
// 0070ffe8  b901000000           mov ecx, 1
// 0070ffed  f00fc108             lock xadd dword ptr [eax], ecx
// 0070fff1  8bcf                 mov ecx, edi
// 0070fff3  e8a82ce8ff           call 0x592ca0
// 0070fff8  8b742420             mov esi, dword ptr [esp + 0x20]
// 0070fffc  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00710004  85f6                 test esi, esi
// 00710006  742a                 je 0x710032
// 00710008  8d5604               lea edx, [esi + 4]
// 0071000b  83c8ff               or eax, 0xffffffff
// 0071000e  f00fc102             lock xadd dword ptr [edx], eax
// 00710012  751e                 jne 0x710032
// 00710014  8b16                 mov edx, dword ptr [esi]
// 00710016  8b4204               mov eax, dword ptr [edx + 4]
// 00710019  8bce                 mov ecx, esi
// 0071001b  ffd0                 call eax
// 0071001d  8d4e08               lea ecx, [esi + 8]
// 00710020  83caff               or edx, 0xffffffff
// 00710023  f00fc111             lock xadd dword ptr [ecx], edx
// 00710027  7509                 jne 0x710032
// 00710029  8b06                 mov eax, dword ptr [esi]
// 0071002b  8b5008               mov edx, dword ptr [eax + 8]
// 0071002e  8bce                 mov ecx, esi
// 00710030  ffd2                 call edx
// 00710032  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00710036  8bc7                 mov eax, edi
// 00710038  5f                   pop edi
// 00710039  64890d00000000       mov dword ptr fs:[0], ecx
// 00710040  5e                   pop esi
// 00710041  83c410               add esp, 0x10
// 00710044  c20c00               ret 0xc
// copied from an identical function in another client (function ??0?$list2@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@_bi@boost@@V?$value@P8CLuaHtmlView@@AEXXZ@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@12@V?$value@P8CLuaHtmlView@@AEXXZ@12@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: boost-1.35.0-dll roc_espeon_dhtmlnativefunction034ab6d87e50f0c3f.cpp