// roc 2011-06 0065edf0  unit: RBX::VExplosion::?$FactoryProduct  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0065edf0
//
// 0065edf0  6aff                 push -1
// 0065edf2  68585f9d00           push 0x9d5f58
// 0065edf7  64a100000000         mov eax, dword ptr fs:[0]
// 0065edfd  50                   push eax
// 0065edfe  64892500000000       mov dword ptr fs:[0], esp
// 0065ee05  51                   push ecx
// 0065ee06  56                   push esi
// 0065ee07  57                   push edi
// 0065ee08  8bf9                 mov edi, ecx
// 0065ee0a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0065ee0e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065ee12  50                   push eax
// 0065ee13  83ec08               sub esp, 8
// 0065ee16  8bc4                 mov eax, esp
// 0065ee18  8908                 mov dword ptr [eax], ecx
// 0065ee1a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0065ee1e  895004               mov dword ptr [eax + 4], edx
// 0065ee21  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0065ee25  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0065ee2d  89642414             mov dword ptr [esp + 0x14], esp
// 0065ee31  85c0                 test eax, eax
// 0065ee33  740c                 je 0x65ee41
// 0065ee35  83c004               add eax, 4
// 0065ee38  b901000000           mov ecx, 1
// 0065ee3d  f00fc108             lock xadd dword ptr [eax], ecx
// 0065ee41  8bcf                 mov ecx, edi
// 0065ee43  e8e84dddff           call 0x433c30
// 0065ee48  8b742420             mov esi, dword ptr [esp + 0x20]
// 0065ee4c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0065ee54  85f6                 test esi, esi
// 0065ee56  742a                 je 0x65ee82
// 0065ee58  8d5604               lea edx, [esi + 4]
// 0065ee5b  83c8ff               or eax, 0xffffffff
// 0065ee5e  f00fc102             lock xadd dword ptr [edx], eax
// 0065ee62  751e                 jne 0x65ee82
// 0065ee64  8b16                 mov edx, dword ptr [esi]
// 0065ee66  8b4204               mov eax, dword ptr [edx + 4]
// 0065ee69  8bce                 mov ecx, esi
// 0065ee6b  ffd0                 call eax
// 0065ee6d  8d4e08               lea ecx, [esi + 8]
// 0065ee70  83caff               or edx, 0xffffffff
// 0065ee73  f00fc111             lock xadd dword ptr [ecx], edx
// 0065ee77  7509                 jne 0x65ee82
// 0065ee79  8b06                 mov eax, dword ptr [esi]
// 0065ee7b  8b5008               mov edx, dword ptr [eax + 8]
// 0065ee7e  8bce                 mov ecx, esi
// 0065ee80  ffd2                 call edx
// 0065ee82  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065ee86  8bc7                 mov eax, edi
// 0065ee88  5f                   pop edi
// 0065ee89  64890d00000000       mov dword ptr fs:[0], ecx
// 0065ee90  5e                   pop esi
// 0065ee91  83c410               add esp, 0x10
// 0065ee94  c20c00               ret 0xc
// copied from an identical function in another client (function ??0?$list2@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@_bi@boost@@V?$value@P8CLuaHtmlView@@AEXXZ@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@12@V?$value@P8CLuaHtmlView@@AEXXZ@12@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: boost-1.35.0-dll roc_espeon_dhtmlnativefunction034ab6d87e50f0c3f.cpp