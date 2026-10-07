// roc 2011-06 00972bc0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00972bc0
//
// 00972bc0  83ec08               sub esp, 8
// 00972bc3  56                   push esi
// 00972bc4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00972bc8  57                   push edi
// 00972bc9  8bf9                 mov edi, ecx
// 00972bcb  56                   push esi
// 00972bcc  8d4c2410             lea ecx, [esp + 0x10]
// 00972bd0  8974240c             mov dword ptr [esp + 0xc], esi
// 00972bd4  e8d7f5ffff           call 0x9721b0
// 00972bd9  56                   push esi
// 00972bda  8d442410             lea eax, [esp + 0x10]
// 00972bde  56                   push esi
// 00972bdf  50                   push eax
// 00972be0  e85b8aefff           call 0x86b640
// 00972be5  8d4c2414             lea ecx, [esp + 0x14]
// 00972be9  83c40c               add esp, 0xc
// 00972bec  3bcf                 cmp ecx, edi
// 00972bee  7406                 je 0x972bf6
// 00972bf0  8b542408             mov edx, dword ptr [esp + 8]
// 00972bf4  8917                 mov dword ptr [edi], edx
// 00972bf6  8b7704               mov esi, dword ptr [edi + 4]
// 00972bf9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00972bfd  894704               mov dword ptr [edi + 4], eax
// 00972c00  85f6                 test esi, esi
// 00972c02  742a                 je 0x972c2e
// 00972c04  8d4e04               lea ecx, [esi + 4]
// 00972c07  83caff               or edx, 0xffffffff
// 00972c0a  f00fc111             lock xadd dword ptr [ecx], edx
// 00972c0e  751e                 jne 0x972c2e
// 00972c10  8b06                 mov eax, dword ptr [esi]
// 00972c12  8b5004               mov edx, dword ptr [eax + 4]
// 00972c15  8bce                 mov ecx, esi
// 00972c17  ffd2                 call edx
// 00972c19  8d4608               lea eax, [esi + 8]
// 00972c1c  83c9ff               or ecx, 0xffffffff
// 00972c1f  f00fc108             lock xadd dword ptr [eax], ecx
// 00972c23  7509                 jne 0x972c2e
// 00972c25  8b16                 mov edx, dword ptr [esi]
// 00972c27  8b4208               mov eax, dword ptr [edx + 8]
// 00972c2a  8bce                 mov ecx, esi
// 00972c2c  ffd0                 call eax
// 00972c2e  5f                   pop edi
// 00972c2f  5e                   pop esi
// 00972c30  83c408               add esp, 8
// 00972c33  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
