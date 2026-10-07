// roc 2010-06 004e9630  unit: G3D::VRay::?$holder  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e9630
//
// 004e9630  83ec08               sub esp, 8
// 004e9633  56                   push esi
// 004e9634  8b742410             mov esi, dword ptr [esp + 0x10]
// 004e9638  57                   push edi
// 004e9639  8bf9                 mov edi, ecx
// 004e963b  56                   push esi
// 004e963c  8d4c2410             lea ecx, [esp + 0x10]
// 004e9640  8974240c             mov dword ptr [esp + 0xc], esi
// 004e9644  e857dbffff           call 0x4e71a0
// 004e9649  56                   push esi
// 004e964a  8d442410             lea eax, [esp + 0x10]
// 004e964e  56                   push esi
// 004e964f  50                   push eax
// 004e9650  e85baff6ff           call 0x4545b0
// 004e9655  8d4c2414             lea ecx, [esp + 0x14]
// 004e9659  83c40c               add esp, 0xc
// 004e965c  3bcf                 cmp ecx, edi
// 004e965e  7406                 je 0x4e9666
// 004e9660  8b542408             mov edx, dword ptr [esp + 8]
// 004e9664  8917                 mov dword ptr [edi], edx
// 004e9666  8b7704               mov esi, dword ptr [edi + 4]
// 004e9669  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e966d  894704               mov dword ptr [edi + 4], eax
// 004e9670  85f6                 test esi, esi
// 004e9672  742a                 je 0x4e969e
// 004e9674  8d4e04               lea ecx, [esi + 4]
// 004e9677  83caff               or edx, 0xffffffff
// 004e967a  f00fc111             lock xadd dword ptr [ecx], edx
// 004e967e  751e                 jne 0x4e969e
// 004e9680  8b06                 mov eax, dword ptr [esi]
// 004e9682  8b5004               mov edx, dword ptr [eax + 4]
// 004e9685  8bce                 mov ecx, esi
// 004e9687  ffd2                 call edx
// 004e9689  8d4608               lea eax, [esi + 8]
// 004e968c  83c9ff               or ecx, 0xffffffff
// 004e968f  f00fc108             lock xadd dword ptr [eax], ecx
// 004e9693  7509                 jne 0x4e969e
// 004e9695  8b16                 mov edx, dword ptr [esi]
// 004e9697  8b4208               mov eax, dword ptr [edx + 8]
// 004e969a  8bce                 mov ecx, esi
// 004e969c  ffd0                 call eax
// 004e969e  5f                   pop edi
// 004e969f  5e                   pop esi
// 004e96a0  83c408               add esp, 8
// 004e96a3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
