// roc 2010-06 00936ae0  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00936ae0
//
// 00936ae0  83ec08               sub esp, 8
// 00936ae3  56                   push esi
// 00936ae4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00936ae8  57                   push edi
// 00936ae9  8bf9                 mov edi, ecx
// 00936aeb  56                   push esi
// 00936aec  8d4c2410             lea ecx, [esp + 0x10]
// 00936af0  8974240c             mov dword ptr [esp + 0xc], esi
// 00936af4  e85776fbff           call 0x8ee150
// 00936af9  56                   push esi
// 00936afa  8d442410             lea eax, [esp + 0x10]
// 00936afe  56                   push esi
// 00936aff  50                   push eax
// 00936b00  e8abdab1ff           call 0x4545b0
// 00936b05  8d4c2414             lea ecx, [esp + 0x14]
// 00936b09  83c40c               add esp, 0xc
// 00936b0c  3bcf                 cmp ecx, edi
// 00936b0e  7406                 je 0x936b16
// 00936b10  8b542408             mov edx, dword ptr [esp + 8]
// 00936b14  8917                 mov dword ptr [edi], edx
// 00936b16  8b7704               mov esi, dword ptr [edi + 4]
// 00936b19  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00936b1d  894704               mov dword ptr [edi + 4], eax
// 00936b20  85f6                 test esi, esi
// 00936b22  742a                 je 0x936b4e
// 00936b24  8d4e04               lea ecx, [esi + 4]
// 00936b27  83caff               or edx, 0xffffffff
// 00936b2a  f00fc111             lock xadd dword ptr [ecx], edx
// 00936b2e  751e                 jne 0x936b4e
// 00936b30  8b06                 mov eax, dword ptr [esi]
// 00936b32  8b5004               mov edx, dword ptr [eax + 4]
// 00936b35  8bce                 mov ecx, esi
// 00936b37  ffd2                 call edx
// 00936b39  8d4608               lea eax, [esi + 8]
// 00936b3c  83c9ff               or ecx, 0xffffffff
// 00936b3f  f00fc108             lock xadd dword ptr [eax], ecx
// 00936b43  7509                 jne 0x936b4e
// 00936b45  8b16                 mov edx, dword ptr [esi]
// 00936b47  8b4208               mov eax, dword ptr [edx + 8]
// 00936b4a  8bce                 mov ecx, esi
// 00936b4c  ffd0                 call eax
// 00936b4e  5f                   pop edi
// 00936b4f  5e                   pop esi
// 00936b50  83c408               add esp, 8
// 00936b53  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
