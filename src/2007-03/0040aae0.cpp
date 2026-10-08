// roc 2007-03 0040aae0  unit: seg_00400000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040aae0
//
// 0040aae0  83ec08               sub esp, 8
// 0040aae3  56                   push esi
// 0040aae4  8b742410             mov esi, dword ptr [esp + 0x10]
// 0040aae8  57                   push edi
// 0040aae9  8bf9                 mov edi, ecx
// 0040aaeb  56                   push esi
// 0040aaec  8d4c2410             lea ecx, [esp + 0x10]
// 0040aaf0  8974240c             mov dword ptr [esp + 0xc], esi
// 0040aaf4  e8d7edffff           call 0x4098d0
// 0040aaf9  56                   push esi
// 0040aafa  8d442410             lea eax, [esp + 0x10]
// 0040aafe  56                   push esi
// 0040aaff  50                   push eax
// 0040ab00  e8bbd22800           call 0x697dc0
// 0040ab05  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040ab09  8b542418             mov edx, dword ptr [esp + 0x18]
// 0040ab0d  890f                 mov dword ptr [edi], ecx
// 0040ab0f  8b7704               mov esi, dword ptr [edi + 4]
// 0040ab12  83c40c               add esp, 0xc
// 0040ab15  85f6                 test esi, esi
// 0040ab17  895704               mov dword ptr [edi + 4], edx
// 0040ab1a  742a                 je 0x40ab46
// 0040ab1c  8d4604               lea eax, [esi + 4]
// 0040ab1f  83c9ff               or ecx, 0xffffffff
// 0040ab22  f00fc108             lock xadd dword ptr [eax], ecx
// 0040ab26  751e                 jne 0x40ab46
// 0040ab28  8b16                 mov edx, dword ptr [esi]
// 0040ab2a  8b4204               mov eax, dword ptr [edx + 4]
// 0040ab2d  8bce                 mov ecx, esi
// 0040ab2f  ffd0                 call eax
// 0040ab31  8d4e08               lea ecx, [esi + 8]
// 0040ab34  83caff               or edx, 0xffffffff
// 0040ab37  f00fc111             lock xadd dword ptr [ecx], edx
// 0040ab3b  7509                 jne 0x40ab46
// 0040ab3d  8b06                 mov eax, dword ptr [esi]
// 0040ab3f  8b5008               mov edx, dword ptr [eax + 8]
// 0040ab42  8bce                 mov ecx, esi
// 0040ab44  ffd2                 call edx
// 0040ab46  5f                   pop edi
// 0040ab47  5e                   pop esi
// 0040ab48  83c408               add esp, 8
// 0040ab4b  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
