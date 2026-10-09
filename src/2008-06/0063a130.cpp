// roc 2008-06 0063a130  unit: std::D::DU?$char_traits::V?$basic_string::V?$Value::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063a130
//
// 0063a130  6aff                 push -1
// 0063a132  68a9677c00           push 0x7c67a9
// 0063a137  64a100000000         mov eax, dword ptr fs:[0]
// 0063a13d  50                   push eax
// 0063a13e  64892500000000       mov dword ptr fs:[0], esp
// 0063a145  83ec0c               sub esp, 0xc
// 0063a148  8d442404             lea eax, [esp + 4]
// 0063a14c  50                   push eax
// 0063a14d  c744240400000000     mov dword ptr [esp + 4], 0
// 0063a155  e826f7ffff           call 0x639880
// 0063a15a  8b08                 mov ecx, dword ptr [eax]
// 0063a15c  83c404               add esp, 4
// 0063a15f  85c9                 test ecx, ecx
// 0063a161  7405                 je 0x63a168
// 0063a163  83c110               add ecx, 0x10
// 0063a166  eb02                 jmp 0x63a16a
// 0063a168  33c9                 xor ecx, ecx
// 0063a16a  56                   push esi
// 0063a16b  57                   push edi
// 0063a16c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0063a170  890f                 mov dword ptr [edi], ecx
// 0063a172  8b4004               mov eax, dword ptr [eax + 4]
// 0063a175  894704               mov dword ptr [edi + 4], eax
// 0063a178  85c0                 test eax, eax
// 0063a17a  740c                 je 0x63a188
// 0063a17c  83c004               add eax, 4
// 0063a17f  b901000000           mov ecx, 1
// 0063a184  f00fc108             lock xadd dword ptr [eax], ecx
// 0063a188  8b742410             mov esi, dword ptr [esp + 0x10]
// 0063a18c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0063a194  c744240801000000     mov dword ptr [esp + 8], 1
// 0063a19c  85f6                 test esi, esi
// 0063a19e  742a                 je 0x63a1ca
// 0063a1a0  8d5604               lea edx, [esi + 4]
// 0063a1a3  83c8ff               or eax, 0xffffffff
// 0063a1a6  f00fc102             lock xadd dword ptr [edx], eax
// 0063a1aa  751e                 jne 0x63a1ca
// 0063a1ac  8b16                 mov edx, dword ptr [esi]
// 0063a1ae  8b4204               mov eax, dword ptr [edx + 4]
// 0063a1b1  8bce                 mov ecx, esi
// 0063a1b3  ffd0                 call eax
// 0063a1b5  8d4e08               lea ecx, [esi + 8]
// 0063a1b8  83caff               or edx, 0xffffffff
// 0063a1bb  f00fc111             lock xadd dword ptr [ecx], edx
// 0063a1bf  7509                 jne 0x63a1ca
// 0063a1c1  8b06                 mov eax, dword ptr [esi]
// 0063a1c3  8b5008               mov edx, dword ptr [eax + 8]
// 0063a1c6  8bce                 mov ecx, esi
// 0063a1c8  ffd2                 call edx
// 0063a1ca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063a1ce  8bc7                 mov eax, edi
// 0063a1d0  5f                   pop edi
// 0063a1d1  5e                   pop esi
// 0063a1d2  64890d00000000       mov dword ptr fs:[0], ecx
// 0063a1d9  83c418               add esp, 0x18
// 0063a1dc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
