// roc 2008-06 004325a0  unit: RBX::VAccoutrement::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004325a0
//
// 004325a0  6aff                 push -1
// 004325a2  68a9677c00           push 0x7c67a9
// 004325a7  64a100000000         mov eax, dword ptr fs:[0]
// 004325ad  50                   push eax
// 004325ae  64892500000000       mov dword ptr fs:[0], esp
// 004325b5  83ec0c               sub esp, 0xc
// 004325b8  8d442404             lea eax, [esp + 4]
// 004325bc  50                   push eax
// 004325bd  c744240400000000     mov dword ptr [esp + 4], 0
// 004325c5  e856ffffff           call 0x432520
// 004325ca  8b08                 mov ecx, dword ptr [eax]
// 004325cc  83c404               add esp, 4
// 004325cf  85c9                 test ecx, ecx
// 004325d1  7405                 je 0x4325d8
// 004325d3  83c110               add ecx, 0x10
// 004325d6  eb02                 jmp 0x4325da
// 004325d8  33c9                 xor ecx, ecx
// 004325da  56                   push esi
// 004325db  57                   push edi
// 004325dc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004325e0  890f                 mov dword ptr [edi], ecx
// 004325e2  8b4004               mov eax, dword ptr [eax + 4]
// 004325e5  894704               mov dword ptr [edi + 4], eax
// 004325e8  85c0                 test eax, eax
// 004325ea  740c                 je 0x4325f8
// 004325ec  83c004               add eax, 4
// 004325ef  b901000000           mov ecx, 1
// 004325f4  f00fc108             lock xadd dword ptr [eax], ecx
// 004325f8  8b742410             mov esi, dword ptr [esp + 0x10]
// 004325fc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00432604  c744240801000000     mov dword ptr [esp + 8], 1
// 0043260c  85f6                 test esi, esi
// 0043260e  742a                 je 0x43263a
// 00432610  8d5604               lea edx, [esi + 4]
// 00432613  83c8ff               or eax, 0xffffffff
// 00432616  f00fc102             lock xadd dword ptr [edx], eax
// 0043261a  751e                 jne 0x43263a
// 0043261c  8b16                 mov edx, dword ptr [esi]
// 0043261e  8b4204               mov eax, dword ptr [edx + 4]
// 00432621  8bce                 mov ecx, esi
// 00432623  ffd0                 call eax
// 00432625  8d4e08               lea ecx, [esi + 8]
// 00432628  83caff               or edx, 0xffffffff
// 0043262b  f00fc111             lock xadd dword ptr [ecx], edx
// 0043262f  7509                 jne 0x43263a
// 00432631  8b06                 mov eax, dword ptr [esi]
// 00432633  8b5008               mov edx, dword ptr [eax + 8]
// 00432636  8bce                 mov ecx, esi
// 00432638  ffd2                 call edx
// 0043263a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0043263e  8bc7                 mov eax, edi
// 00432640  5f                   pop edi
// 00432641  5e                   pop esi
// 00432642  64890d00000000       mov dword ptr fs:[0], ecx
// 00432649  83c418               add esp, 0x18
// 0043264c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
