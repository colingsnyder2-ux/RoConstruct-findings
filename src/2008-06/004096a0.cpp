// roc 2008-06 004096a0  unit: RBX::VSelection::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004096a0
//
// 004096a0  6aff                 push -1
// 004096a2  68a9677c00           push 0x7c67a9
// 004096a7  64a100000000         mov eax, dword ptr fs:[0]
// 004096ad  50                   push eax
// 004096ae  64892500000000       mov dword ptr fs:[0], esp
// 004096b5  83ec0c               sub esp, 0xc
// 004096b8  8d442404             lea eax, [esp + 4]
// 004096bc  50                   push eax
// 004096bd  c744240400000000     mov dword ptr [esp + 4], 0
// 004096c5  e856ffffff           call 0x409620
// 004096ca  8b08                 mov ecx, dword ptr [eax]
// 004096cc  83c404               add esp, 4
// 004096cf  85c9                 test ecx, ecx
// 004096d1  7405                 je 0x4096d8
// 004096d3  83c110               add ecx, 0x10
// 004096d6  eb02                 jmp 0x4096da
// 004096d8  33c9                 xor ecx, ecx
// 004096da  56                   push esi
// 004096db  57                   push edi
// 004096dc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004096e0  890f                 mov dword ptr [edi], ecx
// 004096e2  8b4004               mov eax, dword ptr [eax + 4]
// 004096e5  894704               mov dword ptr [edi + 4], eax
// 004096e8  85c0                 test eax, eax
// 004096ea  740c                 je 0x4096f8
// 004096ec  83c004               add eax, 4
// 004096ef  b901000000           mov ecx, 1
// 004096f4  f00fc108             lock xadd dword ptr [eax], ecx
// 004096f8  8b742410             mov esi, dword ptr [esp + 0x10]
// 004096fc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00409704  c744240801000000     mov dword ptr [esp + 8], 1
// 0040970c  85f6                 test esi, esi
// 0040970e  742a                 je 0x40973a
// 00409710  8d5604               lea edx, [esi + 4]
// 00409713  83c8ff               or eax, 0xffffffff
// 00409716  f00fc102             lock xadd dword ptr [edx], eax
// 0040971a  751e                 jne 0x40973a
// 0040971c  8b16                 mov edx, dword ptr [esi]
// 0040971e  8b4204               mov eax, dword ptr [edx + 4]
// 00409721  8bce                 mov ecx, esi
// 00409723  ffd0                 call eax
// 00409725  8d4e08               lea ecx, [esi + 8]
// 00409728  83caff               or edx, 0xffffffff
// 0040972b  f00fc111             lock xadd dword ptr [ecx], edx
// 0040972f  7509                 jne 0x40973a
// 00409731  8b06                 mov eax, dword ptr [esi]
// 00409733  8b5008               mov edx, dword ptr [eax + 8]
// 00409736  8bce                 mov ecx, esi
// 00409738  ffd2                 call edx
// 0040973a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040973e  8bc7                 mov eax, edi
// 00409740  5f                   pop edi
// 00409741  5e                   pop esi
// 00409742  64890d00000000       mov dword ptr fs:[0], ecx
// 00409749  83c418               add esp, 0x18
// 0040974c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
