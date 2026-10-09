// roc 2008-06 0040b3a0  unit: 1RBX::Metadata::VReflection::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040b3a0
//
// 0040b3a0  6aff                 push -1
// 0040b3a2  68a9677c00           push 0x7c67a9
// 0040b3a7  64a100000000         mov eax, dword ptr fs:[0]
// 0040b3ad  50                   push eax
// 0040b3ae  64892500000000       mov dword ptr fs:[0], esp
// 0040b3b5  83ec0c               sub esp, 0xc
// 0040b3b8  8d442404             lea eax, [esp + 4]
// 0040b3bc  50                   push eax
// 0040b3bd  c744240400000000     mov dword ptr [esp + 4], 0
// 0040b3c5  e856ffffff           call 0x40b320
// 0040b3ca  8b08                 mov ecx, dword ptr [eax]
// 0040b3cc  83c404               add esp, 4
// 0040b3cf  85c9                 test ecx, ecx
// 0040b3d1  7405                 je 0x40b3d8
// 0040b3d3  83c110               add ecx, 0x10
// 0040b3d6  eb02                 jmp 0x40b3da
// 0040b3d8  33c9                 xor ecx, ecx
// 0040b3da  56                   push esi
// 0040b3db  57                   push edi
// 0040b3dc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0040b3e0  890f                 mov dword ptr [edi], ecx
// 0040b3e2  8b4004               mov eax, dword ptr [eax + 4]
// 0040b3e5  894704               mov dword ptr [edi + 4], eax
// 0040b3e8  85c0                 test eax, eax
// 0040b3ea  740c                 je 0x40b3f8
// 0040b3ec  83c004               add eax, 4
// 0040b3ef  b901000000           mov ecx, 1
// 0040b3f4  f00fc108             lock xadd dword ptr [eax], ecx
// 0040b3f8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0040b3fc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0040b404  c744240801000000     mov dword ptr [esp + 8], 1
// 0040b40c  85f6                 test esi, esi
// 0040b40e  742a                 je 0x40b43a
// 0040b410  8d5604               lea edx, [esi + 4]
// 0040b413  83c8ff               or eax, 0xffffffff
// 0040b416  f00fc102             lock xadd dword ptr [edx], eax
// 0040b41a  751e                 jne 0x40b43a
// 0040b41c  8b16                 mov edx, dword ptr [esi]
// 0040b41e  8b4204               mov eax, dword ptr [edx + 4]
// 0040b421  8bce                 mov ecx, esi
// 0040b423  ffd0                 call eax
// 0040b425  8d4e08               lea ecx, [esi + 8]
// 0040b428  83caff               or edx, 0xffffffff
// 0040b42b  f00fc111             lock xadd dword ptr [ecx], edx
// 0040b42f  7509                 jne 0x40b43a
// 0040b431  8b06                 mov eax, dword ptr [esi]
// 0040b433  8b5008               mov edx, dword ptr [eax + 8]
// 0040b436  8bce                 mov ecx, esi
// 0040b438  ffd2                 call edx
// 0040b43a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040b43e  8bc7                 mov eax, edi
// 0040b440  5f                   pop edi
// 0040b441  5e                   pop esi
// 0040b442  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b449  83c418               add esp, 0x18
// 0040b44c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
