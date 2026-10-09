// roc 2008-06 005c1f60  unit: RBX::VBodyThrust::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1f60
//
// 005c1f60  6aff                 push -1
// 005c1f62  68a9677c00           push 0x7c67a9
// 005c1f67  64a100000000         mov eax, dword ptr fs:[0]
// 005c1f6d  50                   push eax
// 005c1f6e  64892500000000       mov dword ptr fs:[0], esp
// 005c1f75  83ec0c               sub esp, 0xc
// 005c1f78  8d442404             lea eax, [esp + 4]
// 005c1f7c  50                   push eax
// 005c1f7d  c744240400000000     mov dword ptr [esp + 4], 0
// 005c1f85  e856ffffff           call 0x5c1ee0
// 005c1f8a  8b08                 mov ecx, dword ptr [eax]
// 005c1f8c  83c404               add esp, 4
// 005c1f8f  85c9                 test ecx, ecx
// 005c1f91  7405                 je 0x5c1f98
// 005c1f93  83c110               add ecx, 0x10
// 005c1f96  eb02                 jmp 0x5c1f9a
// 005c1f98  33c9                 xor ecx, ecx
// 005c1f9a  56                   push esi
// 005c1f9b  57                   push edi
// 005c1f9c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005c1fa0  890f                 mov dword ptr [edi], ecx
// 005c1fa2  8b4004               mov eax, dword ptr [eax + 4]
// 005c1fa5  894704               mov dword ptr [edi + 4], eax
// 005c1fa8  85c0                 test eax, eax
// 005c1faa  740c                 je 0x5c1fb8
// 005c1fac  83c004               add eax, 4
// 005c1faf  b901000000           mov ecx, 1
// 005c1fb4  f00fc108             lock xadd dword ptr [eax], ecx
// 005c1fb8  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c1fbc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005c1fc4  c744240801000000     mov dword ptr [esp + 8], 1
// 005c1fcc  85f6                 test esi, esi
// 005c1fce  742a                 je 0x5c1ffa
// 005c1fd0  8d5604               lea edx, [esi + 4]
// 005c1fd3  83c8ff               or eax, 0xffffffff
// 005c1fd6  f00fc102             lock xadd dword ptr [edx], eax
// 005c1fda  751e                 jne 0x5c1ffa
// 005c1fdc  8b16                 mov edx, dword ptr [esi]
// 005c1fde  8b4204               mov eax, dword ptr [edx + 4]
// 005c1fe1  8bce                 mov ecx, esi
// 005c1fe3  ffd0                 call eax
// 005c1fe5  8d4e08               lea ecx, [esi + 8]
// 005c1fe8  83caff               or edx, 0xffffffff
// 005c1feb  f00fc111             lock xadd dword ptr [ecx], edx
// 005c1fef  7509                 jne 0x5c1ffa
// 005c1ff1  8b06                 mov eax, dword ptr [esi]
// 005c1ff3  8b5008               mov edx, dword ptr [eax + 8]
// 005c1ff6  8bce                 mov ecx, esi
// 005c1ff8  ffd2                 call edx
// 005c1ffa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c1ffe  8bc7                 mov eax, edi
// 005c2000  5f                   pop edi
// 005c2001  5e                   pop esi
// 005c2002  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2009  83c418               add esp, 0x18
// 005c200c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
