// roc 2008-06 004d8d10  unit: RBX::VSky::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8d10
//
// 004d8d10  6aff                 push -1
// 004d8d12  68a9677c00           push 0x7c67a9
// 004d8d17  64a100000000         mov eax, dword ptr fs:[0]
// 004d8d1d  50                   push eax
// 004d8d1e  64892500000000       mov dword ptr fs:[0], esp
// 004d8d25  83ec0c               sub esp, 0xc
// 004d8d28  8d442404             lea eax, [esp + 4]
// 004d8d2c  50                   push eax
// 004d8d2d  c744240400000000     mov dword ptr [esp + 4], 0
// 004d8d35  e856ffffff           call 0x4d8c90
// 004d8d3a  8b08                 mov ecx, dword ptr [eax]
// 004d8d3c  83c404               add esp, 4
// 004d8d3f  85c9                 test ecx, ecx
// 004d8d41  7405                 je 0x4d8d48
// 004d8d43  83c110               add ecx, 0x10
// 004d8d46  eb02                 jmp 0x4d8d4a
// 004d8d48  33c9                 xor ecx, ecx
// 004d8d4a  56                   push esi
// 004d8d4b  57                   push edi
// 004d8d4c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004d8d50  890f                 mov dword ptr [edi], ecx
// 004d8d52  8b4004               mov eax, dword ptr [eax + 4]
// 004d8d55  894704               mov dword ptr [edi + 4], eax
// 004d8d58  85c0                 test eax, eax
// 004d8d5a  740c                 je 0x4d8d68
// 004d8d5c  83c004               add eax, 4
// 004d8d5f  b901000000           mov ecx, 1
// 004d8d64  f00fc108             lock xadd dword ptr [eax], ecx
// 004d8d68  8b742410             mov esi, dword ptr [esp + 0x10]
// 004d8d6c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004d8d74  c744240801000000     mov dword ptr [esp + 8], 1
// 004d8d7c  85f6                 test esi, esi
// 004d8d7e  742a                 je 0x4d8daa
// 004d8d80  8d5604               lea edx, [esi + 4]
// 004d8d83  83c8ff               or eax, 0xffffffff
// 004d8d86  f00fc102             lock xadd dword ptr [edx], eax
// 004d8d8a  751e                 jne 0x4d8daa
// 004d8d8c  8b16                 mov edx, dword ptr [esi]
// 004d8d8e  8b4204               mov eax, dword ptr [edx + 4]
// 004d8d91  8bce                 mov ecx, esi
// 004d8d93  ffd0                 call eax
// 004d8d95  8d4e08               lea ecx, [esi + 8]
// 004d8d98  83caff               or edx, 0xffffffff
// 004d8d9b  f00fc111             lock xadd dword ptr [ecx], edx
// 004d8d9f  7509                 jne 0x4d8daa
// 004d8da1  8b06                 mov eax, dword ptr [esi]
// 004d8da3  8b5008               mov edx, dword ptr [eax + 8]
// 004d8da6  8bce                 mov ecx, esi
// 004d8da8  ffd2                 call edx
// 004d8daa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d8dae  8bc7                 mov eax, edi
// 004d8db0  5f                   pop edi
// 004d8db1  5e                   pop esi
// 004d8db2  64890d00000000       mov dword ptr fs:[0], ecx
// 004d8db9  83c418               add esp, 0x18
// 004d8dbc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
