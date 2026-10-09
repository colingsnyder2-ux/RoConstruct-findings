// roc 2009-12 004c3620  unit: Ogre::RbxCluster::VRbxPartBinding::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c3620
//
// 004c3620  83ec08               sub esp, 8
// 004c3623  56                   push esi
// 004c3624  8b742410             mov esi, dword ptr [esp + 0x10]
// 004c3628  57                   push edi
// 004c3629  8bf9                 mov edi, ecx
// 004c362b  56                   push esi
// 004c362c  8d4c2410             lea ecx, [esp + 0x10]
// 004c3630  8974240c             mov dword ptr [esp + 0xc], esi
// 004c3634  e897f9ffff           call 0x4c2fd0
// 004c3639  56                   push esi
// 004c363a  8d442410             lea eax, [esp + 0x10]
// 004c363e  56                   push esi
// 004c363f  50                   push eax
// 004c3640  e84b143900           call 0x854a90
// 004c3645  8d4c2414             lea ecx, [esp + 0x14]
// 004c3649  83c40c               add esp, 0xc
// 004c364c  3bcf                 cmp ecx, edi
// 004c364e  7406                 je 0x4c3656
// 004c3650  8b542408             mov edx, dword ptr [esp + 8]
// 004c3654  8917                 mov dword ptr [edi], edx
// 004c3656  8b7704               mov esi, dword ptr [edi + 4]
// 004c3659  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c365d  894704               mov dword ptr [edi + 4], eax
// 004c3660  85f6                 test esi, esi
// 004c3662  742a                 je 0x4c368e
// 004c3664  8d4e04               lea ecx, [esi + 4]
// 004c3667  83caff               or edx, 0xffffffff
// 004c366a  f00fc111             lock xadd dword ptr [ecx], edx
// 004c366e  751e                 jne 0x4c368e
// 004c3670  8b06                 mov eax, dword ptr [esi]
// 004c3672  8b5004               mov edx, dword ptr [eax + 4]
// 004c3675  8bce                 mov ecx, esi
// 004c3677  ffd2                 call edx
// 004c3679  8d4608               lea eax, [esi + 8]
// 004c367c  83c9ff               or ecx, 0xffffffff
// 004c367f  f00fc108             lock xadd dword ptr [eax], ecx
// 004c3683  7509                 jne 0x4c368e
// 004c3685  8b16                 mov edx, dword ptr [esi]
// 004c3687  8b4208               mov eax, dword ptr [edx + 8]
// 004c368a  8bce                 mov ecx, esi
// 004c368c  ffd0                 call eax
// 004c368e  5f                   pop edi
// 004c368f  5e                   pop esi
// 004c3690  83c408               add esp, 8
// 004c3693  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
