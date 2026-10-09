// roc 2008-06 0048f780  unit: RBX::VClothing::?$FactoryProduct::Creator  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048f780
//
// 0048f780  6aff                 push -1
// 0048f782  68a9677c00           push 0x7c67a9
// 0048f787  64a100000000         mov eax, dword ptr fs:[0]
// 0048f78d  50                   push eax
// 0048f78e  64892500000000       mov dword ptr fs:[0], esp
// 0048f795  83ec0c               sub esp, 0xc
// 0048f798  8d442404             lea eax, [esp + 4]
// 0048f79c  50                   push eax
// 0048f79d  c744240400000000     mov dword ptr [esp + 4], 0
// 0048f7a5  e856ffffff           call 0x48f700
// 0048f7aa  8b08                 mov ecx, dword ptr [eax]
// 0048f7ac  83c404               add esp, 4
// 0048f7af  85c9                 test ecx, ecx
// 0048f7b1  7405                 je 0x48f7b8
// 0048f7b3  83c110               add ecx, 0x10
// 0048f7b6  eb02                 jmp 0x48f7ba
// 0048f7b8  33c9                 xor ecx, ecx
// 0048f7ba  56                   push esi
// 0048f7bb  57                   push edi
// 0048f7bc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0048f7c0  890f                 mov dword ptr [edi], ecx
// 0048f7c2  8b4004               mov eax, dword ptr [eax + 4]
// 0048f7c5  894704               mov dword ptr [edi + 4], eax
// 0048f7c8  85c0                 test eax, eax
// 0048f7ca  740c                 je 0x48f7d8
// 0048f7cc  83c004               add eax, 4
// 0048f7cf  b901000000           mov ecx, 1
// 0048f7d4  f00fc108             lock xadd dword ptr [eax], ecx
// 0048f7d8  8b742410             mov esi, dword ptr [esp + 0x10]
// 0048f7dc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0048f7e4  c744240801000000     mov dword ptr [esp + 8], 1
// 0048f7ec  85f6                 test esi, esi
// 0048f7ee  742a                 je 0x48f81a
// 0048f7f0  8d5604               lea edx, [esi + 4]
// 0048f7f3  83c8ff               or eax, 0xffffffff
// 0048f7f6  f00fc102             lock xadd dword ptr [edx], eax
// 0048f7fa  751e                 jne 0x48f81a
// 0048f7fc  8b16                 mov edx, dword ptr [esi]
// 0048f7fe  8b4204               mov eax, dword ptr [edx + 4]
// 0048f801  8bce                 mov ecx, esi
// 0048f803  ffd0                 call eax
// 0048f805  8d4e08               lea ecx, [esi + 8]
// 0048f808  83caff               or edx, 0xffffffff
// 0048f80b  f00fc111             lock xadd dword ptr [ecx], edx
// 0048f80f  7509                 jne 0x48f81a
// 0048f811  8b06                 mov eax, dword ptr [esi]
// 0048f813  8b5008               mov edx, dword ptr [eax + 8]
// 0048f816  8bce                 mov ecx, esi
// 0048f818  ffd2                 call edx
// 0048f81a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048f81e  8bc7                 mov eax, edi
// 0048f820  5f                   pop edi
// 0048f821  5e                   pop esi
// 0048f822  64890d00000000       mov dword ptr fs:[0], ecx
// 0048f829  83c418               add esp, 0x18
// 0048f82c  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ?create@Creator@?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@UBE?AV?$shared_ptr@VObject@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
