// roc 2011-06 0072a870  unit: RBX::HandlesBase  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0072a870
//
// 0072a870  83ec08               sub esp, 8
// 0072a873  56                   push esi
// 0072a874  8b742410             mov esi, dword ptr [esp + 0x10]
// 0072a878  57                   push edi
// 0072a879  8bf9                 mov edi, ecx
// 0072a87b  56                   push esi
// 0072a87c  8d4c2410             lea ecx, [esp + 0x10]
// 0072a880  8974240c             mov dword ptr [esp + 0xc], esi
// 0072a884  e837fbffff           call 0x72a3c0
// 0072a889  56                   push esi
// 0072a88a  8d442410             lea eax, [esp + 0x10]
// 0072a88e  56                   push esi
// 0072a88f  50                   push eax
// 0072a890  e8ab0d1400           call 0x86b640
// 0072a895  8d4c2414             lea ecx, [esp + 0x14]
// 0072a899  83c40c               add esp, 0xc
// 0072a89c  3bcf                 cmp ecx, edi
// 0072a89e  7406                 je 0x72a8a6
// 0072a8a0  8b542408             mov edx, dword ptr [esp + 8]
// 0072a8a4  8917                 mov dword ptr [edi], edx
// 0072a8a6  8b7704               mov esi, dword ptr [edi + 4]
// 0072a8a9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0072a8ad  894704               mov dword ptr [edi + 4], eax
// 0072a8b0  85f6                 test esi, esi
// 0072a8b2  742a                 je 0x72a8de
// 0072a8b4  8d4e04               lea ecx, [esi + 4]
// 0072a8b7  83caff               or edx, 0xffffffff
// 0072a8ba  f00fc111             lock xadd dword ptr [ecx], edx
// 0072a8be  751e                 jne 0x72a8de
// 0072a8c0  8b06                 mov eax, dword ptr [esi]
// 0072a8c2  8b5004               mov edx, dword ptr [eax + 4]
// 0072a8c5  8bce                 mov ecx, esi
// 0072a8c7  ffd2                 call edx
// 0072a8c9  8d4608               lea eax, [esi + 8]
// 0072a8cc  83c9ff               or ecx, 0xffffffff
// 0072a8cf  f00fc108             lock xadd dword ptr [eax], ecx
// 0072a8d3  7509                 jne 0x72a8de
// 0072a8d5  8b16                 mov edx, dword ptr [esi]
// 0072a8d7  8b4208               mov eax, dword ptr [edx + 8]
// 0072a8da  8bce                 mov ecx, esi
// 0072a8dc  ffd0                 call eax
// 0072a8de  5f                   pop edi
// 0072a8df  5e                   pop esi
// 0072a8e0  83c408               add esp, 8
// 0072a8e3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
