// roc 2012-06 00847d70  unit: RBX::LibraryService::VLibraryStateObject::?$sp_counted_impl_p  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00847d70
//
// 00847d70  55                   push ebp
// 00847d71  8bec                 mov ebp, esp
// 00847d73  6aff                 push -1
// 00847d75  6850d6ac00           push 0xacd650
// 00847d7a  64a100000000         mov eax, dword ptr fs:[0]
// 00847d80  50                   push eax
// 00847d81  64892500000000       mov dword ptr fs:[0], esp
// 00847d88  83ec08               sub esp, 8
// 00847d8b  53                   push ebx
// 00847d8c  56                   push esi
// 00847d8d  57                   push edi
// 00847d8e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00847d91  6a28                 push 0x28
// 00847d93  e882a31300           call 0x98211a
// 00847d98  8bf0                 mov esi, eax
// 00847d9a  83c404               add esp, 4
// 00847d9d  8975ec               mov dword ptr [ebp - 0x14], esi
// 00847da0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00847da7  85f6                 test esi, esi
// 00847da9  7405                 je 0x847db0
// 00847dab  8b4508               mov eax, dword ptr [ebp + 8]
// 00847dae  8906                 mov dword ptr [esi], eax
// 00847db0  8d4604               lea eax, [esi + 4]
// 00847db3  85c0                 test eax, eax
// 00847db5  7405                 je 0x847dbc
// 00847db7  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00847dba  8908                 mov dword ptr [eax], ecx
// 00847dbc  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00847dbf  52                   push edx
// 00847dc0  8d4608               lea eax, [esi + 8]
// 00847dc3  50                   push eax
// 00847dc4  e8f7ecffff           call 0x846ac0
// 00847dc9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00847dcc  83c408               add esp, 8
// 00847dcf  5f                   pop edi
// 00847dd0  8bc6                 mov eax, esi
// 00847dd2  5e                   pop esi
// 00847dd3  64890d00000000       mov dword ptr fs:[0], ecx
// 00847dda  5b                   pop ebx
// 00847ddb  8be5                 mov esp, ebp
// 00847ddd  5d                   pop ebp
// 00847dde  c20c00               ret 0xc
// library ogre-1.7.0/OgreMesh.cpp (function ?_Buynode@?$list@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@IAEPAU_Node@?$_List_nod@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@2@PAU342@0ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreMesh.cpp
