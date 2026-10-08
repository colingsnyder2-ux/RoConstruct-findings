// roc 2012-06 004933f0  unit: CRobloxView  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004933f0
//
// 004933f0  6aff                 push -1
// 004933f2  68e852ad00           push 0xad52e8
// 004933f7  64a100000000         mov eax, dword ptr fs:[0]
// 004933fd  50                   push eax
// 004933fe  64892500000000       mov dword ptr fs:[0], esp
// 00493405  51                   push ecx
// 00493406  56                   push esi
// 00493407  8bd1                 mov edx, ecx
// 00493409  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0049340d  83ec08               sub esp, 8
// 00493410  8bc4                 mov eax, esp
// 00493412  8908                 mov dword ptr [eax], ecx
// 00493414  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00493418  894804               mov dword ptr [eax + 4], ecx
// 0049341b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0049341f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00493427  8964240c             mov dword ptr [esp + 0xc], esp
// 0049342b  85c0                 test eax, eax
// 0049342d  740c                 je 0x49343b
// 0049342f  83c004               add eax, 4
// 00493432  b901000000           mov ecx, 1
// 00493437  f00fc108             lock xadd dword ptr [eax], ecx
// 0049343b  8b4a04               mov ecx, dword ptr [edx + 4]
// 0049343e  034c2420             add ecx, dword ptr [esp + 0x20]
// 00493442  8b12                 mov edx, dword ptr [edx]
// 00493444  ffd2                 call edx
// 00493446  8b742420             mov esi, dword ptr [esp + 0x20]
// 0049344a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00493452  85f6                 test esi, esi
// 00493454  742a                 je 0x493480
// 00493456  8d4604               lea eax, [esi + 4]
// 00493459  83c9ff               or ecx, 0xffffffff
// 0049345c  f00fc108             lock xadd dword ptr [eax], ecx
// 00493460  751e                 jne 0x493480
// 00493462  8b16                 mov edx, dword ptr [esi]
// 00493464  8b4204               mov eax, dword ptr [edx + 4]
// 00493467  8bce                 mov ecx, esi
// 00493469  ffd0                 call eax
// 0049346b  8d4e08               lea ecx, [esi + 8]
// 0049346e  83caff               or edx, 0xffffffff
// 00493471  f00fc111             lock xadd dword ptr [ecx], edx
// 00493475  7509                 jne 0x493480
// 00493477  8b06                 mov eax, dword ptr [esi]
// 00493479  8b5008               mov edx, dword ptr [eax + 8]
// 0049347c  8bce                 mov ecx, esi
// 0049347e  ffd2                 call edx
// 00493480  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00493484  64890d00000000       mov dword ptr fs:[0], ecx
// 0049348b  5e                   pop esi
// 0049348c  83c410               add esp, 0x10
// 0049348f  c20c00               ret 0xc
// library rbxgs-net/IdManager.cpp (function ??R?$mf1@XVIdManager@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@QBEXPAVIdManager@RBX@@V?$shared_ptr@VInstance@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net IdManager.cpp
