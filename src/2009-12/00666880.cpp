// roc 2009-12 00666880  unit: VThreadLogManager::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00666880
//
// 00666880  6aff                 push -1
// 00666882  6828799400           push 0x947928
// 00666887  64a100000000         mov eax, dword ptr fs:[0]
// 0066688d  50                   push eax
// 0066688e  64892500000000       mov dword ptr fs:[0], esp
// 00666895  51                   push ecx
// 00666896  56                   push esi
// 00666897  8bd1                 mov edx, ecx
// 00666899  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066689d  83ec08               sub esp, 8
// 006668a0  8bc4                 mov eax, esp
// 006668a2  8908                 mov dword ptr [eax], ecx
// 006668a4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006668a8  894804               mov dword ptr [eax + 4], ecx
// 006668ab  8b442428             mov eax, dword ptr [esp + 0x28]
// 006668af  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006668b7  8964240c             mov dword ptr [esp + 0xc], esp
// 006668bb  85c0                 test eax, eax
// 006668bd  740c                 je 0x6668cb
// 006668bf  83c004               add eax, 4
// 006668c2  b901000000           mov ecx, 1
// 006668c7  f00fc108             lock xadd dword ptr [eax], ecx
// 006668cb  8b4a04               mov ecx, dword ptr [edx + 4]
// 006668ce  034c2420             add ecx, dword ptr [esp + 0x20]
// 006668d2  8b12                 mov edx, dword ptr [edx]
// 006668d4  ffd2                 call edx
// 006668d6  8b742420             mov esi, dword ptr [esp + 0x20]
// 006668da  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006668e2  85f6                 test esi, esi
// 006668e4  742a                 je 0x666910
// 006668e6  8d4604               lea eax, [esi + 4]
// 006668e9  83c9ff               or ecx, 0xffffffff
// 006668ec  f00fc108             lock xadd dword ptr [eax], ecx
// 006668f0  751e                 jne 0x666910
// 006668f2  8b16                 mov edx, dword ptr [esi]
// 006668f4  8b4204               mov eax, dword ptr [edx + 4]
// 006668f7  8bce                 mov ecx, esi
// 006668f9  ffd0                 call eax
// 006668fb  8d4e08               lea ecx, [esi + 8]
// 006668fe  83caff               or edx, 0xffffffff
// 00666901  f00fc111             lock xadd dword ptr [ecx], edx
// 00666905  7509                 jne 0x666910
// 00666907  8b06                 mov eax, dword ptr [esi]
// 00666909  8b5008               mov edx, dword ptr [eax + 8]
// 0066690c  8bce                 mov ecx, esi
// 0066690e  ffd2                 call edx
// 00666910  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00666914  64890d00000000       mov dword ptr fs:[0], ecx
// 0066691b  5e                   pop esi
// 0066691c  83c410               add esp, 0x10
// 0066691f  c20c00               ret 0xc
// library rbxgs-net/IdManager.cpp (function ??R?$mf1@XVIdManager@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@QBEXPAVIdManager@RBX@@V?$shared_ptr@VInstance@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net IdManager.cpp
