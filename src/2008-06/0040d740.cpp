// roc 2008-06 0040d740  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040d740
//
// 0040d740  6aff                 push -1
// 0040d742  68a9677c00           push 0x7c67a9
// 0040d747  64a100000000         mov eax, dword ptr fs:[0]
// 0040d74d  50                   push eax
// 0040d74e  64892500000000       mov dword ptr fs:[0], esp
// 0040d755  83ec0c               sub esp, 0xc
// 0040d758  8d442404             lea eax, [esp + 4]
// 0040d75c  50                   push eax
// 0040d75d  c744240400000000     mov dword ptr [esp + 4], 0
// 0040d765  e8a6fbffff           call 0x40d310
// 0040d76a  8b08                 mov ecx, dword ptr [eax]
// 0040d76c  83c404               add esp, 4
// 0040d76f  85c9                 test ecx, ecx
// 0040d771  7405                 je 0x40d778
// 0040d773  83c110               add ecx, 0x10
// 0040d776  eb02                 jmp 0x40d77a
// 0040d778  33c9                 xor ecx, ecx
// 0040d77a  56                   push esi
// 0040d77b  57                   push edi
// 0040d77c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0040d780  890f                 mov dword ptr [edi], ecx
// 0040d782  8b4004               mov eax, dword ptr [eax + 4]
// 0040d785  894704               mov dword ptr [edi + 4], eax
// 0040d788  85c0                 test eax, eax
// 0040d78a  740c                 je 0x40d798
// 0040d78c  83c004               add eax, 4
// 0040d78f  b901000000           mov ecx, 1
// 0040d794  f00fc108             lock xadd dword ptr [eax], ecx
// 0040d798  8b742410             mov esi, dword ptr [esp + 0x10]
// 0040d79c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0040d7a4  c744240801000000     mov dword ptr [esp + 8], 1
// 0040d7ac  85f6                 test esi, esi
// 0040d7ae  742a                 je 0x40d7da
// 0040d7b0  8d5604               lea edx, [esi + 4]
// 0040d7b3  83c8ff               or eax, 0xffffffff
// 0040d7b6  f00fc102             lock xadd dword ptr [edx], eax
// 0040d7ba  751e                 jne 0x40d7da
// 0040d7bc  8b16                 mov edx, dword ptr [esi]
// 0040d7be  8b4204               mov eax, dword ptr [edx + 4]
// 0040d7c1  8bce                 mov ecx, esi
// 0040d7c3  ffd0                 call eax
// 0040d7c5  8d4e08               lea ecx, [esi + 8]
// 0040d7c8  83caff               or edx, 0xffffffff
// 0040d7cb  f00fc111             lock xadd dword ptr [ecx], edx
// 0040d7cf  7509                 jne 0x40d7da
// 0040d7d1  8b06                 mov eax, dword ptr [esi]
// 0040d7d3  8b5008               mov edx, dword ptr [eax + 8]
// 0040d7d6  8bce                 mov ecx, esi
// 0040d7d8  ffd2                 call edx
// 0040d7da  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040d7de  8bc7                 mov eax, edi
// 0040d7e0  5f                   pop edi
// 0040d7e1  5e                   pop esi
// 0040d7e2  64890d00000000       mov dword ptr fs:[0], ecx
// 0040d7e9  83c418               add esp, 0x18
// 0040d7ec  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
