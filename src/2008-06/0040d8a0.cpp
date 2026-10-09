// roc 2008-06 0040d8a0  unit: VAuthoringSettings::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040d8a0
//
// 0040d8a0  6aff                 push -1
// 0040d8a2  68a9677c00           push 0x7c67a9
// 0040d8a7  64a100000000         mov eax, dword ptr fs:[0]
// 0040d8ad  50                   push eax
// 0040d8ae  64892500000000       mov dword ptr fs:[0], esp
// 0040d8b5  83ec0c               sub esp, 0xc
// 0040d8b8  8d442404             lea eax, [esp + 4]
// 0040d8bc  50                   push eax
// 0040d8bd  c744240400000000     mov dword ptr [esp + 4], 0
// 0040d8c5  e846fbffff           call 0x40d410
// 0040d8ca  8b08                 mov ecx, dword ptr [eax]
// 0040d8cc  83c404               add esp, 4
// 0040d8cf  85c9                 test ecx, ecx
// 0040d8d1  7405                 je 0x40d8d8
// 0040d8d3  83c110               add ecx, 0x10
// 0040d8d6  eb02                 jmp 0x40d8da
// 0040d8d8  33c9                 xor ecx, ecx
// 0040d8da  56                   push esi
// 0040d8db  57                   push edi
// 0040d8dc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0040d8e0  890f                 mov dword ptr [edi], ecx
// 0040d8e2  8b4004               mov eax, dword ptr [eax + 4]
// 0040d8e5  894704               mov dword ptr [edi + 4], eax
// 0040d8e8  85c0                 test eax, eax
// 0040d8ea  740c                 je 0x40d8f8
// 0040d8ec  83c004               add eax, 4
// 0040d8ef  b901000000           mov ecx, 1
// 0040d8f4  f00fc108             lock xadd dword ptr [eax], ecx
// 0040d8f8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0040d8fc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0040d904  c744240801000000     mov dword ptr [esp + 8], 1
// 0040d90c  85f6                 test esi, esi
// 0040d90e  742a                 je 0x40d93a
// 0040d910  8d5604               lea edx, [esi + 4]
// 0040d913  83c8ff               or eax, 0xffffffff
// 0040d916  f00fc102             lock xadd dword ptr [edx], eax
// 0040d91a  751e                 jne 0x40d93a
// 0040d91c  8b16                 mov edx, dword ptr [esi]
// 0040d91e  8b4204               mov eax, dword ptr [edx + 4]
// 0040d921  8bce                 mov ecx, esi
// 0040d923  ffd0                 call eax
// 0040d925  8d4e08               lea ecx, [esi + 8]
// 0040d928  83caff               or edx, 0xffffffff
// 0040d92b  f00fc111             lock xadd dword ptr [ecx], edx
// 0040d92f  7509                 jne 0x40d93a
// 0040d931  8b06                 mov eax, dword ptr [esi]
// 0040d933  8b5008               mov edx, dword ptr [eax + 8]
// 0040d936  8bce                 mov ecx, esi
// 0040d938  ffd2                 call edx
// 0040d93a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040d93e  8bc7                 mov eax, edi
// 0040d940  5f                   pop edi
// 0040d941  5e                   pop esi
// 0040d942  64890d00000000       mov dword ptr fs:[0], ecx
// 0040d949  83c418               add esp, 0x18
// 0040d94c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
