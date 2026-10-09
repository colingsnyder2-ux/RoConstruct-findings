// roc 2009-12 0073b010  unit: RBX::Lua::WeakThreadRef::VNode::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073b010
//
// 0073b010  83ec08               sub esp, 8
// 0073b013  56                   push esi
// 0073b014  8b742410             mov esi, dword ptr [esp + 0x10]
// 0073b018  57                   push edi
// 0073b019  8bf9                 mov edi, ecx
// 0073b01b  56                   push esi
// 0073b01c  8d4c2410             lea ecx, [esp + 0x10]
// 0073b020  8974240c             mov dword ptr [esp + 0xc], esi
// 0073b024  e8c782f6ff           call 0x6a32f0
// 0073b029  56                   push esi
// 0073b02a  8d442410             lea eax, [esp + 0x10]
// 0073b02e  56                   push esi
// 0073b02f  50                   push eax
// 0073b030  e85b9a1100           call 0x854a90
// 0073b035  8d4c2414             lea ecx, [esp + 0x14]
// 0073b039  83c40c               add esp, 0xc
// 0073b03c  3bcf                 cmp ecx, edi
// 0073b03e  7406                 je 0x73b046
// 0073b040  8b542408             mov edx, dword ptr [esp + 8]
// 0073b044  8917                 mov dword ptr [edi], edx
// 0073b046  8b7704               mov esi, dword ptr [edi + 4]
// 0073b049  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0073b04d  894704               mov dword ptr [edi + 4], eax
// 0073b050  85f6                 test esi, esi
// 0073b052  742a                 je 0x73b07e
// 0073b054  8d4e04               lea ecx, [esi + 4]
// 0073b057  83caff               or edx, 0xffffffff
// 0073b05a  f00fc111             lock xadd dword ptr [ecx], edx
// 0073b05e  751e                 jne 0x73b07e
// 0073b060  8b06                 mov eax, dword ptr [esi]
// 0073b062  8b5004               mov edx, dword ptr [eax + 4]
// 0073b065  8bce                 mov ecx, esi
// 0073b067  ffd2                 call edx
// 0073b069  8d4608               lea eax, [esi + 8]
// 0073b06c  83c9ff               or ecx, 0xffffffff
// 0073b06f  f00fc108             lock xadd dword ptr [eax], ecx
// 0073b073  7509                 jne 0x73b07e
// 0073b075  8b16                 mov edx, dword ptr [esi]
// 0073b077  8b4208               mov eax, dword ptr [edx + 8]
// 0073b07a  8bce                 mov ecx, esi
// 0073b07c  ffd0                 call eax
// 0073b07e  5f                   pop edi
// 0073b07f  5e                   pop esi
// 0073b080  83c408               add esp, 8
// 0073b083  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
