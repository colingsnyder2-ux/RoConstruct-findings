// roc 2011-06 009728c0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009728c0
//
// 009728c0  83ec08               sub esp, 8
// 009728c3  56                   push esi
// 009728c4  8b742410             mov esi, dword ptr [esp + 0x10]
// 009728c8  57                   push edi
// 009728c9  8bf9                 mov edi, ecx
// 009728cb  56                   push esi
// 009728cc  8d4c2410             lea ecx, [esp + 0x10]
// 009728d0  8974240c             mov dword ptr [esp + 0xc], esi
// 009728d4  e807f6ffff           call 0x971ee0
// 009728d9  56                   push esi
// 009728da  8d442410             lea eax, [esp + 0x10]
// 009728de  56                   push esi
// 009728df  50                   push eax
// 009728e0  e85b8defff           call 0x86b640
// 009728e5  8d4c2414             lea ecx, [esp + 0x14]
// 009728e9  83c40c               add esp, 0xc
// 009728ec  3bcf                 cmp ecx, edi
// 009728ee  7406                 je 0x9728f6
// 009728f0  8b542408             mov edx, dword ptr [esp + 8]
// 009728f4  8917                 mov dword ptr [edi], edx
// 009728f6  8b7704               mov esi, dword ptr [edi + 4]
// 009728f9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009728fd  894704               mov dword ptr [edi + 4], eax
// 00972900  85f6                 test esi, esi
// 00972902  742a                 je 0x97292e
// 00972904  8d4e04               lea ecx, [esi + 4]
// 00972907  83caff               or edx, 0xffffffff
// 0097290a  f00fc111             lock xadd dword ptr [ecx], edx
// 0097290e  751e                 jne 0x97292e
// 00972910  8b06                 mov eax, dword ptr [esi]
// 00972912  8b5004               mov edx, dword ptr [eax + 4]
// 00972915  8bce                 mov ecx, esi
// 00972917  ffd2                 call edx
// 00972919  8d4608               lea eax, [esi + 8]
// 0097291c  83c9ff               or ecx, 0xffffffff
// 0097291f  f00fc108             lock xadd dword ptr [eax], ecx
// 00972923  7509                 jne 0x97292e
// 00972925  8b16                 mov edx, dword ptr [esi]
// 00972927  8b4208               mov eax, dword ptr [edx + 8]
// 0097292a  8bce                 mov ecx, esi
// 0097292c  ffd0                 call eax
// 0097292e  5f                   pop edi
// 0097292f  5e                   pop esi
// 00972930  83c408               add esp, 8
// 00972933  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
