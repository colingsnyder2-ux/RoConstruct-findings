// roc 2009-12 00747db0  unit: RBX::Handles  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00747db0
//
// 00747db0  83ec08               sub esp, 8
// 00747db3  56                   push esi
// 00747db4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00747db8  57                   push edi
// 00747db9  8bf9                 mov edi, ecx
// 00747dbb  56                   push esi
// 00747dbc  8d4c2410             lea ecx, [esp + 0x10]
// 00747dc0  8974240c             mov dword ptr [esp + 0xc], esi
// 00747dc4  e8b7fcffff           call 0x747a80
// 00747dc9  56                   push esi
// 00747dca  8d442410             lea eax, [esp + 0x10]
// 00747dce  56                   push esi
// 00747dcf  50                   push eax
// 00747dd0  e8bbcc1000           call 0x854a90
// 00747dd5  8d4c2414             lea ecx, [esp + 0x14]
// 00747dd9  83c40c               add esp, 0xc
// 00747ddc  3bcf                 cmp ecx, edi
// 00747dde  7406                 je 0x747de6
// 00747de0  8b542408             mov edx, dword ptr [esp + 8]
// 00747de4  8917                 mov dword ptr [edi], edx
// 00747de6  8b7704               mov esi, dword ptr [edi + 4]
// 00747de9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00747ded  894704               mov dword ptr [edi + 4], eax
// 00747df0  85f6                 test esi, esi
// 00747df2  742a                 je 0x747e1e
// 00747df4  8d4e04               lea ecx, [esi + 4]
// 00747df7  83caff               or edx, 0xffffffff
// 00747dfa  f00fc111             lock xadd dword ptr [ecx], edx
// 00747dfe  751e                 jne 0x747e1e
// 00747e00  8b06                 mov eax, dword ptr [esi]
// 00747e02  8b5004               mov edx, dword ptr [eax + 4]
// 00747e05  8bce                 mov ecx, esi
// 00747e07  ffd2                 call edx
// 00747e09  8d4608               lea eax, [esi + 8]
// 00747e0c  83c9ff               or ecx, 0xffffffff
// 00747e0f  f00fc108             lock xadd dword ptr [eax], ecx
// 00747e13  7509                 jne 0x747e1e
// 00747e15  8b16                 mov edx, dword ptr [esi]
// 00747e17  8b4208               mov eax, dword ptr [edx + 8]
// 00747e1a  8bce                 mov ecx, esi
// 00747e1c  ffd0                 call eax
// 00747e1e  5f                   pop edi
// 00747e1f  5e                   pop esi
// 00747e20  83c408               add esp, 8
// 00747e23  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
