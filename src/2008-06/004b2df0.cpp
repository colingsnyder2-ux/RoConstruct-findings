// roc 2008-06 004b2df0  unit: RBX::VRotateP::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2df0
//
// 004b2df0  6aff                 push -1
// 004b2df2  68a9677c00           push 0x7c67a9
// 004b2df7  64a100000000         mov eax, dword ptr fs:[0]
// 004b2dfd  50                   push eax
// 004b2dfe  64892500000000       mov dword ptr fs:[0], esp
// 004b2e05  83ec0c               sub esp, 0xc
// 004b2e08  8d442404             lea eax, [esp + 4]
// 004b2e0c  50                   push eax
// 004b2e0d  c744240400000000     mov dword ptr [esp + 4], 0
// 004b2e15  e856ffffff           call 0x4b2d70
// 004b2e1a  8b08                 mov ecx, dword ptr [eax]
// 004b2e1c  83c404               add esp, 4
// 004b2e1f  85c9                 test ecx, ecx
// 004b2e21  7405                 je 0x4b2e28
// 004b2e23  83c110               add ecx, 0x10
// 004b2e26  eb02                 jmp 0x4b2e2a
// 004b2e28  33c9                 xor ecx, ecx
// 004b2e2a  56                   push esi
// 004b2e2b  57                   push edi
// 004b2e2c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004b2e30  890f                 mov dword ptr [edi], ecx
// 004b2e32  8b4004               mov eax, dword ptr [eax + 4]
// 004b2e35  894704               mov dword ptr [edi + 4], eax
// 004b2e38  85c0                 test eax, eax
// 004b2e3a  740c                 je 0x4b2e48
// 004b2e3c  83c004               add eax, 4
// 004b2e3f  b901000000           mov ecx, 1
// 004b2e44  f00fc108             lock xadd dword ptr [eax], ecx
// 004b2e48  8b742410             mov esi, dword ptr [esp + 0x10]
// 004b2e4c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004b2e54  c744240801000000     mov dword ptr [esp + 8], 1
// 004b2e5c  85f6                 test esi, esi
// 004b2e5e  742a                 je 0x4b2e8a
// 004b2e60  8d5604               lea edx, [esi + 4]
// 004b2e63  83c8ff               or eax, 0xffffffff
// 004b2e66  f00fc102             lock xadd dword ptr [edx], eax
// 004b2e6a  751e                 jne 0x4b2e8a
// 004b2e6c  8b16                 mov edx, dword ptr [esi]
// 004b2e6e  8b4204               mov eax, dword ptr [edx + 4]
// 004b2e71  8bce                 mov ecx, esi
// 004b2e73  ffd0                 call eax
// 004b2e75  8d4e08               lea ecx, [esi + 8]
// 004b2e78  83caff               or edx, 0xffffffff
// 004b2e7b  f00fc111             lock xadd dword ptr [ecx], edx
// 004b2e7f  7509                 jne 0x4b2e8a
// 004b2e81  8b06                 mov eax, dword ptr [esi]
// 004b2e83  8b5008               mov edx, dword ptr [eax + 8]
// 004b2e86  8bce                 mov ecx, esi
// 004b2e88  ffd2                 call edx
// 004b2e8a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b2e8e  8bc7                 mov eax, edi
// 004b2e90  5f                   pop edi
// 004b2e91  5e                   pop esi
// 004b2e92  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2e99  83c418               add esp, 0x18
// 004b2e9c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
