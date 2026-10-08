// roc 2007-03 005b2d70  unit: seg_005b0000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b2d70
//
// 005b2d70  8b4104               mov eax, dword ptr [ecx + 4]
// 005b2d73  56                   push esi
// 005b2d74  8b7004               mov esi, dword ptr [eax + 4]
// 005b2d77  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 005b2d7b  57                   push edi
// 005b2d7c  8bf8                 mov edi, eax
// 005b2d7e  7531                 jne 0x5b2db1
// 005b2d80  53                   push ebx
// 005b2d81  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005b2d85  55                   push ebp
// 005b2d86  8b2de0e67700         mov ebp, dword ptr [0x77e6e0]
// 005b2d8c  8d642400             lea esp, [esp]
// 005b2d90  8d460c               lea eax, [esi + 0xc]
// 005b2d93  53                   push ebx
// 005b2d94  50                   push eax
// 005b2d95  ffd5                 call ebp
// 005b2d97  83c408               add esp, 8
// 005b2d9a  84c0                 test al, al
// 005b2d9c  7405                 je 0x5b2da3
// 005b2d9e  8b7608               mov esi, dword ptr [esi + 8]
// 005b2da1  eb04                 jmp 0x5b2da7
// 005b2da3  8bfe                 mov edi, esi
// 005b2da5  8b36                 mov esi, dword ptr [esi]
// 005b2da7  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 005b2dab  74e3                 je 0x5b2d90
// 005b2dad  5d                   pop ebp
// 005b2dae  8bc7                 mov eax, edi
// 005b2db0  5b                   pop ebx
// 005b2db1  5f                   pop edi
// 005b2db2  5e                   pop esi
// 005b2db3  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
