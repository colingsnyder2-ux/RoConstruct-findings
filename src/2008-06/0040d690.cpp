// roc 2008-06 0040d690  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040d690
//
// 0040d690  6aff                 push -1
// 0040d692  68a9677c00           push 0x7c67a9
// 0040d697  64a100000000         mov eax, dword ptr fs:[0]
// 0040d69d  50                   push eax
// 0040d69e  64892500000000       mov dword ptr fs:[0], esp
// 0040d6a5  83ec0c               sub esp, 0xc
// 0040d6a8  8d442404             lea eax, [esp + 4]
// 0040d6ac  50                   push eax
// 0040d6ad  c744240400000000     mov dword ptr [esp + 4], 0
// 0040d6b5  e8d6fbffff           call 0x40d290
// 0040d6ba  8b08                 mov ecx, dword ptr [eax]
// 0040d6bc  83c404               add esp, 4
// 0040d6bf  85c9                 test ecx, ecx
// 0040d6c1  7405                 je 0x40d6c8
// 0040d6c3  83c110               add ecx, 0x10
// 0040d6c6  eb02                 jmp 0x40d6ca
// 0040d6c8  33c9                 xor ecx, ecx
// 0040d6ca  56                   push esi
// 0040d6cb  57                   push edi
// 0040d6cc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0040d6d0  890f                 mov dword ptr [edi], ecx
// 0040d6d2  8b4004               mov eax, dword ptr [eax + 4]
// 0040d6d5  894704               mov dword ptr [edi + 4], eax
// 0040d6d8  85c0                 test eax, eax
// 0040d6da  740c                 je 0x40d6e8
// 0040d6dc  83c004               add eax, 4
// 0040d6df  b901000000           mov ecx, 1
// 0040d6e4  f00fc108             lock xadd dword ptr [eax], ecx
// 0040d6e8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0040d6ec  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0040d6f4  c744240801000000     mov dword ptr [esp + 8], 1
// 0040d6fc  85f6                 test esi, esi
// 0040d6fe  742a                 je 0x40d72a
// 0040d700  8d5604               lea edx, [esi + 4]
// 0040d703  83c8ff               or eax, 0xffffffff
// 0040d706  f00fc102             lock xadd dword ptr [edx], eax
// 0040d70a  751e                 jne 0x40d72a
// 0040d70c  8b16                 mov edx, dword ptr [esi]
// 0040d70e  8b4204               mov eax, dword ptr [edx + 4]
// 0040d711  8bce                 mov ecx, esi
// 0040d713  ffd0                 call eax
// 0040d715  8d4e08               lea ecx, [esi + 8]
// 0040d718  83caff               or edx, 0xffffffff
// 0040d71b  f00fc111             lock xadd dword ptr [ecx], edx
// 0040d71f  7509                 jne 0x40d72a
// 0040d721  8b06                 mov eax, dword ptr [esi]
// 0040d723  8b5008               mov edx, dword ptr [eax + 8]
// 0040d726  8bce                 mov ecx, esi
// 0040d728  ffd2                 call edx
// 0040d72a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040d72e  8bc7                 mov eax, edi
// 0040d730  5f                   pop edi
// 0040d731  5e                   pop esi
// 0040d732  64890d00000000       mov dword ptr fs:[0], ecx
// 0040d739  83c418               add esp, 0x18
// 0040d73c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
