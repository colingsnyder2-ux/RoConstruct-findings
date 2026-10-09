// roc 2008-06 0041ea40  unit: RBX::VPartInstance::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041ea40
//
// 0041ea40  6aff                 push -1
// 0041ea42  68a9677c00           push 0x7c67a9
// 0041ea47  64a100000000         mov eax, dword ptr fs:[0]
// 0041ea4d  50                   push eax
// 0041ea4e  64892500000000       mov dword ptr fs:[0], esp
// 0041ea55  83ec0c               sub esp, 0xc
// 0041ea58  8d442404             lea eax, [esp + 4]
// 0041ea5c  50                   push eax
// 0041ea5d  c744240400000000     mov dword ptr [esp + 4], 0
// 0041ea65  e856ffffff           call 0x41e9c0
// 0041ea6a  8b08                 mov ecx, dword ptr [eax]
// 0041ea6c  83c404               add esp, 4
// 0041ea6f  85c9                 test ecx, ecx
// 0041ea71  7405                 je 0x41ea78
// 0041ea73  83c110               add ecx, 0x10
// 0041ea76  eb02                 jmp 0x41ea7a
// 0041ea78  33c9                 xor ecx, ecx
// 0041ea7a  56                   push esi
// 0041ea7b  57                   push edi
// 0041ea7c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0041ea80  890f                 mov dword ptr [edi], ecx
// 0041ea82  8b4004               mov eax, dword ptr [eax + 4]
// 0041ea85  894704               mov dword ptr [edi + 4], eax
// 0041ea88  85c0                 test eax, eax
// 0041ea8a  740c                 je 0x41ea98
// 0041ea8c  83c004               add eax, 4
// 0041ea8f  b901000000           mov ecx, 1
// 0041ea94  f00fc108             lock xadd dword ptr [eax], ecx
// 0041ea98  8b742410             mov esi, dword ptr [esp + 0x10]
// 0041ea9c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0041eaa4  c744240801000000     mov dword ptr [esp + 8], 1
// 0041eaac  85f6                 test esi, esi
// 0041eaae  742a                 je 0x41eada
// 0041eab0  8d5604               lea edx, [esi + 4]
// 0041eab3  83c8ff               or eax, 0xffffffff
// 0041eab6  f00fc102             lock xadd dword ptr [edx], eax
// 0041eaba  751e                 jne 0x41eada
// 0041eabc  8b16                 mov edx, dword ptr [esi]
// 0041eabe  8b4204               mov eax, dword ptr [edx + 4]
// 0041eac1  8bce                 mov ecx, esi
// 0041eac3  ffd0                 call eax
// 0041eac5  8d4e08               lea ecx, [esi + 8]
// 0041eac8  83caff               or edx, 0xffffffff
// 0041eacb  f00fc111             lock xadd dword ptr [ecx], edx
// 0041eacf  7509                 jne 0x41eada
// 0041ead1  8b06                 mov eax, dword ptr [esi]
// 0041ead3  8b5008               mov edx, dword ptr [eax + 8]
// 0041ead6  8bce                 mov ecx, esi
// 0041ead8  ffd2                 call edx
// 0041eada  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041eade  8bc7                 mov eax, edi
// 0041eae0  5f                   pop edi
// 0041eae1  5e                   pop esi
// 0041eae2  64890d00000000       mov dword ptr fs:[0], ecx
// 0041eae9  83c418               add esp, 0x18
// 0041eaec  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
