// roc 2009-12 006e0d10  unit: std::istrstream  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e0d10
//
// 006e0d10  83ec08               sub esp, 8
// 006e0d13  56                   push esi
// 006e0d14  8b742410             mov esi, dword ptr [esp + 0x10]
// 006e0d18  57                   push edi
// 006e0d19  8bf9                 mov edi, ecx
// 006e0d1b  56                   push esi
// 006e0d1c  8d4c2410             lea ecx, [esp + 0x10]
// 006e0d20  8974240c             mov dword ptr [esp + 0xc], esi
// 006e0d24  e837feffff           call 0x6e0b60
// 006e0d29  56                   push esi
// 006e0d2a  8d442410             lea eax, [esp + 0x10]
// 006e0d2e  56                   push esi
// 006e0d2f  50                   push eax
// 006e0d30  e85b3d1700           call 0x854a90
// 006e0d35  8d4c2414             lea ecx, [esp + 0x14]
// 006e0d39  83c40c               add esp, 0xc
// 006e0d3c  3bcf                 cmp ecx, edi
// 006e0d3e  7406                 je 0x6e0d46
// 006e0d40  8b542408             mov edx, dword ptr [esp + 8]
// 006e0d44  8917                 mov dword ptr [edi], edx
// 006e0d46  8b7704               mov esi, dword ptr [edi + 4]
// 006e0d49  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e0d4d  894704               mov dword ptr [edi + 4], eax
// 006e0d50  85f6                 test esi, esi
// 006e0d52  742a                 je 0x6e0d7e
// 006e0d54  8d4e04               lea ecx, [esi + 4]
// 006e0d57  83caff               or edx, 0xffffffff
// 006e0d5a  f00fc111             lock xadd dword ptr [ecx], edx
// 006e0d5e  751e                 jne 0x6e0d7e
// 006e0d60  8b06                 mov eax, dword ptr [esi]
// 006e0d62  8b5004               mov edx, dword ptr [eax + 4]
// 006e0d65  8bce                 mov ecx, esi
// 006e0d67  ffd2                 call edx
// 006e0d69  8d4608               lea eax, [esi + 8]
// 006e0d6c  83c9ff               or ecx, 0xffffffff
// 006e0d6f  f00fc108             lock xadd dword ptr [eax], ecx
// 006e0d73  7509                 jne 0x6e0d7e
// 006e0d75  8b16                 mov edx, dword ptr [esi]
// 006e0d77  8b4208               mov eax, dword ptr [edx + 8]
// 006e0d7a  8bce                 mov ecx, esi
// 006e0d7c  ffd0                 call eax
// 006e0d7e  5f                   pop edi
// 006e0d7f  5e                   pop esi
// 006e0d80  83c408               add esp, 8
// 006e0d83  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
