// roc 2008-06 00408ce0  unit: RBX::VDebugSettings::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00408ce0
//
// 00408ce0  6aff                 push -1
// 00408ce2  68a9677c00           push 0x7c67a9
// 00408ce7  64a100000000         mov eax, dword ptr fs:[0]
// 00408ced  50                   push eax
// 00408cee  64892500000000       mov dword ptr fs:[0], esp
// 00408cf5  83ec0c               sub esp, 0xc
// 00408cf8  8d442404             lea eax, [esp + 4]
// 00408cfc  50                   push eax
// 00408cfd  c744240400000000     mov dword ptr [esp + 4], 0
// 00408d05  e816ebffff           call 0x407820
// 00408d0a  8b08                 mov ecx, dword ptr [eax]
// 00408d0c  83c404               add esp, 4
// 00408d0f  85c9                 test ecx, ecx
// 00408d11  7405                 je 0x408d18
// 00408d13  83c110               add ecx, 0x10
// 00408d16  eb02                 jmp 0x408d1a
// 00408d18  33c9                 xor ecx, ecx
// 00408d1a  56                   push esi
// 00408d1b  57                   push edi
// 00408d1c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00408d20  890f                 mov dword ptr [edi], ecx
// 00408d22  8b4004               mov eax, dword ptr [eax + 4]
// 00408d25  894704               mov dword ptr [edi + 4], eax
// 00408d28  85c0                 test eax, eax
// 00408d2a  740c                 je 0x408d38
// 00408d2c  83c004               add eax, 4
// 00408d2f  b901000000           mov ecx, 1
// 00408d34  f00fc108             lock xadd dword ptr [eax], ecx
// 00408d38  8b742410             mov esi, dword ptr [esp + 0x10]
// 00408d3c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00408d44  c744240801000000     mov dword ptr [esp + 8], 1
// 00408d4c  85f6                 test esi, esi
// 00408d4e  742a                 je 0x408d7a
// 00408d50  8d5604               lea edx, [esi + 4]
// 00408d53  83c8ff               or eax, 0xffffffff
// 00408d56  f00fc102             lock xadd dword ptr [edx], eax
// 00408d5a  751e                 jne 0x408d7a
// 00408d5c  8b16                 mov edx, dword ptr [esi]
// 00408d5e  8b4204               mov eax, dword ptr [edx + 4]
// 00408d61  8bce                 mov ecx, esi
// 00408d63  ffd0                 call eax
// 00408d65  8d4e08               lea ecx, [esi + 8]
// 00408d68  83caff               or edx, 0xffffffff
// 00408d6b  f00fc111             lock xadd dword ptr [ecx], edx
// 00408d6f  7509                 jne 0x408d7a
// 00408d71  8b06                 mov eax, dword ptr [esi]
// 00408d73  8b5008               mov edx, dword ptr [eax + 8]
// 00408d76  8bce                 mov ecx, esi
// 00408d78  ffd2                 call edx
// 00408d7a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00408d7e  8bc7                 mov eax, edi
// 00408d80  5f                   pop edi
// 00408d81  5e                   pop esi
// 00408d82  64890d00000000       mov dword ptr fs:[0], ecx
// 00408d89  83c418               add esp, 0x18
// 00408d8c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
