// roc 2008-06 0048e810  unit: RBX::VHopperBin::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e810
//
// 0048e810  6aff                 push -1
// 0048e812  68a9677c00           push 0x7c67a9
// 0048e817  64a100000000         mov eax, dword ptr fs:[0]
// 0048e81d  50                   push eax
// 0048e81e  64892500000000       mov dword ptr fs:[0], esp
// 0048e825  83ec0c               sub esp, 0xc
// 0048e828  8d442404             lea eax, [esp + 4]
// 0048e82c  50                   push eax
// 0048e82d  c744240400000000     mov dword ptr [esp + 4], 0
// 0048e835  e856ffffff           call 0x48e790
// 0048e83a  8b08                 mov ecx, dword ptr [eax]
// 0048e83c  83c404               add esp, 4
// 0048e83f  85c9                 test ecx, ecx
// 0048e841  7405                 je 0x48e848
// 0048e843  83c110               add ecx, 0x10
// 0048e846  eb02                 jmp 0x48e84a
// 0048e848  33c9                 xor ecx, ecx
// 0048e84a  56                   push esi
// 0048e84b  57                   push edi
// 0048e84c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0048e850  890f                 mov dword ptr [edi], ecx
// 0048e852  8b4004               mov eax, dword ptr [eax + 4]
// 0048e855  894704               mov dword ptr [edi + 4], eax
// 0048e858  85c0                 test eax, eax
// 0048e85a  740c                 je 0x48e868
// 0048e85c  83c004               add eax, 4
// 0048e85f  b901000000           mov ecx, 1
// 0048e864  f00fc108             lock xadd dword ptr [eax], ecx
// 0048e868  8b742410             mov esi, dword ptr [esp + 0x10]
// 0048e86c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0048e874  c744240801000000     mov dword ptr [esp + 8], 1
// 0048e87c  85f6                 test esi, esi
// 0048e87e  742a                 je 0x48e8aa
// 0048e880  8d5604               lea edx, [esi + 4]
// 0048e883  83c8ff               or eax, 0xffffffff
// 0048e886  f00fc102             lock xadd dword ptr [edx], eax
// 0048e88a  751e                 jne 0x48e8aa
// 0048e88c  8b16                 mov edx, dword ptr [esi]
// 0048e88e  8b4204               mov eax, dword ptr [edx + 4]
// 0048e891  8bce                 mov ecx, esi
// 0048e893  ffd0                 call eax
// 0048e895  8d4e08               lea ecx, [esi + 8]
// 0048e898  83caff               or edx, 0xffffffff
// 0048e89b  f00fc111             lock xadd dword ptr [ecx], edx
// 0048e89f  7509                 jne 0x48e8aa
// 0048e8a1  8b06                 mov eax, dword ptr [esi]
// 0048e8a3  8b5008               mov edx, dword ptr [eax + 8]
// 0048e8a6  8bce                 mov ecx, esi
// 0048e8a8  ffd2                 call edx
// 0048e8aa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048e8ae  8bc7                 mov eax, edi
// 0048e8b0  5f                   pop edi
// 0048e8b1  5e                   pop esi
// 0048e8b2  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e8b9  83c418               add esp, 0x18
// 0048e8bc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
