// roc 2011-06 009727c0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009727c0
//
// 009727c0  83ec08               sub esp, 8
// 009727c3  56                   push esi
// 009727c4  8b742410             mov esi, dword ptr [esp + 0x10]
// 009727c8  57                   push edi
// 009727c9  8bf9                 mov edi, ecx
// 009727cb  56                   push esi
// 009727cc  8d4c2410             lea ecx, [esp + 0x10]
// 009727d0  8974240c             mov dword ptr [esp + 0xc], esi
// 009727d4  e8e7f5ffff           call 0x971dc0
// 009727d9  56                   push esi
// 009727da  8d442410             lea eax, [esp + 0x10]
// 009727de  56                   push esi
// 009727df  50                   push eax
// 009727e0  e85b8eefff           call 0x86b640
// 009727e5  8d4c2414             lea ecx, [esp + 0x14]
// 009727e9  83c40c               add esp, 0xc
// 009727ec  3bcf                 cmp ecx, edi
// 009727ee  7406                 je 0x9727f6
// 009727f0  8b542408             mov edx, dword ptr [esp + 8]
// 009727f4  8917                 mov dword ptr [edi], edx
// 009727f6  8b7704               mov esi, dword ptr [edi + 4]
// 009727f9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009727fd  894704               mov dword ptr [edi + 4], eax
// 00972800  85f6                 test esi, esi
// 00972802  742a                 je 0x97282e
// 00972804  8d4e04               lea ecx, [esi + 4]
// 00972807  83caff               or edx, 0xffffffff
// 0097280a  f00fc111             lock xadd dword ptr [ecx], edx
// 0097280e  751e                 jne 0x97282e
// 00972810  8b06                 mov eax, dword ptr [esi]
// 00972812  8b5004               mov edx, dword ptr [eax + 4]
// 00972815  8bce                 mov ecx, esi
// 00972817  ffd2                 call edx
// 00972819  8d4608               lea eax, [esi + 8]
// 0097281c  83c9ff               or ecx, 0xffffffff
// 0097281f  f00fc108             lock xadd dword ptr [eax], ecx
// 00972823  7509                 jne 0x97282e
// 00972825  8b16                 mov edx, dword ptr [esi]
// 00972827  8b4208               mov eax, dword ptr [edx + 8]
// 0097282a  8bce                 mov ecx, esi
// 0097282c  ffd0                 call eax
// 0097282e  5f                   pop edi
// 0097282f  5e                   pop esi
// 00972830  83c408               add esp, 8
// 00972833  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
