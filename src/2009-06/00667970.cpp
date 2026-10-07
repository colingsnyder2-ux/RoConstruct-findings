// roc 2009-06 00667970  unit: RBX::Humanoid  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00667970
//
// 00667970  83ec08               sub esp, 8
// 00667973  56                   push esi
// 00667974  8b742410             mov esi, dword ptr [esp + 0x10]
// 00667978  57                   push edi
// 00667979  8bf9                 mov edi, ecx
// 0066797b  56                   push esi
// 0066797c  8d4c2410             lea ecx, [esp + 0x10]
// 00667980  8974240c             mov dword ptr [esp + 0xc], esi
// 00667984  e867f8ffff           call 0x6671f0
// 00667989  56                   push esi
// 0066798a  8d442410             lea eax, [esp + 0x10]
// 0066798e  56                   push esi
// 0066798f  50                   push eax
// 00667990  e84bd00000           call 0x6749e0
// 00667995  8d4c2414             lea ecx, [esp + 0x14]
// 00667999  83c40c               add esp, 0xc
// 0066799c  3bcf                 cmp ecx, edi
// 0066799e  7406                 je 0x6679a6
// 006679a0  8b542408             mov edx, dword ptr [esp + 8]
// 006679a4  8917                 mov dword ptr [edi], edx
// 006679a6  8b7704               mov esi, dword ptr [edi + 4]
// 006679a9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006679ad  894704               mov dword ptr [edi + 4], eax
// 006679b0  85f6                 test esi, esi
// 006679b2  742a                 je 0x6679de
// 006679b4  8d4e04               lea ecx, [esi + 4]
// 006679b7  83caff               or edx, 0xffffffff
// 006679ba  f00fc111             lock xadd dword ptr [ecx], edx
// 006679be  751e                 jne 0x6679de
// 006679c0  8b06                 mov eax, dword ptr [esi]
// 006679c2  8b5004               mov edx, dword ptr [eax + 4]
// 006679c5  8bce                 mov ecx, esi
// 006679c7  ffd2                 call edx
// 006679c9  8d4608               lea eax, [esi + 8]
// 006679cc  83c9ff               or ecx, 0xffffffff
// 006679cf  f00fc108             lock xadd dword ptr [eax], ecx
// 006679d3  7509                 jne 0x6679de
// 006679d5  8b16                 mov edx, dword ptr [esi]
// 006679d7  8b4208               mov eax, dword ptr [edx + 8]
// 006679da  8bce                 mov ecx, esi
// 006679dc  ffd0                 call eax
// 006679de  5f                   pop edi
// 006679df  5e                   pop esi
// 006679e0  83c408               add esp, 8
// 006679e3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
