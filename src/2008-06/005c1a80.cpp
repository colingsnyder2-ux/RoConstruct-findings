// roc 2008-06 005c1a80  unit: RBX::VBodyGyro::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1a80
//
// 005c1a80  6aff                 push -1
// 005c1a82  68a9677c00           push 0x7c67a9
// 005c1a87  64a100000000         mov eax, dword ptr fs:[0]
// 005c1a8d  50                   push eax
// 005c1a8e  64892500000000       mov dword ptr fs:[0], esp
// 005c1a95  83ec0c               sub esp, 0xc
// 005c1a98  8d442404             lea eax, [esp + 4]
// 005c1a9c  50                   push eax
// 005c1a9d  c744240400000000     mov dword ptr [esp + 4], 0
// 005c1aa5  e856ffffff           call 0x5c1a00
// 005c1aaa  8b08                 mov ecx, dword ptr [eax]
// 005c1aac  83c404               add esp, 4
// 005c1aaf  85c9                 test ecx, ecx
// 005c1ab1  7405                 je 0x5c1ab8
// 005c1ab3  83c110               add ecx, 0x10
// 005c1ab6  eb02                 jmp 0x5c1aba
// 005c1ab8  33c9                 xor ecx, ecx
// 005c1aba  56                   push esi
// 005c1abb  57                   push edi
// 005c1abc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005c1ac0  890f                 mov dword ptr [edi], ecx
// 005c1ac2  8b4004               mov eax, dword ptr [eax + 4]
// 005c1ac5  894704               mov dword ptr [edi + 4], eax
// 005c1ac8  85c0                 test eax, eax
// 005c1aca  740c                 je 0x5c1ad8
// 005c1acc  83c004               add eax, 4
// 005c1acf  b901000000           mov ecx, 1
// 005c1ad4  f00fc108             lock xadd dword ptr [eax], ecx
// 005c1ad8  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c1adc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005c1ae4  c744240801000000     mov dword ptr [esp + 8], 1
// 005c1aec  85f6                 test esi, esi
// 005c1aee  742a                 je 0x5c1b1a
// 005c1af0  8d5604               lea edx, [esi + 4]
// 005c1af3  83c8ff               or eax, 0xffffffff
// 005c1af6  f00fc102             lock xadd dword ptr [edx], eax
// 005c1afa  751e                 jne 0x5c1b1a
// 005c1afc  8b16                 mov edx, dword ptr [esi]
// 005c1afe  8b4204               mov eax, dword ptr [edx + 4]
// 005c1b01  8bce                 mov ecx, esi
// 005c1b03  ffd0                 call eax
// 005c1b05  8d4e08               lea ecx, [esi + 8]
// 005c1b08  83caff               or edx, 0xffffffff
// 005c1b0b  f00fc111             lock xadd dword ptr [ecx], edx
// 005c1b0f  7509                 jne 0x5c1b1a
// 005c1b11  8b06                 mov eax, dword ptr [esi]
// 005c1b13  8b5008               mov edx, dword ptr [eax + 8]
// 005c1b16  8bce                 mov ecx, esi
// 005c1b18  ffd2                 call edx
// 005c1b1a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c1b1e  8bc7                 mov eax, edi
// 005c1b20  5f                   pop edi
// 005c1b21  5e                   pop esi
// 005c1b22  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1b29  83c418               add esp, 0x18
// 005c1b2c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
