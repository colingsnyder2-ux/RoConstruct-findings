// roc 2008-06 004907f0  unit: RBX::VHumanoid::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004907f0
//
// 004907f0  6aff                 push -1
// 004907f2  68a9677c00           push 0x7c67a9
// 004907f7  64a100000000         mov eax, dword ptr fs:[0]
// 004907fd  50                   push eax
// 004907fe  64892500000000       mov dword ptr fs:[0], esp
// 00490805  83ec0c               sub esp, 0xc
// 00490808  8d442404             lea eax, [esp + 4]
// 0049080c  50                   push eax
// 0049080d  c744240400000000     mov dword ptr [esp + 4], 0
// 00490815  e856ffffff           call 0x490770
// 0049081a  8b08                 mov ecx, dword ptr [eax]
// 0049081c  83c404               add esp, 4
// 0049081f  85c9                 test ecx, ecx
// 00490821  7405                 je 0x490828
// 00490823  83c110               add ecx, 0x10
// 00490826  eb02                 jmp 0x49082a
// 00490828  33c9                 xor ecx, ecx
// 0049082a  56                   push esi
// 0049082b  57                   push edi
// 0049082c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00490830  890f                 mov dword ptr [edi], ecx
// 00490832  8b4004               mov eax, dword ptr [eax + 4]
// 00490835  894704               mov dword ptr [edi + 4], eax
// 00490838  85c0                 test eax, eax
// 0049083a  740c                 je 0x490848
// 0049083c  83c004               add eax, 4
// 0049083f  b901000000           mov ecx, 1
// 00490844  f00fc108             lock xadd dword ptr [eax], ecx
// 00490848  8b742410             mov esi, dword ptr [esp + 0x10]
// 0049084c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00490854  c744240801000000     mov dword ptr [esp + 8], 1
// 0049085c  85f6                 test esi, esi
// 0049085e  742a                 je 0x49088a
// 00490860  8d5604               lea edx, [esi + 4]
// 00490863  83c8ff               or eax, 0xffffffff
// 00490866  f00fc102             lock xadd dword ptr [edx], eax
// 0049086a  751e                 jne 0x49088a
// 0049086c  8b16                 mov edx, dword ptr [esi]
// 0049086e  8b4204               mov eax, dword ptr [edx + 4]
// 00490871  8bce                 mov ecx, esi
// 00490873  ffd0                 call eax
// 00490875  8d4e08               lea ecx, [esi + 8]
// 00490878  83caff               or edx, 0xffffffff
// 0049087b  f00fc111             lock xadd dword ptr [ecx], edx
// 0049087f  7509                 jne 0x49088a
// 00490881  8b06                 mov eax, dword ptr [esi]
// 00490883  8b5008               mov edx, dword ptr [eax + 8]
// 00490886  8bce                 mov ecx, esi
// 00490888  ffd2                 call edx
// 0049088a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0049088e  8bc7                 mov eax, edi
// 00490890  5f                   pop edi
// 00490891  5e                   pop esi
// 00490892  64890d00000000       mov dword ptr fs:[0], ecx
// 00490899  83c418               add esp, 0x18
// 0049089c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
