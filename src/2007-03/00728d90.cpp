// roc 2007-03 00728d90  unit: seg_00720000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00728d90
//
// 00728d90  83ec08               sub esp, 8
// 00728d93  56                   push esi
// 00728d94  8b742410             mov esi, dword ptr [esp + 0x10]
// 00728d98  57                   push edi
// 00728d99  8bf9                 mov edi, ecx
// 00728d9b  56                   push esi
// 00728d9c  8d4c2410             lea ecx, [esp + 0x10]
// 00728da0  8974240c             mov dword ptr [esp + 0xc], esi
// 00728da4  e837ffffff           call 0x728ce0
// 00728da9  56                   push esi
// 00728daa  8d442410             lea eax, [esp + 0x10]
// 00728dae  56                   push esi
// 00728daf  50                   push eax
// 00728db0  e80bf0f6ff           call 0x697dc0
// 00728db5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00728db9  8b542418             mov edx, dword ptr [esp + 0x18]
// 00728dbd  890f                 mov dword ptr [edi], ecx
// 00728dbf  8b7704               mov esi, dword ptr [edi + 4]
// 00728dc2  83c40c               add esp, 0xc
// 00728dc5  85f6                 test esi, esi
// 00728dc7  895704               mov dword ptr [edi + 4], edx
// 00728dca  742a                 je 0x728df6
// 00728dcc  8d4604               lea eax, [esi + 4]
// 00728dcf  83c9ff               or ecx, 0xffffffff
// 00728dd2  f00fc108             lock xadd dword ptr [eax], ecx
// 00728dd6  751e                 jne 0x728df6
// 00728dd8  8b16                 mov edx, dword ptr [esi]
// 00728dda  8b4204               mov eax, dword ptr [edx + 4]
// 00728ddd  8bce                 mov ecx, esi
// 00728ddf  ffd0                 call eax
// 00728de1  8d4e08               lea ecx, [esi + 8]
// 00728de4  83caff               or edx, 0xffffffff
// 00728de7  f00fc111             lock xadd dword ptr [ecx], edx
// 00728deb  7509                 jne 0x728df6
// 00728ded  8b06                 mov eax, dword ptr [esi]
// 00728def  8b5008               mov edx, dword ptr [eax + 8]
// 00728df2  8bce                 mov ecx, esi
// 00728df4  ffd2                 call edx
// 00728df6  5f                   pop edi
// 00728df7  5e                   pop esi
// 00728df8  83c408               add esp, 8
// 00728dfb  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
