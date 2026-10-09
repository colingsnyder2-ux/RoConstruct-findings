// roc 2008-06 00580520  unit: RBX::VVelocityMotor::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00580520
//
// 00580520  6aff                 push -1
// 00580522  68a9677c00           push 0x7c67a9
// 00580527  64a100000000         mov eax, dword ptr fs:[0]
// 0058052d  50                   push eax
// 0058052e  64892500000000       mov dword ptr fs:[0], esp
// 00580535  83ec0c               sub esp, 0xc
// 00580538  8d442404             lea eax, [esp + 4]
// 0058053c  50                   push eax
// 0058053d  c744240400000000     mov dword ptr [esp + 4], 0
// 00580545  e856ffffff           call 0x5804a0
// 0058054a  8b08                 mov ecx, dword ptr [eax]
// 0058054c  83c404               add esp, 4
// 0058054f  85c9                 test ecx, ecx
// 00580551  7405                 je 0x580558
// 00580553  83c110               add ecx, 0x10
// 00580556  eb02                 jmp 0x58055a
// 00580558  33c9                 xor ecx, ecx
// 0058055a  56                   push esi
// 0058055b  57                   push edi
// 0058055c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00580560  890f                 mov dword ptr [edi], ecx
// 00580562  8b4004               mov eax, dword ptr [eax + 4]
// 00580565  894704               mov dword ptr [edi + 4], eax
// 00580568  85c0                 test eax, eax
// 0058056a  740c                 je 0x580578
// 0058056c  83c004               add eax, 4
// 0058056f  b901000000           mov ecx, 1
// 00580574  f00fc108             lock xadd dword ptr [eax], ecx
// 00580578  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058057c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00580584  c744240801000000     mov dword ptr [esp + 8], 1
// 0058058c  85f6                 test esi, esi
// 0058058e  742a                 je 0x5805ba
// 00580590  8d5604               lea edx, [esi + 4]
// 00580593  83c8ff               or eax, 0xffffffff
// 00580596  f00fc102             lock xadd dword ptr [edx], eax
// 0058059a  751e                 jne 0x5805ba
// 0058059c  8b16                 mov edx, dword ptr [esi]
// 0058059e  8b4204               mov eax, dword ptr [edx + 4]
// 005805a1  8bce                 mov ecx, esi
// 005805a3  ffd0                 call eax
// 005805a5  8d4e08               lea ecx, [esi + 8]
// 005805a8  83caff               or edx, 0xffffffff
// 005805ab  f00fc111             lock xadd dword ptr [ecx], edx
// 005805af  7509                 jne 0x5805ba
// 005805b1  8b06                 mov eax, dword ptr [esi]
// 005805b3  8b5008               mov edx, dword ptr [eax + 8]
// 005805b6  8bce                 mov ecx, esi
// 005805b8  ffd2                 call edx
// 005805ba  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005805be  8bc7                 mov eax, edi
// 005805c0  5f                   pop edi
// 005805c1  5e                   pop esi
// 005805c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005805c9  83c418               add esp, 0x18
// 005805cc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
