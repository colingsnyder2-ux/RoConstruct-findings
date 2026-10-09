// roc 2008-06 005c1cf0  unit: RBX::VBodyForce::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1cf0
//
// 005c1cf0  6aff                 push -1
// 005c1cf2  68a9677c00           push 0x7c67a9
// 005c1cf7  64a100000000         mov eax, dword ptr fs:[0]
// 005c1cfd  50                   push eax
// 005c1cfe  64892500000000       mov dword ptr fs:[0], esp
// 005c1d05  83ec0c               sub esp, 0xc
// 005c1d08  8d442404             lea eax, [esp + 4]
// 005c1d0c  50                   push eax
// 005c1d0d  c744240400000000     mov dword ptr [esp + 4], 0
// 005c1d15  e856ffffff           call 0x5c1c70
// 005c1d1a  8b08                 mov ecx, dword ptr [eax]
// 005c1d1c  83c404               add esp, 4
// 005c1d1f  85c9                 test ecx, ecx
// 005c1d21  7405                 je 0x5c1d28
// 005c1d23  83c110               add ecx, 0x10
// 005c1d26  eb02                 jmp 0x5c1d2a
// 005c1d28  33c9                 xor ecx, ecx
// 005c1d2a  56                   push esi
// 005c1d2b  57                   push edi
// 005c1d2c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005c1d30  890f                 mov dword ptr [edi], ecx
// 005c1d32  8b4004               mov eax, dword ptr [eax + 4]
// 005c1d35  894704               mov dword ptr [edi + 4], eax
// 005c1d38  85c0                 test eax, eax
// 005c1d3a  740c                 je 0x5c1d48
// 005c1d3c  83c004               add eax, 4
// 005c1d3f  b901000000           mov ecx, 1
// 005c1d44  f00fc108             lock xadd dword ptr [eax], ecx
// 005c1d48  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c1d4c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005c1d54  c744240801000000     mov dword ptr [esp + 8], 1
// 005c1d5c  85f6                 test esi, esi
// 005c1d5e  742a                 je 0x5c1d8a
// 005c1d60  8d5604               lea edx, [esi + 4]
// 005c1d63  83c8ff               or eax, 0xffffffff
// 005c1d66  f00fc102             lock xadd dword ptr [edx], eax
// 005c1d6a  751e                 jne 0x5c1d8a
// 005c1d6c  8b16                 mov edx, dword ptr [esi]
// 005c1d6e  8b4204               mov eax, dword ptr [edx + 4]
// 005c1d71  8bce                 mov ecx, esi
// 005c1d73  ffd0                 call eax
// 005c1d75  8d4e08               lea ecx, [esi + 8]
// 005c1d78  83caff               or edx, 0xffffffff
// 005c1d7b  f00fc111             lock xadd dword ptr [ecx], edx
// 005c1d7f  7509                 jne 0x5c1d8a
// 005c1d81  8b06                 mov eax, dword ptr [esi]
// 005c1d83  8b5008               mov edx, dword ptr [eax + 8]
// 005c1d86  8bce                 mov ecx, esi
// 005c1d88  ffd2                 call edx
// 005c1d8a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c1d8e  8bc7                 mov eax, edi
// 005c1d90  5f                   pop edi
// 005c1d91  5e                   pop esi
// 005c1d92  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1d99  83c418               add esp, 0x18
// 005c1d9c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
