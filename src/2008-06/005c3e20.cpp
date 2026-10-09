// roc 2008-06 005c3e20  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3e20
//
// 005c3e20  6aff                 push -1
// 005c3e22  68a9677c00           push 0x7c67a9
// 005c3e27  64a100000000         mov eax, dword ptr fs:[0]
// 005c3e2d  50                   push eax
// 005c3e2e  64892500000000       mov dword ptr fs:[0], esp
// 005c3e35  83ec0c               sub esp, 0xc
// 005c3e38  8d442404             lea eax, [esp + 4]
// 005c3e3c  50                   push eax
// 005c3e3d  c744240400000000     mov dword ptr [esp + 4], 0
// 005c3e45  e856ffffff           call 0x5c3da0
// 005c3e4a  8b08                 mov ecx, dword ptr [eax]
// 005c3e4c  83c404               add esp, 4
// 005c3e4f  85c9                 test ecx, ecx
// 005c3e51  7405                 je 0x5c3e58
// 005c3e53  83c110               add ecx, 0x10
// 005c3e56  eb02                 jmp 0x5c3e5a
// 005c3e58  33c9                 xor ecx, ecx
// 005c3e5a  56                   push esi
// 005c3e5b  57                   push edi
// 005c3e5c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005c3e60  890f                 mov dword ptr [edi], ecx
// 005c3e62  8b4004               mov eax, dword ptr [eax + 4]
// 005c3e65  894704               mov dword ptr [edi + 4], eax
// 005c3e68  85c0                 test eax, eax
// 005c3e6a  740c                 je 0x5c3e78
// 005c3e6c  83c004               add eax, 4
// 005c3e6f  b901000000           mov ecx, 1
// 005c3e74  f00fc108             lock xadd dword ptr [eax], ecx
// 005c3e78  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c3e7c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005c3e84  c744240801000000     mov dword ptr [esp + 8], 1
// 005c3e8c  85f6                 test esi, esi
// 005c3e8e  742a                 je 0x5c3eba
// 005c3e90  8d5604               lea edx, [esi + 4]
// 005c3e93  83c8ff               or eax, 0xffffffff
// 005c3e96  f00fc102             lock xadd dword ptr [edx], eax
// 005c3e9a  751e                 jne 0x5c3eba
// 005c3e9c  8b16                 mov edx, dword ptr [esi]
// 005c3e9e  8b4204               mov eax, dword ptr [edx + 4]
// 005c3ea1  8bce                 mov ecx, esi
// 005c3ea3  ffd0                 call eax
// 005c3ea5  8d4e08               lea ecx, [esi + 8]
// 005c3ea8  83caff               or edx, 0xffffffff
// 005c3eab  f00fc111             lock xadd dword ptr [ecx], edx
// 005c3eaf  7509                 jne 0x5c3eba
// 005c3eb1  8b06                 mov eax, dword ptr [esi]
// 005c3eb3  8b5008               mov edx, dword ptr [eax + 8]
// 005c3eb6  8bce                 mov ecx, esi
// 005c3eb8  ffd2                 call edx
// 005c3eba  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c3ebe  8bc7                 mov eax, edi
// 005c3ec0  5f                   pop edi
// 005c3ec1  5e                   pop esi
// 005c3ec2  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3ec9  83c418               add esp, 0x18
// 005c3ecc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
