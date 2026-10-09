// roc 2008-06 005c0be0  unit: RBX::VClickDetector::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0be0
//
// 005c0be0  6aff                 push -1
// 005c0be2  68a9677c00           push 0x7c67a9
// 005c0be7  64a100000000         mov eax, dword ptr fs:[0]
// 005c0bed  50                   push eax
// 005c0bee  64892500000000       mov dword ptr fs:[0], esp
// 005c0bf5  83ec0c               sub esp, 0xc
// 005c0bf8  8d442404             lea eax, [esp + 4]
// 005c0bfc  50                   push eax
// 005c0bfd  c744240400000000     mov dword ptr [esp + 4], 0
// 005c0c05  e856ffffff           call 0x5c0b60
// 005c0c0a  8b08                 mov ecx, dword ptr [eax]
// 005c0c0c  83c404               add esp, 4
// 005c0c0f  85c9                 test ecx, ecx
// 005c0c11  7405                 je 0x5c0c18
// 005c0c13  83c110               add ecx, 0x10
// 005c0c16  eb02                 jmp 0x5c0c1a
// 005c0c18  33c9                 xor ecx, ecx
// 005c0c1a  56                   push esi
// 005c0c1b  57                   push edi
// 005c0c1c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005c0c20  890f                 mov dword ptr [edi], ecx
// 005c0c22  8b4004               mov eax, dword ptr [eax + 4]
// 005c0c25  894704               mov dword ptr [edi + 4], eax
// 005c0c28  85c0                 test eax, eax
// 005c0c2a  740c                 je 0x5c0c38
// 005c0c2c  83c004               add eax, 4
// 005c0c2f  b901000000           mov ecx, 1
// 005c0c34  f00fc108             lock xadd dword ptr [eax], ecx
// 005c0c38  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c0c3c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005c0c44  c744240801000000     mov dword ptr [esp + 8], 1
// 005c0c4c  85f6                 test esi, esi
// 005c0c4e  742a                 je 0x5c0c7a
// 005c0c50  8d5604               lea edx, [esi + 4]
// 005c0c53  83c8ff               or eax, 0xffffffff
// 005c0c56  f00fc102             lock xadd dword ptr [edx], eax
// 005c0c5a  751e                 jne 0x5c0c7a
// 005c0c5c  8b16                 mov edx, dword ptr [esi]
// 005c0c5e  8b4204               mov eax, dword ptr [edx + 4]
// 005c0c61  8bce                 mov ecx, esi
// 005c0c63  ffd0                 call eax
// 005c0c65  8d4e08               lea ecx, [esi + 8]
// 005c0c68  83caff               or edx, 0xffffffff
// 005c0c6b  f00fc111             lock xadd dword ptr [ecx], edx
// 005c0c6f  7509                 jne 0x5c0c7a
// 005c0c71  8b06                 mov eax, dword ptr [esi]
// 005c0c73  8b5008               mov edx, dword ptr [eax + 8]
// 005c0c76  8bce                 mov ecx, esi
// 005c0c78  ffd2                 call edx
// 005c0c7a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c0c7e  8bc7                 mov eax, edi
// 005c0c80  5f                   pop edi
// 005c0c81  5e                   pop esi
// 005c0c82  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0c89  83c418               add esp, 0x18
// 005c0c8c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
