// roc 2008-06 0040d7f0  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040d7f0
//
// 0040d7f0  6aff                 push -1
// 0040d7f2  68a9677c00           push 0x7c67a9
// 0040d7f7  64a100000000         mov eax, dword ptr fs:[0]
// 0040d7fd  50                   push eax
// 0040d7fe  64892500000000       mov dword ptr fs:[0], esp
// 0040d805  83ec0c               sub esp, 0xc
// 0040d808  8d442404             lea eax, [esp + 4]
// 0040d80c  50                   push eax
// 0040d80d  c744240400000000     mov dword ptr [esp + 4], 0
// 0040d815  e876fbffff           call 0x40d390
// 0040d81a  8b08                 mov ecx, dword ptr [eax]
// 0040d81c  83c404               add esp, 4
// 0040d81f  85c9                 test ecx, ecx
// 0040d821  7405                 je 0x40d828
// 0040d823  83c110               add ecx, 0x10
// 0040d826  eb02                 jmp 0x40d82a
// 0040d828  33c9                 xor ecx, ecx
// 0040d82a  56                   push esi
// 0040d82b  57                   push edi
// 0040d82c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0040d830  890f                 mov dword ptr [edi], ecx
// 0040d832  8b4004               mov eax, dword ptr [eax + 4]
// 0040d835  894704               mov dword ptr [edi + 4], eax
// 0040d838  85c0                 test eax, eax
// 0040d83a  740c                 je 0x40d848
// 0040d83c  83c004               add eax, 4
// 0040d83f  b901000000           mov ecx, 1
// 0040d844  f00fc108             lock xadd dword ptr [eax], ecx
// 0040d848  8b742410             mov esi, dword ptr [esp + 0x10]
// 0040d84c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0040d854  c744240801000000     mov dword ptr [esp + 8], 1
// 0040d85c  85f6                 test esi, esi
// 0040d85e  742a                 je 0x40d88a
// 0040d860  8d5604               lea edx, [esi + 4]
// 0040d863  83c8ff               or eax, 0xffffffff
// 0040d866  f00fc102             lock xadd dword ptr [edx], eax
// 0040d86a  751e                 jne 0x40d88a
// 0040d86c  8b16                 mov edx, dword ptr [esi]
// 0040d86e  8b4204               mov eax, dword ptr [edx + 4]
// 0040d871  8bce                 mov ecx, esi
// 0040d873  ffd0                 call eax
// 0040d875  8d4e08               lea ecx, [esi + 8]
// 0040d878  83caff               or edx, 0xffffffff
// 0040d87b  f00fc111             lock xadd dword ptr [ecx], edx
// 0040d87f  7509                 jne 0x40d88a
// 0040d881  8b06                 mov eax, dword ptr [esi]
// 0040d883  8b5008               mov edx, dword ptr [eax + 8]
// 0040d886  8bce                 mov ecx, esi
// 0040d888  ffd2                 call edx
// 0040d88a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040d88e  8bc7                 mov eax, edi
// 0040d890  5f                   pop edi
// 0040d891  5e                   pop esi
// 0040d892  64890d00000000       mov dword ptr fs:[0], ecx
// 0040d899  83c418               add esp, 0x18
// 0040d89c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
