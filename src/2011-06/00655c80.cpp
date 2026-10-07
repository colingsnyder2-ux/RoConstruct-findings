// roc 2011-06 00655c80  unit: RBX::VInstance::?$NonFactoryProduct  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00655c80
//
// 00655c80  83ec08               sub esp, 8
// 00655c83  56                   push esi
// 00655c84  8b742410             mov esi, dword ptr [esp + 0x10]
// 00655c88  57                   push edi
// 00655c89  8bf9                 mov edi, ecx
// 00655c8b  56                   push esi
// 00655c8c  8d4c2410             lea ecx, [esp + 0x10]
// 00655c90  8974240c             mov dword ptr [esp + 0xc], esi
// 00655c94  e8c7f5ffff           call 0x655260
// 00655c99  56                   push esi
// 00655c9a  8d442410             lea eax, [esp + 0x10]
// 00655c9e  56                   push esi
// 00655c9f  50                   push eax
// 00655ca0  e89b592100           call 0x86b640
// 00655ca5  8d4c2414             lea ecx, [esp + 0x14]
// 00655ca9  83c40c               add esp, 0xc
// 00655cac  3bcf                 cmp ecx, edi
// 00655cae  7406                 je 0x655cb6
// 00655cb0  8b542408             mov edx, dword ptr [esp + 8]
// 00655cb4  8917                 mov dword ptr [edi], edx
// 00655cb6  8b7704               mov esi, dword ptr [edi + 4]
// 00655cb9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00655cbd  894704               mov dword ptr [edi + 4], eax
// 00655cc0  85f6                 test esi, esi
// 00655cc2  742a                 je 0x655cee
// 00655cc4  8d4e04               lea ecx, [esi + 4]
// 00655cc7  83caff               or edx, 0xffffffff
// 00655cca  f00fc111             lock xadd dword ptr [ecx], edx
// 00655cce  751e                 jne 0x655cee
// 00655cd0  8b06                 mov eax, dword ptr [esi]
// 00655cd2  8b5004               mov edx, dword ptr [eax + 4]
// 00655cd5  8bce                 mov ecx, esi
// 00655cd7  ffd2                 call edx
// 00655cd9  8d4608               lea eax, [esi + 8]
// 00655cdc  83c9ff               or ecx, 0xffffffff
// 00655cdf  f00fc108             lock xadd dword ptr [eax], ecx
// 00655ce3  7509                 jne 0x655cee
// 00655ce5  8b16                 mov edx, dword ptr [esi]
// 00655ce7  8b4208               mov eax, dword ptr [edx + 8]
// 00655cea  8bce                 mov ecx, esi
// 00655cec  ffd0                 call eax
// 00655cee  5f                   pop edi
// 00655cef  5e                   pop esi
// 00655cf0  83c408               add esp, 8
// 00655cf3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
