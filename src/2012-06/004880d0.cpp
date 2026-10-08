// roc 2012-06 004880d0  unit: ScreenshotVerb  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004880d0
//
// 004880d0  6aff                 push -1
// 004880d2  68f810ab00           push 0xab10f8
// 004880d7  64a100000000         mov eax, dword ptr fs:[0]
// 004880dd  50                   push eax
// 004880de  64892500000000       mov dword ptr fs:[0], esp
// 004880e5  51                   push ecx
// 004880e6  56                   push esi
// 004880e7  57                   push edi
// 004880e8  8bf1                 mov esi, ecx
// 004880ea  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004880ee  83ec0c               sub esp, 0xc
// 004880f1  8bc4                 mov eax, esp
// 004880f3  c70600000000         mov dword ptr [esi], 0
// 004880f9  8908                 mov dword ptr [eax], ecx
// 004880fb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004880ff  895004               mov dword ptr [eax + 4], edx
// 00488102  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00488106  894808               mov dword ptr [eax + 8], ecx
// 00488109  8b442430             mov eax, dword ptr [esp + 0x30]
// 0048810d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00488115  89642414             mov dword ptr [esp + 0x14], esp
// 00488119  85c0                 test eax, eax
// 0048811b  740c                 je 0x488129
// 0048811d  83c004               add eax, 4
// 00488120  ba01000000           mov edx, 1
// 00488125  f00fc110             lock xadd dword ptr [eax], edx
// 00488129  8bce                 mov ecx, esi
// 0048812b  e840f5ffff           call 0x487670
// 00488130  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00488134  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0048813c  85ff                 test edi, edi
// 0048813e  742a                 je 0x48816a
// 00488140  8d4704               lea eax, [edi + 4]
// 00488143  83c9ff               or ecx, 0xffffffff
// 00488146  f00fc108             lock xadd dword ptr [eax], ecx
// 0048814a  751e                 jne 0x48816a
// 0048814c  8b17                 mov edx, dword ptr [edi]
// 0048814e  8b4204               mov eax, dword ptr [edx + 4]
// 00488151  8bcf                 mov ecx, edi
// 00488153  ffd0                 call eax
// 00488155  8d4f08               lea ecx, [edi + 8]
// 00488158  83caff               or edx, 0xffffffff
// 0048815b  f00fc111             lock xadd dword ptr [ecx], edx
// 0048815f  7509                 jne 0x48816a
// 00488161  8b07                 mov eax, dword ptr [edi]
// 00488163  8b5008               mov edx, dword ptr [eax + 8]
// 00488166  8bcf                 mov ecx, edi
// 00488168  ffd2                 call edx
// 0048816a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048816e  5f                   pop edi
// 0048816f  8bc6                 mov eax, esi
// 00488171  64890d00000000       mov dword ptr fs:[0], ecx
// 00488178  5e                   pop esi
// 00488179  83c410               add esp, 0x10
// 0048817c  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
