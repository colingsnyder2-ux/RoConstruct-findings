// roc 2008-06 0044d560  unit: RBX::VGameSettings::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044d560
//
// 0044d560  6aff                 push -1
// 0044d562  68a9677c00           push 0x7c67a9
// 0044d567  64a100000000         mov eax, dword ptr fs:[0]
// 0044d56d  50                   push eax
// 0044d56e  64892500000000       mov dword ptr fs:[0], esp
// 0044d575  83ec0c               sub esp, 0xc
// 0044d578  8d442404             lea eax, [esp + 4]
// 0044d57c  50                   push eax
// 0044d57d  c744240400000000     mov dword ptr [esp + 4], 0
// 0044d585  e836e8ffff           call 0x44bdc0
// 0044d58a  8b08                 mov ecx, dword ptr [eax]
// 0044d58c  83c404               add esp, 4
// 0044d58f  85c9                 test ecx, ecx
// 0044d591  7405                 je 0x44d598
// 0044d593  83c110               add ecx, 0x10
// 0044d596  eb02                 jmp 0x44d59a
// 0044d598  33c9                 xor ecx, ecx
// 0044d59a  56                   push esi
// 0044d59b  57                   push edi
// 0044d59c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0044d5a0  890f                 mov dword ptr [edi], ecx
// 0044d5a2  8b4004               mov eax, dword ptr [eax + 4]
// 0044d5a5  894704               mov dword ptr [edi + 4], eax
// 0044d5a8  85c0                 test eax, eax
// 0044d5aa  740c                 je 0x44d5b8
// 0044d5ac  83c004               add eax, 4
// 0044d5af  b901000000           mov ecx, 1
// 0044d5b4  f00fc108             lock xadd dword ptr [eax], ecx
// 0044d5b8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0044d5bc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0044d5c4  c744240801000000     mov dword ptr [esp + 8], 1
// 0044d5cc  85f6                 test esi, esi
// 0044d5ce  742a                 je 0x44d5fa
// 0044d5d0  8d5604               lea edx, [esi + 4]
// 0044d5d3  83c8ff               or eax, 0xffffffff
// 0044d5d6  f00fc102             lock xadd dword ptr [edx], eax
// 0044d5da  751e                 jne 0x44d5fa
// 0044d5dc  8b16                 mov edx, dword ptr [esi]
// 0044d5de  8b4204               mov eax, dword ptr [edx + 4]
// 0044d5e1  8bce                 mov ecx, esi
// 0044d5e3  ffd0                 call eax
// 0044d5e5  8d4e08               lea ecx, [esi + 8]
// 0044d5e8  83caff               or edx, 0xffffffff
// 0044d5eb  f00fc111             lock xadd dword ptr [ecx], edx
// 0044d5ef  7509                 jne 0x44d5fa
// 0044d5f1  8b06                 mov eax, dword ptr [esi]
// 0044d5f3  8b5008               mov edx, dword ptr [eax + 8]
// 0044d5f6  8bce                 mov ecx, esi
// 0044d5f8  ffd2                 call edx
// 0044d5fa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0044d5fe  8bc7                 mov eax, edi
// 0044d600  5f                   pop edi
// 0044d601  5e                   pop esi
// 0044d602  64890d00000000       mov dword ptr fs:[0], ecx
// 0044d609  83c418               add esp, 0x18
// 0044d60c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
