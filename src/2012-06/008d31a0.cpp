// roc 2012-06 008d31a0  unit: RBX::$$A6AXW4NormalId::?$signal::Vslot::?$callable  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008d31a0
//
// 008d31a0  83ec08               sub esp, 8
// 008d31a3  56                   push esi
// 008d31a4  8b742410             mov esi, dword ptr [esp + 0x10]
// 008d31a8  57                   push edi
// 008d31a9  8bf9                 mov edi, ecx
// 008d31ab  56                   push esi
// 008d31ac  8d4c2410             lea ecx, [esp + 0x10]
// 008d31b0  8974240c             mov dword ptr [esp + 0xc], esi
// 008d31b4  e807ffffff           call 0x8d30c0
// 008d31b9  56                   push esi
// 008d31ba  8d442410             lea eax, [esp + 0x10]
// 008d31be  56                   push esi
// 008d31bf  50                   push eax
// 008d31c0  e8cb75ccff           call 0x59a790
// 008d31c5  8d4c2414             lea ecx, [esp + 0x14]
// 008d31c9  83c40c               add esp, 0xc
// 008d31cc  3bcf                 cmp ecx, edi
// 008d31ce  7406                 je 0x8d31d6
// 008d31d0  8b542408             mov edx, dword ptr [esp + 8]
// 008d31d4  8917                 mov dword ptr [edi], edx
// 008d31d6  8b7704               mov esi, dword ptr [edi + 4]
// 008d31d9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008d31dd  894704               mov dword ptr [edi + 4], eax
// 008d31e0  85f6                 test esi, esi
// 008d31e2  742a                 je 0x8d320e
// 008d31e4  8d4e04               lea ecx, [esi + 4]
// 008d31e7  83caff               or edx, 0xffffffff
// 008d31ea  f00fc111             lock xadd dword ptr [ecx], edx
// 008d31ee  751e                 jne 0x8d320e
// 008d31f0  8b06                 mov eax, dword ptr [esi]
// 008d31f2  8b5004               mov edx, dword ptr [eax + 4]
// 008d31f5  8bce                 mov ecx, esi
// 008d31f7  ffd2                 call edx
// 008d31f9  8d4608               lea eax, [esi + 8]
// 008d31fc  83c9ff               or ecx, 0xffffffff
// 008d31ff  f00fc108             lock xadd dword ptr [eax], ecx
// 008d3203  7509                 jne 0x8d320e
// 008d3205  8b16                 mov edx, dword ptr [esi]
// 008d3207  8b4208               mov eax, dword ptr [edx + 8]
// 008d320a  8bce                 mov ecx, esi
// 008d320c  ffd0                 call eax
// 008d320e  5f                   pop edi
// 008d320f  5e                   pop esi
// 008d3210  83c408               add esp, 8
// 008d3213  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
