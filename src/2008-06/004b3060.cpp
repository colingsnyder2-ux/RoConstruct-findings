// roc 2008-06 004b3060  unit: RBX::VRotateV::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b3060
//
// 004b3060  6aff                 push -1
// 004b3062  68a9677c00           push 0x7c67a9
// 004b3067  64a100000000         mov eax, dword ptr fs:[0]
// 004b306d  50                   push eax
// 004b306e  64892500000000       mov dword ptr fs:[0], esp
// 004b3075  83ec0c               sub esp, 0xc
// 004b3078  8d442404             lea eax, [esp + 4]
// 004b307c  50                   push eax
// 004b307d  c744240400000000     mov dword ptr [esp + 4], 0
// 004b3085  e856ffffff           call 0x4b2fe0
// 004b308a  8b08                 mov ecx, dword ptr [eax]
// 004b308c  83c404               add esp, 4
// 004b308f  85c9                 test ecx, ecx
// 004b3091  7405                 je 0x4b3098
// 004b3093  83c110               add ecx, 0x10
// 004b3096  eb02                 jmp 0x4b309a
// 004b3098  33c9                 xor ecx, ecx
// 004b309a  56                   push esi
// 004b309b  57                   push edi
// 004b309c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004b30a0  890f                 mov dword ptr [edi], ecx
// 004b30a2  8b4004               mov eax, dword ptr [eax + 4]
// 004b30a5  894704               mov dword ptr [edi + 4], eax
// 004b30a8  85c0                 test eax, eax
// 004b30aa  740c                 je 0x4b30b8
// 004b30ac  83c004               add eax, 4
// 004b30af  b901000000           mov ecx, 1
// 004b30b4  f00fc108             lock xadd dword ptr [eax], ecx
// 004b30b8  8b742410             mov esi, dword ptr [esp + 0x10]
// 004b30bc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004b30c4  c744240801000000     mov dword ptr [esp + 8], 1
// 004b30cc  85f6                 test esi, esi
// 004b30ce  742a                 je 0x4b30fa
// 004b30d0  8d5604               lea edx, [esi + 4]
// 004b30d3  83c8ff               or eax, 0xffffffff
// 004b30d6  f00fc102             lock xadd dword ptr [edx], eax
// 004b30da  751e                 jne 0x4b30fa
// 004b30dc  8b16                 mov edx, dword ptr [esi]
// 004b30de  8b4204               mov eax, dword ptr [edx + 4]
// 004b30e1  8bce                 mov ecx, esi
// 004b30e3  ffd0                 call eax
// 004b30e5  8d4e08               lea ecx, [esi + 8]
// 004b30e8  83caff               or edx, 0xffffffff
// 004b30eb  f00fc111             lock xadd dword ptr [ecx], edx
// 004b30ef  7509                 jne 0x4b30fa
// 004b30f1  8b06                 mov eax, dword ptr [esi]
// 004b30f3  8b5008               mov edx, dword ptr [eax + 8]
// 004b30f6  8bce                 mov ecx, esi
// 004b30f8  ffd2                 call edx
// 004b30fa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b30fe  8bc7                 mov eax, edi
// 004b3100  5f                   pop edi
// 004b3101  5e                   pop esi
// 004b3102  64890d00000000       mov dword ptr fs:[0], ecx
// 004b3109  83c418               add esp, 0x18
// 004b310c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
