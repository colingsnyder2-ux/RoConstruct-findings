// roc 2011-06 00482d60  unit: HelpCommand  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00482d60
//
// 00482d60  6aff                 push -1
// 00482d62  68688d9d00           push 0x9d8d68
// 00482d67  64a100000000         mov eax, dword ptr fs:[0]
// 00482d6d  50                   push eax
// 00482d6e  64892500000000       mov dword ptr fs:[0], esp
// 00482d75  51                   push ecx
// 00482d76  56                   push esi
// 00482d77  8bd1                 mov edx, ecx
// 00482d79  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00482d7d  83ec08               sub esp, 8
// 00482d80  8bc4                 mov eax, esp
// 00482d82  8908                 mov dword ptr [eax], ecx
// 00482d84  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00482d88  894804               mov dword ptr [eax + 4], ecx
// 00482d8b  8b442428             mov eax, dword ptr [esp + 0x28]
// 00482d8f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00482d97  8964240c             mov dword ptr [esp + 0xc], esp
// 00482d9b  85c0                 test eax, eax
// 00482d9d  740c                 je 0x482dab
// 00482d9f  83c004               add eax, 4
// 00482da2  b901000000           mov ecx, 1
// 00482da7  f00fc108             lock xadd dword ptr [eax], ecx
// 00482dab  8b4a04               mov ecx, dword ptr [edx + 4]
// 00482dae  034c2420             add ecx, dword ptr [esp + 0x20]
// 00482db2  8b12                 mov edx, dword ptr [edx]
// 00482db4  ffd2                 call edx
// 00482db6  8b742420             mov esi, dword ptr [esp + 0x20]
// 00482dba  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00482dc2  85f6                 test esi, esi
// 00482dc4  742a                 je 0x482df0
// 00482dc6  8d4604               lea eax, [esi + 4]
// 00482dc9  83c9ff               or ecx, 0xffffffff
// 00482dcc  f00fc108             lock xadd dword ptr [eax], ecx
// 00482dd0  751e                 jne 0x482df0
// 00482dd2  8b16                 mov edx, dword ptr [esi]
// 00482dd4  8b4204               mov eax, dword ptr [edx + 4]
// 00482dd7  8bce                 mov ecx, esi
// 00482dd9  ffd0                 call eax
// 00482ddb  8d4e08               lea ecx, [esi + 8]
// 00482dde  83caff               or edx, 0xffffffff
// 00482de1  f00fc111             lock xadd dword ptr [ecx], edx
// 00482de5  7509                 jne 0x482df0
// 00482de7  8b06                 mov eax, dword ptr [esi]
// 00482de9  8b5008               mov edx, dword ptr [eax + 8]
// 00482dec  8bce                 mov ecx, esi
// 00482dee  ffd2                 call edx
// 00482df0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00482df4  64890d00000000       mov dword ptr fs:[0], ecx
// 00482dfb  5e                   pop esi
// 00482dfc  83c410               add esp, 0x10
// 00482dff  c20c00               ret 0xc
// library rbxgs-net/IdManager.cpp (function ??R?$mf1@XVIdManager@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@QBEXPAVIdManager@RBX@@V?$shared_ptr@VInstance@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net IdManager.cpp
