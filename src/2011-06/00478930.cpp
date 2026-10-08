// roc 2011-06 00478930  unit: ScreenshotVerb  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00478930
//
// 00478930  6aff                 push -1
// 00478932  6858949e00           push 0x9e9458
// 00478937  64a100000000         mov eax, dword ptr fs:[0]
// 0047893d  50                   push eax
// 0047893e  64892500000000       mov dword ptr fs:[0], esp
// 00478945  51                   push ecx
// 00478946  56                   push esi
// 00478947  57                   push edi
// 00478948  8bf1                 mov esi, ecx
// 0047894a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047894e  83ec0c               sub esp, 0xc
// 00478951  8bc4                 mov eax, esp
// 00478953  c70600000000         mov dword ptr [esi], 0
// 00478959  8908                 mov dword ptr [eax], ecx
// 0047895b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0047895f  895004               mov dword ptr [eax + 4], edx
// 00478962  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00478966  894808               mov dword ptr [eax + 8], ecx
// 00478969  8b442430             mov eax, dword ptr [esp + 0x30]
// 0047896d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00478975  89642414             mov dword ptr [esp + 0x14], esp
// 00478979  85c0                 test eax, eax
// 0047897b  740c                 je 0x478989
// 0047897d  83c004               add eax, 4
// 00478980  ba01000000           mov edx, 1
// 00478985  f00fc110             lock xadd dword ptr [eax], edx
// 00478989  8bce                 mov ecx, esi
// 0047898b  e880ecffff           call 0x477610
// 00478990  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00478994  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0047899c  85ff                 test edi, edi
// 0047899e  742a                 je 0x4789ca
// 004789a0  8d4704               lea eax, [edi + 4]
// 004789a3  83c9ff               or ecx, 0xffffffff
// 004789a6  f00fc108             lock xadd dword ptr [eax], ecx
// 004789aa  751e                 jne 0x4789ca
// 004789ac  8b17                 mov edx, dword ptr [edi]
// 004789ae  8b4204               mov eax, dword ptr [edx + 4]
// 004789b1  8bcf                 mov ecx, edi
// 004789b3  ffd0                 call eax
// 004789b5  8d4f08               lea ecx, [edi + 8]
// 004789b8  83caff               or edx, 0xffffffff
// 004789bb  f00fc111             lock xadd dword ptr [ecx], edx
// 004789bf  7509                 jne 0x4789ca
// 004789c1  8b07                 mov eax, dword ptr [edi]
// 004789c3  8b5008               mov edx, dword ptr [eax + 8]
// 004789c6  8bcf                 mov ecx, edi
// 004789c8  ffd2                 call edx
// 004789ca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004789ce  5f                   pop edi
// 004789cf  8bc6                 mov eax, esi
// 004789d1  64890d00000000       mov dword ptr fs:[0], ecx
// 004789d8  5e                   pop esi
// 004789d9  83c410               add esp, 0x10
// 004789dc  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
