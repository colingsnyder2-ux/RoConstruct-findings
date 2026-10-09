// roc 2009-12 0053ba00  unit: G3D::VRay::?$holder  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053ba00
//
// 0053ba00  83ec08               sub esp, 8
// 0053ba03  56                   push esi
// 0053ba04  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053ba08  57                   push edi
// 0053ba09  8bf9                 mov edi, ecx
// 0053ba0b  56                   push esi
// 0053ba0c  8d4c2410             lea ecx, [esp + 0x10]
// 0053ba10  8974240c             mov dword ptr [esp + 0xc], esi
// 0053ba14  e8878cfdff           call 0x5146a0
// 0053ba19  56                   push esi
// 0053ba1a  8d442410             lea eax, [esp + 0x10]
// 0053ba1e  56                   push esi
// 0053ba1f  50                   push eax
// 0053ba20  e86b903100           call 0x854a90
// 0053ba25  8d4c2414             lea ecx, [esp + 0x14]
// 0053ba29  83c40c               add esp, 0xc
// 0053ba2c  3bcf                 cmp ecx, edi
// 0053ba2e  7406                 je 0x53ba36
// 0053ba30  8b542408             mov edx, dword ptr [esp + 8]
// 0053ba34  8917                 mov dword ptr [edi], edx
// 0053ba36  8b7704               mov esi, dword ptr [edi + 4]
// 0053ba39  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053ba3d  894704               mov dword ptr [edi + 4], eax
// 0053ba40  85f6                 test esi, esi
// 0053ba42  742a                 je 0x53ba6e
// 0053ba44  8d4e04               lea ecx, [esi + 4]
// 0053ba47  83caff               or edx, 0xffffffff
// 0053ba4a  f00fc111             lock xadd dword ptr [ecx], edx
// 0053ba4e  751e                 jne 0x53ba6e
// 0053ba50  8b06                 mov eax, dword ptr [esi]
// 0053ba52  8b5004               mov edx, dword ptr [eax + 4]
// 0053ba55  8bce                 mov ecx, esi
// 0053ba57  ffd2                 call edx
// 0053ba59  8d4608               lea eax, [esi + 8]
// 0053ba5c  83c9ff               or ecx, 0xffffffff
// 0053ba5f  f00fc108             lock xadd dword ptr [eax], ecx
// 0053ba63  7509                 jne 0x53ba6e
// 0053ba65  8b16                 mov edx, dword ptr [esi]
// 0053ba67  8b4208               mov eax, dword ptr [edx + 8]
// 0053ba6a  8bce                 mov ecx, esi
// 0053ba6c  ffd0                 call eax
// 0053ba6e  5f                   pop edi
// 0053ba6f  5e                   pop esi
// 0053ba70  83c408               add esp, 8
// 0053ba73  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
