// roc 2011-06 00972840  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00972840
//
// 00972840  83ec08               sub esp, 8
// 00972843  56                   push esi
// 00972844  8b742410             mov esi, dword ptr [esp + 0x10]
// 00972848  57                   push edi
// 00972849  8bf9                 mov edi, ecx
// 0097284b  56                   push esi
// 0097284c  8d4c2410             lea ecx, [esp + 0x10]
// 00972850  8974240c             mov dword ptr [esp + 0xc], esi
// 00972854  e8f7f5ffff           call 0x971e50
// 00972859  56                   push esi
// 0097285a  8d442410             lea eax, [esp + 0x10]
// 0097285e  56                   push esi
// 0097285f  50                   push eax
// 00972860  e8db8defff           call 0x86b640
// 00972865  8d4c2414             lea ecx, [esp + 0x14]
// 00972869  83c40c               add esp, 0xc
// 0097286c  3bcf                 cmp ecx, edi
// 0097286e  7406                 je 0x972876
// 00972870  8b542408             mov edx, dword ptr [esp + 8]
// 00972874  8917                 mov dword ptr [edi], edx
// 00972876  8b7704               mov esi, dword ptr [edi + 4]
// 00972879  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0097287d  894704               mov dword ptr [edi + 4], eax
// 00972880  85f6                 test esi, esi
// 00972882  742a                 je 0x9728ae
// 00972884  8d4e04               lea ecx, [esi + 4]
// 00972887  83caff               or edx, 0xffffffff
// 0097288a  f00fc111             lock xadd dword ptr [ecx], edx
// 0097288e  751e                 jne 0x9728ae
// 00972890  8b06                 mov eax, dword ptr [esi]
// 00972892  8b5004               mov edx, dword ptr [eax + 4]
// 00972895  8bce                 mov ecx, esi
// 00972897  ffd2                 call edx
// 00972899  8d4608               lea eax, [esi + 8]
// 0097289c  83c9ff               or ecx, 0xffffffff
// 0097289f  f00fc108             lock xadd dword ptr [eax], ecx
// 009728a3  7509                 jne 0x9728ae
// 009728a5  8b16                 mov edx, dword ptr [esi]
// 009728a7  8b4208               mov eax, dword ptr [edx + 8]
// 009728aa  8bce                 mov ecx, esi
// 009728ac  ffd0                 call eax
// 009728ae  5f                   pop edi
// 009728af  5e                   pop esi
// 009728b0  83c408               add esp, 8
// 009728b3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
