// roc 2012-06 00749290  unit: RBX::ContentProvider  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00749290
//
// 00749290  6aff                 push -1
// 00749292  6898dea900           push 0xa9de98
// 00749297  64a100000000         mov eax, dword ptr fs:[0]
// 0074929d  50                   push eax
// 0074929e  64892500000000       mov dword ptr fs:[0], esp
// 007492a5  51                   push ecx
// 007492a6  56                   push esi
// 007492a7  57                   push edi
// 007492a8  8bf9                 mov edi, ecx
// 007492aa  897c2408             mov dword ptr [esp + 8], edi
// 007492ae  8b770c               mov esi, dword ptr [edi + 0xc]
// 007492b1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007492b9  85f6                 test esi, esi
// 007492bb  742a                 je 0x7492e7
// 007492bd  8d4604               lea eax, [esi + 4]
// 007492c0  83c9ff               or ecx, 0xffffffff
// 007492c3  f00fc108             lock xadd dword ptr [eax], ecx
// 007492c7  751e                 jne 0x7492e7
// 007492c9  8b16                 mov edx, dword ptr [esi]
// 007492cb  8b4204               mov eax, dword ptr [edx + 4]
// 007492ce  8bce                 mov ecx, esi
// 007492d0  ffd0                 call eax
// 007492d2  8d4e08               lea ecx, [esi + 8]
// 007492d5  83caff               or edx, 0xffffffff
// 007492d8  f00fc111             lock xadd dword ptr [ecx], edx
// 007492dc  7509                 jne 0x7492e7
// 007492de  8b06                 mov eax, dword ptr [esi]
// 007492e0  8b5008               mov edx, dword ptr [eax + 8]
// 007492e3  8bce                 mov ecx, esi
// 007492e5  ffd2                 call edx
// 007492e7  8b7704               mov esi, dword ptr [edi + 4]
// 007492ea  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007492f2  85f6                 test esi, esi
// 007492f4  742a                 je 0x749320
// 007492f6  8d4604               lea eax, [esi + 4]
// 007492f9  83c9ff               or ecx, 0xffffffff
// 007492fc  f00fc108             lock xadd dword ptr [eax], ecx
// 00749300  751e                 jne 0x749320
// 00749302  8b16                 mov edx, dword ptr [esi]
// 00749304  8b4204               mov eax, dword ptr [edx + 4]
// 00749307  8bce                 mov ecx, esi
// 00749309  ffd0                 call eax
// 0074930b  8d4e08               lea ecx, [esi + 8]
// 0074930e  83caff               or edx, 0xffffffff
// 00749311  f00fc111             lock xadd dword ptr [ecx], edx
// 00749315  7509                 jne 0x749320
// 00749317  8b06                 mov eax, dword ptr [esi]
// 00749319  8b5008               mov edx, dword ptr [eax + 8]
// 0074931c  8bce                 mov ecx, esi
// 0074931e  ffd2                 call edx
// 00749320  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00749324  5f                   pop edi
// 00749325  5e                   pop esi
// 00749326  64890d00000000       mov dword ptr fs:[0], ecx
// 0074932d  83c410               add esp, 0x10
// 00749330  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??1?$storage2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
