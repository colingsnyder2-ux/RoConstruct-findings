// roc 2008-06 0049a4d0  unit: RBX::Network::VServer::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049a4d0
//
// 0049a4d0  6aff                 push -1
// 0049a4d2  68a9677c00           push 0x7c67a9
// 0049a4d7  64a100000000         mov eax, dword ptr fs:[0]
// 0049a4dd  50                   push eax
// 0049a4de  64892500000000       mov dword ptr fs:[0], esp
// 0049a4e5  83ec0c               sub esp, 0xc
// 0049a4e8  8d442404             lea eax, [esp + 4]
// 0049a4ec  50                   push eax
// 0049a4ed  c744240400000000     mov dword ptr [esp + 4], 0
// 0049a4f5  e856ffffff           call 0x49a450
// 0049a4fa  8b08                 mov ecx, dword ptr [eax]
// 0049a4fc  83c404               add esp, 4
// 0049a4ff  85c9                 test ecx, ecx
// 0049a501  7405                 je 0x49a508
// 0049a503  83c110               add ecx, 0x10
// 0049a506  eb02                 jmp 0x49a50a
// 0049a508  33c9                 xor ecx, ecx
// 0049a50a  56                   push esi
// 0049a50b  57                   push edi
// 0049a50c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0049a510  890f                 mov dword ptr [edi], ecx
// 0049a512  8b4004               mov eax, dword ptr [eax + 4]
// 0049a515  894704               mov dword ptr [edi + 4], eax
// 0049a518  85c0                 test eax, eax
// 0049a51a  740c                 je 0x49a528
// 0049a51c  83c004               add eax, 4
// 0049a51f  b901000000           mov ecx, 1
// 0049a524  f00fc108             lock xadd dword ptr [eax], ecx
// 0049a528  8b742410             mov esi, dword ptr [esp + 0x10]
// 0049a52c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0049a534  c744240801000000     mov dword ptr [esp + 8], 1
// 0049a53c  85f6                 test esi, esi
// 0049a53e  742a                 je 0x49a56a
// 0049a540  8d5604               lea edx, [esi + 4]
// 0049a543  83c8ff               or eax, 0xffffffff
// 0049a546  f00fc102             lock xadd dword ptr [edx], eax
// 0049a54a  751e                 jne 0x49a56a
// 0049a54c  8b16                 mov edx, dword ptr [esi]
// 0049a54e  8b4204               mov eax, dword ptr [edx + 4]
// 0049a551  8bce                 mov ecx, esi
// 0049a553  ffd0                 call eax
// 0049a555  8d4e08               lea ecx, [esi + 8]
// 0049a558  83caff               or edx, 0xffffffff
// 0049a55b  f00fc111             lock xadd dword ptr [ecx], edx
// 0049a55f  7509                 jne 0x49a56a
// 0049a561  8b06                 mov eax, dword ptr [esi]
// 0049a563  8b5008               mov edx, dword ptr [eax + 8]
// 0049a566  8bce                 mov ecx, esi
// 0049a568  ffd2                 call edx
// 0049a56a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0049a56e  8bc7                 mov eax, edi
// 0049a570  5f                   pop edi
// 0049a571  5e                   pop esi
// 0049a572  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a579  83c418               add esp, 0x18
// 0049a57c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
