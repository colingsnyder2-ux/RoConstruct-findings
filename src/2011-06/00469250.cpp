// roc 2011-06 00469250  unit: RBX::VVehicleController::?$FactoryProduct::Creator  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00469250
//
// 00469250  83ec08               sub esp, 8
// 00469253  56                   push esi
// 00469254  8b742410             mov esi, dword ptr [esp + 0x10]
// 00469258  57                   push edi
// 00469259  8bf9                 mov edi, ecx
// 0046925b  56                   push esi
// 0046925c  8d4c2410             lea ecx, [esp + 0x10]
// 00469260  8974240c             mov dword ptr [esp + 0xc], esi
// 00469264  e8d7e7ffff           call 0x467a40
// 00469269  56                   push esi
// 0046926a  8d442410             lea eax, [esp + 0x10]
// 0046926e  56                   push esi
// 0046926f  50                   push eax
// 00469270  e8cb234000           call 0x86b640
// 00469275  8d4c2414             lea ecx, [esp + 0x14]
// 00469279  83c40c               add esp, 0xc
// 0046927c  3bcf                 cmp ecx, edi
// 0046927e  7406                 je 0x469286
// 00469280  8b542408             mov edx, dword ptr [esp + 8]
// 00469284  8917                 mov dword ptr [edi], edx
// 00469286  8b7704               mov esi, dword ptr [edi + 4]
// 00469289  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046928d  894704               mov dword ptr [edi + 4], eax
// 00469290  85f6                 test esi, esi
// 00469292  742a                 je 0x4692be
// 00469294  8d4e04               lea ecx, [esi + 4]
// 00469297  83caff               or edx, 0xffffffff
// 0046929a  f00fc111             lock xadd dword ptr [ecx], edx
// 0046929e  751e                 jne 0x4692be
// 004692a0  8b06                 mov eax, dword ptr [esi]
// 004692a2  8b5004               mov edx, dword ptr [eax + 4]
// 004692a5  8bce                 mov ecx, esi
// 004692a7  ffd2                 call edx
// 004692a9  8d4608               lea eax, [esi + 8]
// 004692ac  83c9ff               or ecx, 0xffffffff
// 004692af  f00fc108             lock xadd dword ptr [eax], ecx
// 004692b3  7509                 jne 0x4692be
// 004692b5  8b16                 mov edx, dword ptr [esi]
// 004692b7  8b4208               mov eax, dword ptr [edx + 8]
// 004692ba  8bce                 mov ecx, esi
// 004692bc  ffd0                 call eax
// 004692be  5f                   pop edi
// 004692bf  5e                   pop esi
// 004692c0  83c408               add esp, 8
// 004692c3  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
