// roc 2008-06 0063a340  unit: G3D::VColor3::V?$Value::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063a340
//
// 0063a340  6aff                 push -1
// 0063a342  68a9677c00           push 0x7c67a9
// 0063a347  64a100000000         mov eax, dword ptr fs:[0]
// 0063a34d  50                   push eax
// 0063a34e  64892500000000       mov dword ptr fs:[0], esp
// 0063a355  83ec0c               sub esp, 0xc
// 0063a358  8d442404             lea eax, [esp + 4]
// 0063a35c  50                   push eax
// 0063a35d  c744240400000000     mov dword ptr [esp + 4], 0
// 0063a365  e896f6ffff           call 0x639a00
// 0063a36a  8b08                 mov ecx, dword ptr [eax]
// 0063a36c  83c404               add esp, 4
// 0063a36f  85c9                 test ecx, ecx
// 0063a371  7405                 je 0x63a378
// 0063a373  83c110               add ecx, 0x10
// 0063a376  eb02                 jmp 0x63a37a
// 0063a378  33c9                 xor ecx, ecx
// 0063a37a  56                   push esi
// 0063a37b  57                   push edi
// 0063a37c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0063a380  890f                 mov dword ptr [edi], ecx
// 0063a382  8b4004               mov eax, dword ptr [eax + 4]
// 0063a385  894704               mov dword ptr [edi + 4], eax
// 0063a388  85c0                 test eax, eax
// 0063a38a  740c                 je 0x63a398
// 0063a38c  83c004               add eax, 4
// 0063a38f  b901000000           mov ecx, 1
// 0063a394  f00fc108             lock xadd dword ptr [eax], ecx
// 0063a398  8b742410             mov esi, dword ptr [esp + 0x10]
// 0063a39c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0063a3a4  c744240801000000     mov dword ptr [esp + 8], 1
// 0063a3ac  85f6                 test esi, esi
// 0063a3ae  742a                 je 0x63a3da
// 0063a3b0  8d5604               lea edx, [esi + 4]
// 0063a3b3  83c8ff               or eax, 0xffffffff
// 0063a3b6  f00fc102             lock xadd dword ptr [edx], eax
// 0063a3ba  751e                 jne 0x63a3da
// 0063a3bc  8b16                 mov edx, dword ptr [esi]
// 0063a3be  8b4204               mov eax, dword ptr [edx + 4]
// 0063a3c1  8bce                 mov ecx, esi
// 0063a3c3  ffd0                 call eax
// 0063a3c5  8d4e08               lea ecx, [esi + 8]
// 0063a3c8  83caff               or edx, 0xffffffff
// 0063a3cb  f00fc111             lock xadd dword ptr [ecx], edx
// 0063a3cf  7509                 jne 0x63a3da
// 0063a3d1  8b06                 mov eax, dword ptr [esi]
// 0063a3d3  8b5008               mov edx, dword ptr [eax + 8]
// 0063a3d6  8bce                 mov ecx, esi
// 0063a3d8  ffd2                 call edx
// 0063a3da  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063a3de  8bc7                 mov eax, edi
// 0063a3e0  5f                   pop edi
// 0063a3e1  5e                   pop esi
// 0063a3e2  64890d00000000       mov dword ptr fs:[0], ecx
// 0063a3e9  83c418               add esp, 0x18
// 0063a3ec  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
