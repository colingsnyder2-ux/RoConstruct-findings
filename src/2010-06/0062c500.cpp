// roc 2010-06 0062c500  unit: RBX::VInstance::?$NonFactoryProduct  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0062c500
//
// 0062c500  83ec08               sub esp, 8
// 0062c503  56                   push esi
// 0062c504  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062c508  57                   push edi
// 0062c509  8bf9                 mov edi, ecx
// 0062c50b  56                   push esi
// 0062c50c  8d4c2410             lea ecx, [esp + 0x10]
// 0062c510  8974240c             mov dword ptr [esp + 0xc], esi
// 0062c514  e817fbffff           call 0x62c030
// 0062c519  56                   push esi
// 0062c51a  8d442410             lea eax, [esp + 0x10]
// 0062c51e  56                   push esi
// 0062c51f  50                   push eax
// 0062c520  e88b80e2ff           call 0x4545b0
// 0062c525  8d4c2414             lea ecx, [esp + 0x14]
// 0062c529  83c40c               add esp, 0xc
// 0062c52c  3bcf                 cmp ecx, edi
// 0062c52e  7406                 je 0x62c536
// 0062c530  8b542408             mov edx, dword ptr [esp + 8]
// 0062c534  8917                 mov dword ptr [edi], edx
// 0062c536  8b7704               mov esi, dword ptr [edi + 4]
// 0062c539  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0062c53d  894704               mov dword ptr [edi + 4], eax
// 0062c540  85f6                 test esi, esi
// 0062c542  742a                 je 0x62c56e
// 0062c544  8d4e04               lea ecx, [esi + 4]
// 0062c547  83caff               or edx, 0xffffffff
// 0062c54a  f00fc111             lock xadd dword ptr [ecx], edx
// 0062c54e  751e                 jne 0x62c56e
// 0062c550  8b06                 mov eax, dword ptr [esi]
// 0062c552  8b5004               mov edx, dword ptr [eax + 4]
// 0062c555  8bce                 mov ecx, esi
// 0062c557  ffd2                 call edx
// 0062c559  8d4608               lea eax, [esi + 8]
// 0062c55c  83c9ff               or ecx, 0xffffffff
// 0062c55f  f00fc108             lock xadd dword ptr [eax], ecx
// 0062c563  7509                 jne 0x62c56e
// 0062c565  8b16                 mov edx, dword ptr [esi]
// 0062c567  8b4208               mov eax, dword ptr [edx + 8]
// 0062c56a  8bce                 mov ecx, esi
// 0062c56c  ffd0                 call eax
// 0062c56e  5f                   pop edi
// 0062c56f  5e                   pop esi
// 0062c570  83c408               add esp, 8
// 0062c573  c20400               ret 4
// library rbxgs/script\Script.cpp (function ??$reset@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$shared_ptr@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@QAEXPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
