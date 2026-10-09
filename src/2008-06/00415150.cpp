// roc 2008-06 00415150  unit: RBX::VChangeHistoryService::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00415150
//
// 00415150  6aff                 push -1
// 00415152  68a9677c00           push 0x7c67a9
// 00415157  64a100000000         mov eax, dword ptr fs:[0]
// 0041515d  50                   push eax
// 0041515e  64892500000000       mov dword ptr fs:[0], esp
// 00415165  83ec0c               sub esp, 0xc
// 00415168  8d442404             lea eax, [esp + 4]
// 0041516c  50                   push eax
// 0041516d  c744240400000000     mov dword ptr [esp + 4], 0
// 00415175  e856ffffff           call 0x4150d0
// 0041517a  8b08                 mov ecx, dword ptr [eax]
// 0041517c  83c404               add esp, 4
// 0041517f  85c9                 test ecx, ecx
// 00415181  7405                 je 0x415188
// 00415183  83c110               add ecx, 0x10
// 00415186  eb02                 jmp 0x41518a
// 00415188  33c9                 xor ecx, ecx
// 0041518a  56                   push esi
// 0041518b  57                   push edi
// 0041518c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00415190  890f                 mov dword ptr [edi], ecx
// 00415192  8b4004               mov eax, dword ptr [eax + 4]
// 00415195  894704               mov dword ptr [edi + 4], eax
// 00415198  85c0                 test eax, eax
// 0041519a  740c                 je 0x4151a8
// 0041519c  83c004               add eax, 4
// 0041519f  b901000000           mov ecx, 1
// 004151a4  f00fc108             lock xadd dword ptr [eax], ecx
// 004151a8  8b742410             mov esi, dword ptr [esp + 0x10]
// 004151ac  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004151b4  c744240801000000     mov dword ptr [esp + 8], 1
// 004151bc  85f6                 test esi, esi
// 004151be  742a                 je 0x4151ea
// 004151c0  8d5604               lea edx, [esi + 4]
// 004151c3  83c8ff               or eax, 0xffffffff
// 004151c6  f00fc102             lock xadd dword ptr [edx], eax
// 004151ca  751e                 jne 0x4151ea
// 004151cc  8b16                 mov edx, dword ptr [esi]
// 004151ce  8b4204               mov eax, dword ptr [edx + 4]
// 004151d1  8bce                 mov ecx, esi
// 004151d3  ffd0                 call eax
// 004151d5  8d4e08               lea ecx, [esi + 8]
// 004151d8  83caff               or edx, 0xffffffff
// 004151db  f00fc111             lock xadd dword ptr [ecx], edx
// 004151df  7509                 jne 0x4151ea
// 004151e1  8b06                 mov eax, dword ptr [esi]
// 004151e3  8b5008               mov edx, dword ptr [eax + 8]
// 004151e6  8bce                 mov ecx, esi
// 004151e8  ffd2                 call edx
// 004151ea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004151ee  8bc7                 mov eax, edi
// 004151f0  5f                   pop edi
// 004151f1  5e                   pop esi
// 004151f2  64890d00000000       mov dword ptr fs:[0], ecx
// 004151f9  83c418               add esp, 0x18
// 004151fc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
