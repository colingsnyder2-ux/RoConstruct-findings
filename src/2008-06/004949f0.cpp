// roc 2008-06 004949f0  unit: RBX::VShirt::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004949f0
//
// 004949f0  6aff                 push -1
// 004949f2  68a9677c00           push 0x7c67a9
// 004949f7  64a100000000         mov eax, dword ptr fs:[0]
// 004949fd  50                   push eax
// 004949fe  64892500000000       mov dword ptr fs:[0], esp
// 00494a05  83ec0c               sub esp, 0xc
// 00494a08  8d442404             lea eax, [esp + 4]
// 00494a0c  50                   push eax
// 00494a0d  c744240400000000     mov dword ptr [esp + 4], 0
// 00494a15  e836f8ffff           call 0x494250
// 00494a1a  8b08                 mov ecx, dword ptr [eax]
// 00494a1c  83c404               add esp, 4
// 00494a1f  85c9                 test ecx, ecx
// 00494a21  7405                 je 0x494a28
// 00494a23  83c110               add ecx, 0x10
// 00494a26  eb02                 jmp 0x494a2a
// 00494a28  33c9                 xor ecx, ecx
// 00494a2a  56                   push esi
// 00494a2b  57                   push edi
// 00494a2c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00494a30  890f                 mov dword ptr [edi], ecx
// 00494a32  8b4004               mov eax, dword ptr [eax + 4]
// 00494a35  894704               mov dword ptr [edi + 4], eax
// 00494a38  85c0                 test eax, eax
// 00494a3a  740c                 je 0x494a48
// 00494a3c  83c004               add eax, 4
// 00494a3f  b901000000           mov ecx, 1
// 00494a44  f00fc108             lock xadd dword ptr [eax], ecx
// 00494a48  8b742410             mov esi, dword ptr [esp + 0x10]
// 00494a4c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00494a54  c744240801000000     mov dword ptr [esp + 8], 1
// 00494a5c  85f6                 test esi, esi
// 00494a5e  742a                 je 0x494a8a
// 00494a60  8d5604               lea edx, [esi + 4]
// 00494a63  83c8ff               or eax, 0xffffffff
// 00494a66  f00fc102             lock xadd dword ptr [edx], eax
// 00494a6a  751e                 jne 0x494a8a
// 00494a6c  8b16                 mov edx, dword ptr [esi]
// 00494a6e  8b4204               mov eax, dword ptr [edx + 4]
// 00494a71  8bce                 mov ecx, esi
// 00494a73  ffd0                 call eax
// 00494a75  8d4e08               lea ecx, [esi + 8]
// 00494a78  83caff               or edx, 0xffffffff
// 00494a7b  f00fc111             lock xadd dword ptr [ecx], edx
// 00494a7f  7509                 jne 0x494a8a
// 00494a81  8b06                 mov eax, dword ptr [esi]
// 00494a83  8b5008               mov edx, dword ptr [eax + 8]
// 00494a86  8bce                 mov ecx, esi
// 00494a88  ffd2                 call edx
// 00494a8a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00494a8e  8bc7                 mov eax, edi
// 00494a90  5f                   pop edi
// 00494a91  5e                   pop esi
// 00494a92  64890d00000000       mov dword ptr fs:[0], ecx
// 00494a99  83c418               add esp, 0x18
// 00494a9c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
