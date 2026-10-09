// roc 2009-12 0053b090  unit: G3D::VRay::?$holder  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053b090
//
// 0053b090  83ec08               sub esp, 8
// 0053b093  56                   push esi
// 0053b094  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053b098  57                   push edi
// 0053b099  8bf9                 mov edi, ecx
// 0053b09b  56                   push esi
// 0053b09c  8d4c2410             lea ecx, [esp + 0x10]
// 0053b0a0  8974240c             mov dword ptr [esp + 0xc], esi
// 0053b0a4  e857dbffff           call 0x538c00
// 0053b0a9  56                   push esi
// 0053b0aa  8d442410             lea eax, [esp + 0x10]
// 0053b0ae  56                   push esi
// 0053b0af  50                   push eax
// 0053b0b0  e8db993100           call 0x854a90
// 0053b0b5  8d4c2414             lea ecx, [esp + 0x14]
// 0053b0b9  83c40c               add esp, 0xc
// 0053b0bc  3bcf                 cmp ecx, edi
// 0053b0be  7406                 je 0x53b0c6
// 0053b0c0  8b542408             mov edx, dword ptr [esp + 8]
// 0053b0c4  8917                 mov dword ptr [edi], edx
// 0053b0c6  8b7704               mov esi, dword ptr [edi + 4]
// 0053b0c9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053b0cd  894704               mov dword ptr [edi + 4], eax
// 0053b0d0  85f6                 test esi, esi
// 0053b0d2  742a                 je 0x53b0fe
// 0053b0d4  8d4e04               lea ecx, [esi + 4]
// 0053b0d7  83caff               or edx, 0xffffffff
// 0053b0da  f00fc111             lock xadd dword ptr [ecx], edx
// 0053b0de  751e                 jne 0x53b0fe
// 0053b0e0  8b06                 mov eax, dword ptr [esi]
// 0053b0e2  8b5004               mov edx, dword ptr [eax + 4]
// 0053b0e5  8bce                 mov ecx, esi
// 0053b0e7  ffd2                 call edx
// 0053b0e9  8d4608               lea eax, [esi + 8]
// 0053b0ec  83c9ff               or ecx, 0xffffffff
// 0053b0ef  f00fc108             lock xadd dword ptr [eax], ecx
// 0053b0f3  7509                 jne 0x53b0fe
// 0053b0f5  8b16                 mov edx, dword ptr [esi]
// 0053b0f7  8b4208               mov eax, dword ptr [edx + 8]
// 0053b0fa  8bce                 mov ecx, esi
// 0053b0fc  ffd0                 call eax
// 0053b0fe  5f                   pop edi
// 0053b0ff  5e                   pop esi
// 0053b100  83c408               add esp, 8
// 0053b103  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
