// roc 2008-06 0041ecb0  unit: RBX::VSpecialShape::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041ecb0
//
// 0041ecb0  6aff                 push -1
// 0041ecb2  68a9677c00           push 0x7c67a9
// 0041ecb7  64a100000000         mov eax, dword ptr fs:[0]
// 0041ecbd  50                   push eax
// 0041ecbe  64892500000000       mov dword ptr fs:[0], esp
// 0041ecc5  83ec0c               sub esp, 0xc
// 0041ecc8  8d442404             lea eax, [esp + 4]
// 0041eccc  50                   push eax
// 0041eccd  c744240400000000     mov dword ptr [esp + 4], 0
// 0041ecd5  e856ffffff           call 0x41ec30
// 0041ecda  8b08                 mov ecx, dword ptr [eax]
// 0041ecdc  83c404               add esp, 4
// 0041ecdf  85c9                 test ecx, ecx
// 0041ece1  7405                 je 0x41ece8
// 0041ece3  83c110               add ecx, 0x10
// 0041ece6  eb02                 jmp 0x41ecea
// 0041ece8  33c9                 xor ecx, ecx
// 0041ecea  56                   push esi
// 0041eceb  57                   push edi
// 0041ecec  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0041ecf0  890f                 mov dword ptr [edi], ecx
// 0041ecf2  8b4004               mov eax, dword ptr [eax + 4]
// 0041ecf5  894704               mov dword ptr [edi + 4], eax
// 0041ecf8  85c0                 test eax, eax
// 0041ecfa  740c                 je 0x41ed08
// 0041ecfc  83c004               add eax, 4
// 0041ecff  b901000000           mov ecx, 1
// 0041ed04  f00fc108             lock xadd dword ptr [eax], ecx
// 0041ed08  8b742410             mov esi, dword ptr [esp + 0x10]
// 0041ed0c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0041ed14  c744240801000000     mov dword ptr [esp + 8], 1
// 0041ed1c  85f6                 test esi, esi
// 0041ed1e  742a                 je 0x41ed4a
// 0041ed20  8d5604               lea edx, [esi + 4]
// 0041ed23  83c8ff               or eax, 0xffffffff
// 0041ed26  f00fc102             lock xadd dword ptr [edx], eax
// 0041ed2a  751e                 jne 0x41ed4a
// 0041ed2c  8b16                 mov edx, dword ptr [esi]
// 0041ed2e  8b4204               mov eax, dword ptr [edx + 4]
// 0041ed31  8bce                 mov ecx, esi
// 0041ed33  ffd0                 call eax
// 0041ed35  8d4e08               lea ecx, [esi + 8]
// 0041ed38  83caff               or edx, 0xffffffff
// 0041ed3b  f00fc111             lock xadd dword ptr [ecx], edx
// 0041ed3f  7509                 jne 0x41ed4a
// 0041ed41  8b06                 mov eax, dword ptr [esi]
// 0041ed43  8b5008               mov edx, dword ptr [eax + 8]
// 0041ed46  8bce                 mov ecx, esi
// 0041ed48  ffd2                 call edx
// 0041ed4a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041ed4e  8bc7                 mov eax, edi
// 0041ed50  5f                   pop edi
// 0041ed51  5e                   pop esi
// 0041ed52  64890d00000000       mov dword ptr fs:[0], ecx
// 0041ed59  83c418               add esp, 0x18
// 0041ed5c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
