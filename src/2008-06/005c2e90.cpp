// roc 2008-06 005c2e90  unit: RBX::VDebrisService::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2e90
//
// 005c2e90  6aff                 push -1
// 005c2e92  68a9677c00           push 0x7c67a9
// 005c2e97  64a100000000         mov eax, dword ptr fs:[0]
// 005c2e9d  50                   push eax
// 005c2e9e  64892500000000       mov dword ptr fs:[0], esp
// 005c2ea5  83ec0c               sub esp, 0xc
// 005c2ea8  8d442404             lea eax, [esp + 4]
// 005c2eac  50                   push eax
// 005c2ead  c744240400000000     mov dword ptr [esp + 4], 0
// 005c2eb5  e856ffffff           call 0x5c2e10
// 005c2eba  8b08                 mov ecx, dword ptr [eax]
// 005c2ebc  83c404               add esp, 4
// 005c2ebf  85c9                 test ecx, ecx
// 005c2ec1  7405                 je 0x5c2ec8
// 005c2ec3  83c110               add ecx, 0x10
// 005c2ec6  eb02                 jmp 0x5c2eca
// 005c2ec8  33c9                 xor ecx, ecx
// 005c2eca  56                   push esi
// 005c2ecb  57                   push edi
// 005c2ecc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005c2ed0  890f                 mov dword ptr [edi], ecx
// 005c2ed2  8b4004               mov eax, dword ptr [eax + 4]
// 005c2ed5  894704               mov dword ptr [edi + 4], eax
// 005c2ed8  85c0                 test eax, eax
// 005c2eda  740c                 je 0x5c2ee8
// 005c2edc  83c004               add eax, 4
// 005c2edf  b901000000           mov ecx, 1
// 005c2ee4  f00fc108             lock xadd dword ptr [eax], ecx
// 005c2ee8  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c2eec  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005c2ef4  c744240801000000     mov dword ptr [esp + 8], 1
// 005c2efc  85f6                 test esi, esi
// 005c2efe  742a                 je 0x5c2f2a
// 005c2f00  8d5604               lea edx, [esi + 4]
// 005c2f03  83c8ff               or eax, 0xffffffff
// 005c2f06  f00fc102             lock xadd dword ptr [edx], eax
// 005c2f0a  751e                 jne 0x5c2f2a
// 005c2f0c  8b16                 mov edx, dword ptr [esi]
// 005c2f0e  8b4204               mov eax, dword ptr [edx + 4]
// 005c2f11  8bce                 mov ecx, esi
// 005c2f13  ffd0                 call eax
// 005c2f15  8d4e08               lea ecx, [esi + 8]
// 005c2f18  83caff               or edx, 0xffffffff
// 005c2f1b  f00fc111             lock xadd dword ptr [ecx], edx
// 005c2f1f  7509                 jne 0x5c2f2a
// 005c2f21  8b06                 mov eax, dword ptr [esi]
// 005c2f23  8b5008               mov edx, dword ptr [eax + 8]
// 005c2f26  8bce                 mov ecx, esi
// 005c2f28  ffd2                 call edx
// 005c2f2a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c2f2e  8bc7                 mov eax, edi
// 005c2f30  5f                   pop edi
// 005c2f31  5e                   pop esi
// 005c2f32  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2f39  83c418               add esp, 0x18
// 005c2f3c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
