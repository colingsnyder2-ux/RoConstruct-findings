// roc 2011-06 00972ac0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00972ac0
//
// 00972ac0  83ec08               sub esp, 8
// 00972ac3  56                   push esi
// 00972ac4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00972ac8  57                   push edi
// 00972ac9  8bf9                 mov edi, ecx
// 00972acb  56                   push esi
// 00972acc  8d4c2410             lea ecx, [esp + 0x10]
// 00972ad0  8974240c             mov dword ptr [esp + 0xc], esi
// 00972ad4  e8b7f5ffff           call 0x972090
// 00972ad9  56                   push esi
// 00972ada  8d442410             lea eax, [esp + 0x10]
// 00972ade  56                   push esi
// 00972adf  50                   push eax
// 00972ae0  e85b8befff           call 0x86b640
// 00972ae5  8d4c2414             lea ecx, [esp + 0x14]
// 00972ae9  83c40c               add esp, 0xc
// 00972aec  3bcf                 cmp ecx, edi
// 00972aee  7406                 je 0x972af6
// 00972af0  8b542408             mov edx, dword ptr [esp + 8]
// 00972af4  8917                 mov dword ptr [edi], edx
// 00972af6  8b7704               mov esi, dword ptr [edi + 4]
// 00972af9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00972afd  894704               mov dword ptr [edi + 4], eax
// 00972b00  85f6                 test esi, esi
// 00972b02  742a                 je 0x972b2e
// 00972b04  8d4e04               lea ecx, [esi + 4]
// 00972b07  83caff               or edx, 0xffffffff
// 00972b0a  f00fc111             lock xadd dword ptr [ecx], edx
// 00972b0e  751e                 jne 0x972b2e
// 00972b10  8b06                 mov eax, dword ptr [esi]
// 00972b12  8b5004               mov edx, dword ptr [eax + 4]
// 00972b15  8bce                 mov ecx, esi
// 00972b17  ffd2                 call edx
// 00972b19  8d4608               lea eax, [esi + 8]
// 00972b1c  83c9ff               or ecx, 0xffffffff
// 00972b1f  f00fc108             lock xadd dword ptr [eax], ecx
// 00972b23  7509                 jne 0x972b2e
// 00972b25  8b16                 mov edx, dword ptr [esi]
// 00972b27  8b4208               mov eax, dword ptr [edx + 8]
// 00972b2a  8bce                 mov ecx, esi
// 00972b2c  ffd0                 call eax
// 00972b2e  5f                   pop edi
// 00972b2f  5e                   pop esi
// 00972b30  83c408               add esp, 8
// 00972b33  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
