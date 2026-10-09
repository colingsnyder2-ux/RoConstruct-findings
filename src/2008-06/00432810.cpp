// roc 2008-06 00432810  unit: RBX::VHat::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432810
//
// 00432810  6aff                 push -1
// 00432812  68a9677c00           push 0x7c67a9
// 00432817  64a100000000         mov eax, dword ptr fs:[0]
// 0043281d  50                   push eax
// 0043281e  64892500000000       mov dword ptr fs:[0], esp
// 00432825  83ec0c               sub esp, 0xc
// 00432828  8d442404             lea eax, [esp + 4]
// 0043282c  50                   push eax
// 0043282d  c744240400000000     mov dword ptr [esp + 4], 0
// 00432835  e856ffffff           call 0x432790
// 0043283a  8b08                 mov ecx, dword ptr [eax]
// 0043283c  83c404               add esp, 4
// 0043283f  85c9                 test ecx, ecx
// 00432841  7405                 je 0x432848
// 00432843  83c110               add ecx, 0x10
// 00432846  eb02                 jmp 0x43284a
// 00432848  33c9                 xor ecx, ecx
// 0043284a  56                   push esi
// 0043284b  57                   push edi
// 0043284c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00432850  890f                 mov dword ptr [edi], ecx
// 00432852  8b4004               mov eax, dword ptr [eax + 4]
// 00432855  894704               mov dword ptr [edi + 4], eax
// 00432858  85c0                 test eax, eax
// 0043285a  740c                 je 0x432868
// 0043285c  83c004               add eax, 4
// 0043285f  b901000000           mov ecx, 1
// 00432864  f00fc108             lock xadd dword ptr [eax], ecx
// 00432868  8b742410             mov esi, dword ptr [esp + 0x10]
// 0043286c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00432874  c744240801000000     mov dword ptr [esp + 8], 1
// 0043287c  85f6                 test esi, esi
// 0043287e  742a                 je 0x4328aa
// 00432880  8d5604               lea edx, [esi + 4]
// 00432883  83c8ff               or eax, 0xffffffff
// 00432886  f00fc102             lock xadd dword ptr [edx], eax
// 0043288a  751e                 jne 0x4328aa
// 0043288c  8b16                 mov edx, dword ptr [esi]
// 0043288e  8b4204               mov eax, dword ptr [edx + 4]
// 00432891  8bce                 mov ecx, esi
// 00432893  ffd0                 call eax
// 00432895  8d4e08               lea ecx, [esi + 8]
// 00432898  83caff               or edx, 0xffffffff
// 0043289b  f00fc111             lock xadd dword ptr [ecx], edx
// 0043289f  7509                 jne 0x4328aa
// 004328a1  8b06                 mov eax, dword ptr [esi]
// 004328a3  8b5008               mov edx, dword ptr [eax + 8]
// 004328a6  8bce                 mov ecx, esi
// 004328a8  ffd2                 call edx
// 004328aa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004328ae  8bc7                 mov eax, edi
// 004328b0  5f                   pop edi
// 004328b1  5e                   pop esi
// 004328b2  64890d00000000       mov dword ptr fs:[0], ecx
// 004328b9  83c418               add esp, 0x18
// 004328bc  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
