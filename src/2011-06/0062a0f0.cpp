// roc 2011-06 0062a0f0  unit: RBX::ScriptContext  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062a0f0
//
// 0062a0f0  83ec08               sub esp, 8
// 0062a0f3  56                   push esi
// 0062a0f4  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062a0f8  57                   push edi
// 0062a0f9  8bf9                 mov edi, ecx
// 0062a0fb  56                   push esi
// 0062a0fc  8d4c2410             lea ecx, [esp + 0x10]
// 0062a100  8974240c             mov dword ptr [esp + 0xc], esi
// 0062a104  e837e7ffff           call 0x628840
// 0062a109  56                   push esi
// 0062a10a  8d442410             lea eax, [esp + 0x10]
// 0062a10e  56                   push esi
// 0062a10f  50                   push eax
// 0062a110  e82b152400           call 0x86b640
// 0062a115  8d4c2414             lea ecx, [esp + 0x14]
// 0062a119  83c40c               add esp, 0xc
// 0062a11c  3bcf                 cmp ecx, edi
// 0062a11e  7406                 je 0x62a126
// 0062a120  8b542408             mov edx, dword ptr [esp + 8]
// 0062a124  8917                 mov dword ptr [edi], edx
// 0062a126  8b7704               mov esi, dword ptr [edi + 4]
// 0062a129  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062a12d  894704               mov dword ptr [edi + 4], eax
// 0062a130  85f6                 test esi, esi
// 0062a132  742a                 je 0x62a15e
// 0062a134  8d4e04               lea ecx, [esi + 4]
// 0062a137  83caff               or edx, 0xffffffff
// 0062a13a  f00fc111             lock xadd dword ptr [ecx], edx
// 0062a13e  751e                 jne 0x62a15e
// 0062a140  8b06                 mov eax, dword ptr [esi]
// 0062a142  8b5004               mov edx, dword ptr [eax + 4]
// 0062a145  8bce                 mov ecx, esi
// 0062a147  ffd2                 call edx
// 0062a149  8d4608               lea eax, [esi + 8]
// 0062a14c  83c9ff               or ecx, 0xffffffff
// 0062a14f  f00fc108             lock xadd dword ptr [eax], ecx
// 0062a153  7509                 jne 0x62a15e
// 0062a155  8b16                 mov edx, dword ptr [esi]
// 0062a157  8b4208               mov eax, dword ptr [edx + 8]
// 0062a15a  8bce                 mov ecx, esi
// 0062a15c  ffd0                 call eax
// 0062a15e  5f                   pop edi
// 0062a15f  5e                   pop esi
// 0062a160  83c408               add esp, 8
// 0062a163  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
