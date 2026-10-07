// roc 2011-06 009726c0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009726c0
//
// 009726c0  83ec08               sub esp, 8
// 009726c3  56                   push esi
// 009726c4  8b742410             mov esi, dword ptr [esp + 0x10]
// 009726c8  57                   push edi
// 009726c9  8bf9                 mov edi, ecx
// 009726cb  56                   push esi
// 009726cc  8d4c2410             lea ecx, [esp + 0x10]
// 009726d0  8974240c             mov dword ptr [esp + 0xc], esi
// 009726d4  e8c7f5ffff           call 0x971ca0
// 009726d9  56                   push esi
// 009726da  8d442410             lea eax, [esp + 0x10]
// 009726de  56                   push esi
// 009726df  50                   push eax
// 009726e0  e85b8fefff           call 0x86b640
// 009726e5  8d4c2414             lea ecx, [esp + 0x14]
// 009726e9  83c40c               add esp, 0xc
// 009726ec  3bcf                 cmp ecx, edi
// 009726ee  7406                 je 0x9726f6
// 009726f0  8b542408             mov edx, dword ptr [esp + 8]
// 009726f4  8917                 mov dword ptr [edi], edx
// 009726f6  8b7704               mov esi, dword ptr [edi + 4]
// 009726f9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009726fd  894704               mov dword ptr [edi + 4], eax
// 00972700  85f6                 test esi, esi
// 00972702  742a                 je 0x97272e
// 00972704  8d4e04               lea ecx, [esi + 4]
// 00972707  83caff               or edx, 0xffffffff
// 0097270a  f00fc111             lock xadd dword ptr [ecx], edx
// 0097270e  751e                 jne 0x97272e
// 00972710  8b06                 mov eax, dword ptr [esi]
// 00972712  8b5004               mov edx, dword ptr [eax + 4]
// 00972715  8bce                 mov ecx, esi
// 00972717  ffd2                 call edx
// 00972719  8d4608               lea eax, [esi + 8]
// 0097271c  83c9ff               or ecx, 0xffffffff
// 0097271f  f00fc108             lock xadd dword ptr [eax], ecx
// 00972723  7509                 jne 0x97272e
// 00972725  8b16                 mov edx, dword ptr [esi]
// 00972727  8b4208               mov eax, dword ptr [edx + 8]
// 0097272a  8bce                 mov ecx, esi
// 0097272c  ffd0                 call eax
// 0097272e  5f                   pop edi
// 0097272f  5e                   pop esi
// 00972730  83c408               add esp, 8
// 00972733  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
