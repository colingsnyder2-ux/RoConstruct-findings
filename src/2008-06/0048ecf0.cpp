// roc 2008-06 0048ecf0  unit: RBX::VLegacyHopperService::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048ecf0
//
// 0048ecf0  6aff                 push -1
// 0048ecf2  68a9677c00           push 0x7c67a9
// 0048ecf7  64a100000000         mov eax, dword ptr fs:[0]
// 0048ecfd  50                   push eax
// 0048ecfe  64892500000000       mov dword ptr fs:[0], esp
// 0048ed05  83ec0c               sub esp, 0xc
// 0048ed08  8d442404             lea eax, [esp + 4]
// 0048ed0c  50                   push eax
// 0048ed0d  c744240400000000     mov dword ptr [esp + 4], 0
// 0048ed15  e856ffffff           call 0x48ec70
// 0048ed1a  8b08                 mov ecx, dword ptr [eax]
// 0048ed1c  83c404               add esp, 4
// 0048ed1f  85c9                 test ecx, ecx
// 0048ed21  7405                 je 0x48ed28
// 0048ed23  83c110               add ecx, 0x10
// 0048ed26  eb02                 jmp 0x48ed2a
// 0048ed28  33c9                 xor ecx, ecx
// 0048ed2a  56                   push esi
// 0048ed2b  57                   push edi
// 0048ed2c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0048ed30  890f                 mov dword ptr [edi], ecx
// 0048ed32  8b4004               mov eax, dword ptr [eax + 4]
// 0048ed35  894704               mov dword ptr [edi + 4], eax
// 0048ed38  85c0                 test eax, eax
// 0048ed3a  740c                 je 0x48ed48
// 0048ed3c  83c004               add eax, 4
// 0048ed3f  b901000000           mov ecx, 1
// 0048ed44  f00fc108             lock xadd dword ptr [eax], ecx
// 0048ed48  8b742410             mov esi, dword ptr [esp + 0x10]
// 0048ed4c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0048ed54  c744240801000000     mov dword ptr [esp + 8], 1
// 0048ed5c  85f6                 test esi, esi
// 0048ed5e  742a                 je 0x48ed8a
// 0048ed60  8d5604               lea edx, [esi + 4]
// 0048ed63  83c8ff               or eax, 0xffffffff
// 0048ed66  f00fc102             lock xadd dword ptr [edx], eax
// 0048ed6a  751e                 jne 0x48ed8a
// 0048ed6c  8b16                 mov edx, dword ptr [esi]
// 0048ed6e  8b4204               mov eax, dword ptr [edx + 4]
// 0048ed71  8bce                 mov ecx, esi
// 0048ed73  ffd0                 call eax
// 0048ed75  8d4e08               lea ecx, [esi + 8]
// 0048ed78  83caff               or edx, 0xffffffff
// 0048ed7b  f00fc111             lock xadd dword ptr [ecx], edx
// 0048ed7f  7509                 jne 0x48ed8a
// 0048ed81  8b06                 mov eax, dword ptr [esi]
// 0048ed83  8b5008               mov edx, dword ptr [eax + 8]
// 0048ed86  8bce                 mov ecx, esi
// 0048ed88  ffd2                 call edx
// 0048ed8a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048ed8e  8bc7                 mov eax, edi
// 0048ed90  5f                   pop edi
// 0048ed91  5e                   pop esi
// 0048ed92  64890d00000000       mov dword ptr fs:[0], ecx
// 0048ed99  83c418               add esp, 0x18
// 0048ed9c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
