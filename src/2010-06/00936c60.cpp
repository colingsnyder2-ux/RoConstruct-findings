// roc 2010-06 00936c60  unit: RBX::MeshFaceCustomizableKey  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00936c60
//
// 00936c60  83ec08               sub esp, 8
// 00936c63  56                   push esi
// 00936c64  8b742410             mov esi, dword ptr [esp + 0x10]
// 00936c68  57                   push edi
// 00936c69  8bf9                 mov edi, ecx
// 00936c6b  56                   push esi
// 00936c6c  8d4c2410             lea ecx, [esp + 0x10]
// 00936c70  8974240c             mov dword ptr [esp + 0xc], esi
// 00936c74  e857f6ffff           call 0x9362d0
// 00936c79  56                   push esi
// 00936c7a  8d442410             lea eax, [esp + 0x10]
// 00936c7e  56                   push esi
// 00936c7f  50                   push eax
// 00936c80  e82bd9b1ff           call 0x4545b0
// 00936c85  8d4c2414             lea ecx, [esp + 0x14]
// 00936c89  83c40c               add esp, 0xc
// 00936c8c  3bcf                 cmp ecx, edi
// 00936c8e  7406                 je 0x936c96
// 00936c90  8b542408             mov edx, dword ptr [esp + 8]
// 00936c94  8917                 mov dword ptr [edi], edx
// 00936c96  8b7704               mov esi, dword ptr [edi + 4]
// 00936c99  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00936c9d  894704               mov dword ptr [edi + 4], eax
// 00936ca0  85f6                 test esi, esi
// 00936ca2  742a                 je 0x936cce
// 00936ca4  8d4e04               lea ecx, [esi + 4]
// 00936ca7  83caff               or edx, 0xffffffff
// 00936caa  f00fc111             lock xadd dword ptr [ecx], edx
// 00936cae  751e                 jne 0x936cce
// 00936cb0  8b06                 mov eax, dword ptr [esi]
// 00936cb2  8b5004               mov edx, dword ptr [eax + 4]
// 00936cb5  8bce                 mov ecx, esi
// 00936cb7  ffd2                 call edx
// 00936cb9  8d4608               lea eax, [esi + 8]
// 00936cbc  83c9ff               or ecx, 0xffffffff
// 00936cbf  f00fc108             lock xadd dword ptr [eax], ecx
// 00936cc3  7509                 jne 0x936cce
// 00936cc5  8b16                 mov edx, dword ptr [esi]
// 00936cc7  8b4208               mov eax, dword ptr [edx + 8]
// 00936cca  8bce                 mov ecx, esi
// 00936ccc  ffd0                 call eax
// 00936cce  5f                   pop edi
// 00936ccf  5e                   pop esi
// 00936cd0  83c408               add esp, 8
// 00936cd3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
