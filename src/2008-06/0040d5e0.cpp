// roc 2008-06 0040d5e0  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040d5e0
//
// 0040d5e0  6aff                 push -1
// 0040d5e2  68a9677c00           push 0x7c67a9
// 0040d5e7  64a100000000         mov eax, dword ptr fs:[0]
// 0040d5ed  50                   push eax
// 0040d5ee  64892500000000       mov dword ptr fs:[0], esp
// 0040d5f5  83ec0c               sub esp, 0xc
// 0040d5f8  8d442404             lea eax, [esp + 4]
// 0040d5fc  50                   push eax
// 0040d5fd  c744240400000000     mov dword ptr [esp + 4], 0
// 0040d605  e806fcffff           call 0x40d210
// 0040d60a  8b08                 mov ecx, dword ptr [eax]
// 0040d60c  83c404               add esp, 4
// 0040d60f  85c9                 test ecx, ecx
// 0040d611  7405                 je 0x40d618
// 0040d613  83c110               add ecx, 0x10
// 0040d616  eb02                 jmp 0x40d61a
// 0040d618  33c9                 xor ecx, ecx
// 0040d61a  56                   push esi
// 0040d61b  57                   push edi
// 0040d61c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0040d620  890f                 mov dword ptr [edi], ecx
// 0040d622  8b4004               mov eax, dword ptr [eax + 4]
// 0040d625  894704               mov dword ptr [edi + 4], eax
// 0040d628  85c0                 test eax, eax
// 0040d62a  740c                 je 0x40d638
// 0040d62c  83c004               add eax, 4
// 0040d62f  b901000000           mov ecx, 1
// 0040d634  f00fc108             lock xadd dword ptr [eax], ecx
// 0040d638  8b742410             mov esi, dword ptr [esp + 0x10]
// 0040d63c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0040d644  c744240801000000     mov dword ptr [esp + 8], 1
// 0040d64c  85f6                 test esi, esi
// 0040d64e  742a                 je 0x40d67a
// 0040d650  8d5604               lea edx, [esi + 4]
// 0040d653  83c8ff               or eax, 0xffffffff
// 0040d656  f00fc102             lock xadd dword ptr [edx], eax
// 0040d65a  751e                 jne 0x40d67a
// 0040d65c  8b16                 mov edx, dword ptr [esi]
// 0040d65e  8b4204               mov eax, dword ptr [edx + 4]
// 0040d661  8bce                 mov ecx, esi
// 0040d663  ffd0                 call eax
// 0040d665  8d4e08               lea ecx, [esi + 8]
// 0040d668  83caff               or edx, 0xffffffff
// 0040d66b  f00fc111             lock xadd dword ptr [ecx], edx
// 0040d66f  7509                 jne 0x40d67a
// 0040d671  8b06                 mov eax, dword ptr [esi]
// 0040d673  8b5008               mov edx, dword ptr [eax + 8]
// 0040d676  8bce                 mov ecx, esi
// 0040d678  ffd2                 call edx
// 0040d67a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040d67e  8bc7                 mov eax, edi
// 0040d680  5f                   pop edi
// 0040d681  5e                   pop esi
// 0040d682  64890d00000000       mov dword ptr fs:[0], ecx
// 0040d689  83c418               add esp, 0x18
// 0040d68c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
