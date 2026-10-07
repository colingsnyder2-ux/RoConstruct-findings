// roc 2010-06 004e9420  unit: G3D::VRay::?$holder  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e9420
//
// 004e9420  83ec08               sub esp, 8
// 004e9423  56                   push esi
// 004e9424  8b742410             mov esi, dword ptr [esp + 0x10]
// 004e9428  57                   push edi
// 004e9429  8bf9                 mov edi, ecx
// 004e942b  56                   push esi
// 004e942c  8d4c2410             lea ecx, [esp + 0x10]
// 004e9430  8974240c             mov dword ptr [esp + 0xc], esi
// 004e9434  e8b7dbffff           call 0x4e6ff0
// 004e9439  56                   push esi
// 004e943a  8d442410             lea eax, [esp + 0x10]
// 004e943e  56                   push esi
// 004e943f  50                   push eax
// 004e9440  e86bb1f6ff           call 0x4545b0
// 004e9445  8d4c2414             lea ecx, [esp + 0x14]
// 004e9449  83c40c               add esp, 0xc
// 004e944c  3bcf                 cmp ecx, edi
// 004e944e  7406                 je 0x4e9456
// 004e9450  8b542408             mov edx, dword ptr [esp + 8]
// 004e9454  8917                 mov dword ptr [edi], edx
// 004e9456  8b7704               mov esi, dword ptr [edi + 4]
// 004e9459  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e945d  894704               mov dword ptr [edi + 4], eax
// 004e9460  85f6                 test esi, esi
// 004e9462  742a                 je 0x4e948e
// 004e9464  8d4e04               lea ecx, [esi + 4]
// 004e9467  83caff               or edx, 0xffffffff
// 004e946a  f00fc111             lock xadd dword ptr [ecx], edx
// 004e946e  751e                 jne 0x4e948e
// 004e9470  8b06                 mov eax, dword ptr [esi]
// 004e9472  8b5004               mov edx, dword ptr [eax + 4]
// 004e9475  8bce                 mov ecx, esi
// 004e9477  ffd2                 call edx
// 004e9479  8d4608               lea eax, [esi + 8]
// 004e947c  83c9ff               or ecx, 0xffffffff
// 004e947f  f00fc108             lock xadd dword ptr [eax], ecx
// 004e9483  7509                 jne 0x4e948e
// 004e9485  8b16                 mov edx, dword ptr [esi]
// 004e9487  8b4208               mov eax, dword ptr [edx + 8]
// 004e948a  8bce                 mov ecx, esi
// 004e948c  ffd0                 call eax
// 004e948e  5f                   pop edi
// 004e948f  5e                   pop esi
// 004e9490  83c408               add esp, 8
// 004e9493  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
