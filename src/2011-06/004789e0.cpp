// roc 2011-06 004789e0  unit: ScreenshotVerb  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004789e0
//
// 004789e0  6aff                 push -1
// 004789e2  6858949e00           push 0x9e9458
// 004789e7  64a100000000         mov eax, dword ptr fs:[0]
// 004789ed  50                   push eax
// 004789ee  64892500000000       mov dword ptr fs:[0], esp
// 004789f5  51                   push ecx
// 004789f6  56                   push esi
// 004789f7  57                   push edi
// 004789f8  8bf1                 mov esi, ecx
// 004789fa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004789fe  83ec0c               sub esp, 0xc
// 00478a01  8bc4                 mov eax, esp
// 00478a03  c70600000000         mov dword ptr [esi], 0
// 00478a09  8908                 mov dword ptr [eax], ecx
// 00478a0b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00478a0f  895004               mov dword ptr [eax + 4], edx
// 00478a12  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00478a16  894808               mov dword ptr [eax + 8], ecx
// 00478a19  8b442430             mov eax, dword ptr [esp + 0x30]
// 00478a1d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00478a25  89642414             mov dword ptr [esp + 0x14], esp
// 00478a29  85c0                 test eax, eax
// 00478a2b  740c                 je 0x478a39
// 00478a2d  83c004               add eax, 4
// 00478a30  ba01000000           mov edx, 1
// 00478a35  f00fc110             lock xadd dword ptr [eax], edx
// 00478a39  8bce                 mov ecx, esi
// 00478a3b  e890ecffff           call 0x4776d0
// 00478a40  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00478a44  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00478a4c  85ff                 test edi, edi
// 00478a4e  742a                 je 0x478a7a
// 00478a50  8d4704               lea eax, [edi + 4]
// 00478a53  83c9ff               or ecx, 0xffffffff
// 00478a56  f00fc108             lock xadd dword ptr [eax], ecx
// 00478a5a  751e                 jne 0x478a7a
// 00478a5c  8b17                 mov edx, dword ptr [edi]
// 00478a5e  8b4204               mov eax, dword ptr [edx + 4]
// 00478a61  8bcf                 mov ecx, edi
// 00478a63  ffd0                 call eax
// 00478a65  8d4f08               lea ecx, [edi + 8]
// 00478a68  83caff               or edx, 0xffffffff
// 00478a6b  f00fc111             lock xadd dword ptr [ecx], edx
// 00478a6f  7509                 jne 0x478a7a
// 00478a71  8b07                 mov eax, dword ptr [edi]
// 00478a73  8b5008               mov edx, dword ptr [eax + 8]
// 00478a76  8bcf                 mov ecx, edi
// 00478a78  ffd2                 call edx
// 00478a7a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00478a7e  5f                   pop edi
// 00478a7f  8bc6                 mov eax, esi
// 00478a81  64890d00000000       mov dword ptr fs:[0], ecx
// 00478a88  5e                   pop esi
// 00478a89  83c410               add esp, 0x10
// 00478a8c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
