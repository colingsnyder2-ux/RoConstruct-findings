// roc 2007-03 0048cb60  unit: seg_00480000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048cb60
//
// 0048cb60  55                   push ebp
// 0048cb61  8bec                 mov ebp, esp
// 0048cb63  6aff                 push -1
// 0048cb65  6840997400           push 0x749940
// 0048cb6a  64a100000000         mov eax, dword ptr fs:[0]
// 0048cb70  50                   push eax
// 0048cb71  83ec08               sub esp, 8
// 0048cb74  53                   push ebx
// 0048cb75  56                   push esi
// 0048cb76  57                   push edi
// 0048cb77  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0048cb7c  33c5                 xor eax, ebp
// 0048cb7e  50                   push eax
// 0048cb7f  8d45f4               lea eax, [ebp - 0xc]
// 0048cb82  64a300000000         mov dword ptr fs:[0], eax
// 0048cb88  8965f0               mov dword ptr [ebp - 0x10], esp
// 0048cb8b  6a28                 push 0x28
// 0048cb8d  e876151900           call 0x61e108
// 0048cb92  8bf0                 mov esi, eax
// 0048cb94  83c404               add esp, 4
// 0048cb97  85f6                 test esi, esi
// 0048cb99  8975ec               mov dword ptr [ebp - 0x14], esi
// 0048cb9c  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0048cba3  7405                 je 0x48cbaa
// 0048cba5  8b4508               mov eax, dword ptr [ebp + 8]
// 0048cba8  8906                 mov dword ptr [esi], eax
// 0048cbaa  8d4604               lea eax, [esi + 4]
// 0048cbad  85c0                 test eax, eax
// 0048cbaf  7405                 je 0x48cbb6
// 0048cbb1  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0048cbb4  8908                 mov dword ptr [eax], ecx
// 0048cbb6  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0048cbb9  52                   push edx
// 0048cbba  8d4608               lea eax, [esi + 8]
// 0048cbbd  50                   push eax
// 0048cbbe  e81df1ffff           call 0x48bce0
// 0048cbc3  83c408               add esp, 8
// 0048cbc6  8bc6                 mov eax, esi
// 0048cbc8  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0048cbcb  64890d00000000       mov dword ptr fs:[0], ecx
// 0048cbd2  59                   pop ecx
// 0048cbd3  5f                   pop edi
// 0048cbd4  5e                   pop esi
// 0048cbd5  5b                   pop ebx
// 0048cbd6  8be5                 mov esp, ebp
// 0048cbd8  5d                   pop ebp
// 0048cbd9  c20c00               ret 0xc
// 0048cbdc  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0048cbdf  51                   push ecx
// 0048cbe0  e80b151900           call 0x61e0f0
// 0048cbe5  83c404               add esp, 4
// 0048cbe8  6a00                 push 0
// 0048cbea  6a00                 push 0
// 0048cbec  e83d241900           call 0x61f02e
// copied from an identical function in another client (function ?_Buynode@?$list@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@IAEPAU_Node@?$_List_nod@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@2@PAU342@0ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: ogre-1.7.0 OgreMesh.cpp