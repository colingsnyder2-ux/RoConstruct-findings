// roc 2008-06 004149e0  unit: RBX::VModelInstance::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004149e0
//
// 004149e0  6aff                 push -1
// 004149e2  68a9677c00           push 0x7c67a9
// 004149e7  64a100000000         mov eax, dword ptr fs:[0]
// 004149ed  50                   push eax
// 004149ee  64892500000000       mov dword ptr fs:[0], esp
// 004149f5  83ec0c               sub esp, 0xc
// 004149f8  8d442404             lea eax, [esp + 4]
// 004149fc  50                   push eax
// 004149fd  c744240400000000     mov dword ptr [esp + 4], 0
// 00414a05  e856ffffff           call 0x414960
// 00414a0a  8b08                 mov ecx, dword ptr [eax]
// 00414a0c  83c404               add esp, 4
// 00414a0f  85c9                 test ecx, ecx
// 00414a11  7405                 je 0x414a18
// 00414a13  83c110               add ecx, 0x10
// 00414a16  eb02                 jmp 0x414a1a
// 00414a18  33c9                 xor ecx, ecx
// 00414a1a  56                   push esi
// 00414a1b  57                   push edi
// 00414a1c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00414a20  890f                 mov dword ptr [edi], ecx
// 00414a22  8b4004               mov eax, dword ptr [eax + 4]
// 00414a25  894704               mov dword ptr [edi + 4], eax
// 00414a28  85c0                 test eax, eax
// 00414a2a  740c                 je 0x414a38
// 00414a2c  83c004               add eax, 4
// 00414a2f  b901000000           mov ecx, 1
// 00414a34  f00fc108             lock xadd dword ptr [eax], ecx
// 00414a38  8b742410             mov esi, dword ptr [esp + 0x10]
// 00414a3c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00414a44  c744240801000000     mov dword ptr [esp + 8], 1
// 00414a4c  85f6                 test esi, esi
// 00414a4e  742a                 je 0x414a7a
// 00414a50  8d5604               lea edx, [esi + 4]
// 00414a53  83c8ff               or eax, 0xffffffff
// 00414a56  f00fc102             lock xadd dword ptr [edx], eax
// 00414a5a  751e                 jne 0x414a7a
// 00414a5c  8b16                 mov edx, dword ptr [esi]
// 00414a5e  8b4204               mov eax, dword ptr [edx + 4]
// 00414a61  8bce                 mov ecx, esi
// 00414a63  ffd0                 call eax
// 00414a65  8d4e08               lea ecx, [esi + 8]
// 00414a68  83caff               or edx, 0xffffffff
// 00414a6b  f00fc111             lock xadd dword ptr [ecx], edx
// 00414a6f  7509                 jne 0x414a7a
// 00414a71  8b06                 mov eax, dword ptr [esi]
// 00414a73  8b5008               mov edx, dword ptr [eax + 8]
// 00414a76  8bce                 mov ecx, esi
// 00414a78  ffd2                 call edx
// 00414a7a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00414a7e  8bc7                 mov eax, edi
// 00414a80  5f                   pop edi
// 00414a81  5e                   pop esi
// 00414a82  64890d00000000       mov dword ptr fs:[0], ecx
// 00414a89  83c418               add esp, 0x18
// 00414a8c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
