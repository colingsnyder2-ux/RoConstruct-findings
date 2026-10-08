// roc 2011-06 004b9da0  unit: RBX::Network::VPlayer::?$BoundFuncDesc  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004b9da0
//
// 004b9da0  6aff                 push -1
// 004b9da2  6858949e00           push 0x9e9458
// 004b9da7  64a100000000         mov eax, dword ptr fs:[0]
// 004b9dad  50                   push eax
// 004b9dae  64892500000000       mov dword ptr fs:[0], esp
// 004b9db5  51                   push ecx
// 004b9db6  56                   push esi
// 004b9db7  57                   push edi
// 004b9db8  8bf1                 mov esi, ecx
// 004b9dba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b9dbe  83ec0c               sub esp, 0xc
// 004b9dc1  8bc4                 mov eax, esp
// 004b9dc3  c70600000000         mov dword ptr [esi], 0
// 004b9dc9  8908                 mov dword ptr [eax], ecx
// 004b9dcb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004b9dcf  895004               mov dword ptr [eax + 4], edx
// 004b9dd2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004b9dd6  894808               mov dword ptr [eax + 8], ecx
// 004b9dd9  8b442430             mov eax, dword ptr [esp + 0x30]
// 004b9ddd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004b9de5  89642414             mov dword ptr [esp + 0x14], esp
// 004b9de9  85c0                 test eax, eax
// 004b9deb  740c                 je 0x4b9df9
// 004b9ded  83c004               add eax, 4
// 004b9df0  ba01000000           mov edx, 1
// 004b9df5  f00fc110             lock xadd dword ptr [eax], edx
// 004b9df9  8bce                 mov ecx, esi
// 004b9dfb  e890c7ffff           call 0x4b6590
// 004b9e00  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004b9e04  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004b9e0c  85ff                 test edi, edi
// 004b9e0e  742a                 je 0x4b9e3a
// 004b9e10  8d4704               lea eax, [edi + 4]
// 004b9e13  83c9ff               or ecx, 0xffffffff
// 004b9e16  f00fc108             lock xadd dword ptr [eax], ecx
// 004b9e1a  751e                 jne 0x4b9e3a
// 004b9e1c  8b17                 mov edx, dword ptr [edi]
// 004b9e1e  8b4204               mov eax, dword ptr [edx + 4]
// 004b9e21  8bcf                 mov ecx, edi
// 004b9e23  ffd0                 call eax
// 004b9e25  8d4f08               lea ecx, [edi + 8]
// 004b9e28  83caff               or edx, 0xffffffff
// 004b9e2b  f00fc111             lock xadd dword ptr [ecx], edx
// 004b9e2f  7509                 jne 0x4b9e3a
// 004b9e31  8b07                 mov eax, dword ptr [edi]
// 004b9e33  8b5008               mov edx, dword ptr [eax + 8]
// 004b9e36  8bcf                 mov ecx, edi
// 004b9e38  ffd2                 call edx
// 004b9e3a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b9e3e  5f                   pop edi
// 004b9e3f  8bc6                 mov eax, esi
// 004b9e41  64890d00000000       mov dword ptr fs:[0], ecx
// 004b9e48  5e                   pop esi
// 004b9e49  83c410               add esp, 0x10
// 004b9e4c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
