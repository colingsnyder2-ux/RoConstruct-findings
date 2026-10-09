// roc 2008-06 00414c50  unit: RBX::VScript::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00414c50
//
// 00414c50  6aff                 push -1
// 00414c52  68a9677c00           push 0x7c67a9
// 00414c57  64a100000000         mov eax, dword ptr fs:[0]
// 00414c5d  50                   push eax
// 00414c5e  64892500000000       mov dword ptr fs:[0], esp
// 00414c65  83ec0c               sub esp, 0xc
// 00414c68  8d442404             lea eax, [esp + 4]
// 00414c6c  50                   push eax
// 00414c6d  c744240400000000     mov dword ptr [esp + 4], 0
// 00414c75  e856ffffff           call 0x414bd0
// 00414c7a  8b08                 mov ecx, dword ptr [eax]
// 00414c7c  83c404               add esp, 4
// 00414c7f  85c9                 test ecx, ecx
// 00414c81  7405                 je 0x414c88
// 00414c83  83c110               add ecx, 0x10
// 00414c86  eb02                 jmp 0x414c8a
// 00414c88  33c9                 xor ecx, ecx
// 00414c8a  56                   push esi
// 00414c8b  57                   push edi
// 00414c8c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00414c90  890f                 mov dword ptr [edi], ecx
// 00414c92  8b4004               mov eax, dword ptr [eax + 4]
// 00414c95  894704               mov dword ptr [edi + 4], eax
// 00414c98  85c0                 test eax, eax
// 00414c9a  740c                 je 0x414ca8
// 00414c9c  83c004               add eax, 4
// 00414c9f  b901000000           mov ecx, 1
// 00414ca4  f00fc108             lock xadd dword ptr [eax], ecx
// 00414ca8  8b742410             mov esi, dword ptr [esp + 0x10]
// 00414cac  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00414cb4  c744240801000000     mov dword ptr [esp + 8], 1
// 00414cbc  85f6                 test esi, esi
// 00414cbe  742a                 je 0x414cea
// 00414cc0  8d5604               lea edx, [esi + 4]
// 00414cc3  83c8ff               or eax, 0xffffffff
// 00414cc6  f00fc102             lock xadd dword ptr [edx], eax
// 00414cca  751e                 jne 0x414cea
// 00414ccc  8b16                 mov edx, dword ptr [esi]
// 00414cce  8b4204               mov eax, dword ptr [edx + 4]
// 00414cd1  8bce                 mov ecx, esi
// 00414cd3  ffd0                 call eax
// 00414cd5  8d4e08               lea ecx, [esi + 8]
// 00414cd8  83caff               or edx, 0xffffffff
// 00414cdb  f00fc111             lock xadd dword ptr [ecx], edx
// 00414cdf  7509                 jne 0x414cea
// 00414ce1  8b06                 mov eax, dword ptr [esi]
// 00414ce3  8b5008               mov edx, dword ptr [eax + 8]
// 00414ce6  8bce                 mov ecx, esi
// 00414ce8  ffd2                 call edx
// 00414cea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00414cee  8bc7                 mov eax, edi
// 00414cf0  5f                   pop edi
// 00414cf1  5e                   pop esi
// 00414cf2  64890d00000000       mov dword ptr fs:[0], ecx
// 00414cf9  83c418               add esp, 0x18
// 00414cfc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
