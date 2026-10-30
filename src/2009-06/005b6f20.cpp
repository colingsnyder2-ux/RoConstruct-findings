// roc 2009-06 005b6f20  unit: seg_005b0000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b6f20
//
// 005b6f20  55                   push ebp
// 005b6f21  8bec                 mov ebp, esp
// 005b6f23  51                   push ecx
// 005b6f24  894dfc               mov dword ptr [ebp - 4], ecx
// 005b6f27  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b6f2a  e841f7f5ff           call 0x516670
// 005b6f2f  0fb6c0               movzx eax, al
// 005b6f32  85c0                 test eax, eax
// 005b6f34  7413                 je 0x5b6f49
// 005b6f36  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b6f39  51                   push ecx
// 005b6f3a  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b6f3d  e87ea5e4ff           call 0x4014c0
// 005b6f42  0fb6d0               movzx edx, al
// 005b6f45  85d2                 test edx, edx
// 005b6f47  7506                 jne 0x5b6f4f
// 005b6f49  ff15ace98900         call dword ptr [0x89e9ac]
// 005b6f4f  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b6f52  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b6f55  8b5004               mov edx, dword ptr [eax + 4]
// 005b6f58  33c0                 xor eax, eax
// 005b6f5a  3b5104               cmp edx, dword ptr [ecx + 4]
// 005b6f5d  0f94c0               sete al
// 005b6f60  8be5                 mov esp, ebp
// 005b6f62  5d                   pop ebp
// 005b6f63  c20400               ret 4
// copied from an identical function in another client (function ??8const_iterator@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QBE_NABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_large_tree_c038c7cd2fa8574a.cpp