// roc 2008-06 0048f030  unit: RBX::VSpawnLocation::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048f030
//
// 0048f030  6aff                 push -1
// 0048f032  68a9677c00           push 0x7c67a9
// 0048f037  64a100000000         mov eax, dword ptr fs:[0]
// 0048f03d  50                   push eax
// 0048f03e  64892500000000       mov dword ptr fs:[0], esp
// 0048f045  83ec0c               sub esp, 0xc
// 0048f048  8d442404             lea eax, [esp + 4]
// 0048f04c  50                   push eax
// 0048f04d  c744240400000000     mov dword ptr [esp + 4], 0
// 0048f055  e856ffffff           call 0x48efb0
// 0048f05a  8b08                 mov ecx, dword ptr [eax]
// 0048f05c  83c404               add esp, 4
// 0048f05f  85c9                 test ecx, ecx
// 0048f061  7405                 je 0x48f068
// 0048f063  83c110               add ecx, 0x10
// 0048f066  eb02                 jmp 0x48f06a
// 0048f068  33c9                 xor ecx, ecx
// 0048f06a  56                   push esi
// 0048f06b  57                   push edi
// 0048f06c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0048f070  890f                 mov dword ptr [edi], ecx
// 0048f072  8b4004               mov eax, dword ptr [eax + 4]
// 0048f075  894704               mov dword ptr [edi + 4], eax
// 0048f078  85c0                 test eax, eax
// 0048f07a  740c                 je 0x48f088
// 0048f07c  83c004               add eax, 4
// 0048f07f  b901000000           mov ecx, 1
// 0048f084  f00fc108             lock xadd dword ptr [eax], ecx
// 0048f088  8b742410             mov esi, dword ptr [esp + 0x10]
// 0048f08c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0048f094  c744240801000000     mov dword ptr [esp + 8], 1
// 0048f09c  85f6                 test esi, esi
// 0048f09e  742a                 je 0x48f0ca
// 0048f0a0  8d5604               lea edx, [esi + 4]
// 0048f0a3  83c8ff               or eax, 0xffffffff
// 0048f0a6  f00fc102             lock xadd dword ptr [edx], eax
// 0048f0aa  751e                 jne 0x48f0ca
// 0048f0ac  8b16                 mov edx, dword ptr [esi]
// 0048f0ae  8b4204               mov eax, dword ptr [edx + 4]
// 0048f0b1  8bce                 mov ecx, esi
// 0048f0b3  ffd0                 call eax
// 0048f0b5  8d4e08               lea ecx, [esi + 8]
// 0048f0b8  83caff               or edx, 0xffffffff
// 0048f0bb  f00fc111             lock xadd dword ptr [ecx], edx
// 0048f0bf  7509                 jne 0x48f0ca
// 0048f0c1  8b06                 mov eax, dword ptr [esi]
// 0048f0c3  8b5008               mov edx, dword ptr [eax + 8]
// 0048f0c6  8bce                 mov ecx, esi
// 0048f0c8  ffd2                 call edx
// 0048f0ca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048f0ce  8bc7                 mov eax, edi
// 0048f0d0  5f                   pop edi
// 0048f0d1  5e                   pop esi
// 0048f0d2  64890d00000000       mov dword ptr fs:[0], ecx
// 0048f0d9  83c418               add esp, 0x18
// 0048f0dc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
