// roc 2010-06 004e9f20  unit: G3D::VRay::?$holder  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e9f20
//
// 004e9f20  83ec08               sub esp, 8
// 004e9f23  56                   push esi
// 004e9f24  8b742410             mov esi, dword ptr [esp + 0x10]
// 004e9f28  57                   push edi
// 004e9f29  8bf9                 mov edi, ecx
// 004e9f2b  56                   push esi
// 004e9f2c  8d4c2410             lea ecx, [esp + 0x10]
// 004e9f30  8974240c             mov dword ptr [esp + 0xc], esi
// 004e9f34  e8577bfdff           call 0x4c1a90
// 004e9f39  56                   push esi
// 004e9f3a  8d442410             lea eax, [esp + 0x10]
// 004e9f3e  56                   push esi
// 004e9f3f  50                   push eax
// 004e9f40  e86ba6f6ff           call 0x4545b0
// 004e9f45  8d4c2414             lea ecx, [esp + 0x14]
// 004e9f49  83c40c               add esp, 0xc
// 004e9f4c  3bcf                 cmp ecx, edi
// 004e9f4e  7406                 je 0x4e9f56
// 004e9f50  8b542408             mov edx, dword ptr [esp + 8]
// 004e9f54  8917                 mov dword ptr [edi], edx
// 004e9f56  8b7704               mov esi, dword ptr [edi + 4]
// 004e9f59  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e9f5d  894704               mov dword ptr [edi + 4], eax
// 004e9f60  85f6                 test esi, esi
// 004e9f62  742a                 je 0x4e9f8e
// 004e9f64  8d4e04               lea ecx, [esi + 4]
// 004e9f67  83caff               or edx, 0xffffffff
// 004e9f6a  f00fc111             lock xadd dword ptr [ecx], edx
// 004e9f6e  751e                 jne 0x4e9f8e
// 004e9f70  8b06                 mov eax, dword ptr [esi]
// 004e9f72  8b5004               mov edx, dword ptr [eax + 4]
// 004e9f75  8bce                 mov ecx, esi
// 004e9f77  ffd2                 call edx
// 004e9f79  8d4608               lea eax, [esi + 8]
// 004e9f7c  83c9ff               or ecx, 0xffffffff
// 004e9f7f  f00fc108             lock xadd dword ptr [eax], ecx
// 004e9f83  7509                 jne 0x4e9f8e
// 004e9f85  8b16                 mov edx, dword ptr [esi]
// 004e9f87  8b4208               mov eax, dword ptr [edx + 8]
// 004e9f8a  8bce                 mov ecx, esi
// 004e9f8c  ffd0                 call eax
// 004e9f8e  5f                   pop edi
// 004e9f8f  5e                   pop esi
// 004e9f90  83c408               add esp, 8
// 004e9f93  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
