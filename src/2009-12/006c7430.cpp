// roc 2009-12 006c7430  unit: RBX::IStepped  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c7430
//
// 006c7430  6aff                 push -1
// 006c7432  68089a9400           push 0x949a08
// 006c7437  64a100000000         mov eax, dword ptr fs:[0]
// 006c743d  50                   push eax
// 006c743e  64892500000000       mov dword ptr fs:[0], esp
// 006c7445  51                   push ecx
// 006c7446  56                   push esi
// 006c7447  57                   push edi
// 006c7448  8bf9                 mov edi, ecx
// 006c744a  8b442424             mov eax, dword ptr [esp + 0x24]
// 006c744e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006c7452  50                   push eax
// 006c7453  83ec08               sub esp, 8
// 006c7456  8bc4                 mov eax, esp
// 006c7458  8908                 mov dword ptr [eax], ecx
// 006c745a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006c745e  895004               mov dword ptr [eax + 4], edx
// 006c7461  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006c7465  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006c746d  89642414             mov dword ptr [esp + 0x14], esp
// 006c7471  85c0                 test eax, eax
// 006c7473  740c                 je 0x6c7481
// 006c7475  83c004               add eax, 4
// 006c7478  b901000000           mov ecx, 1
// 006c747d  f00fc108             lock xadd dword ptr [eax], ecx
// 006c7481  8bcf                 mov ecx, edi
// 006c7483  e8989a0900           call 0x760f20
// 006c7488  8b742420             mov esi, dword ptr [esp + 0x20]
// 006c748c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006c7494  85f6                 test esi, esi
// 006c7496  742a                 je 0x6c74c2
// 006c7498  8d5604               lea edx, [esi + 4]
// 006c749b  83c8ff               or eax, 0xffffffff
// 006c749e  f00fc102             lock xadd dword ptr [edx], eax
// 006c74a2  751e                 jne 0x6c74c2
// 006c74a4  8b16                 mov edx, dword ptr [esi]
// 006c74a6  8b4204               mov eax, dword ptr [edx + 4]
// 006c74a9  8bce                 mov ecx, esi
// 006c74ab  ffd0                 call eax
// 006c74ad  8d4e08               lea ecx, [esi + 8]
// 006c74b0  83caff               or edx, 0xffffffff
// 006c74b3  f00fc111             lock xadd dword ptr [ecx], edx
// 006c74b7  7509                 jne 0x6c74c2
// 006c74b9  8b06                 mov eax, dword ptr [esi]
// 006c74bb  8b5008               mov edx, dword ptr [eax + 8]
// 006c74be  8bce                 mov ecx, esi
// 006c74c0  ffd2                 call edx
// 006c74c2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c74c6  8bc7                 mov eax, edi
// 006c74c8  5f                   pop edi
// 006c74c9  64890d00000000       mov dword ptr fs:[0], ecx
// 006c74d0  5e                   pop esi
// 006c74d1  83c410               add esp, 0x10
// 006c74d4  c20c00               ret 0xc
// copied from an identical function in another client (function ??0?$list2@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@_bi@boost@@V?$value@P8CLuaHtmlView@@AEXXZ@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VDHTMLWindowService@@@boost@@@12@V?$value@P8CLuaHtmlView@@AEXXZ@12@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: boost-1.35.0-dll roc_espeon_dhtmlnativefunction034ab6d87e50f0c3f.cpp