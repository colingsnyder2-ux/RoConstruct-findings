// roc 2012-06 00715710  unit: RBX::ClientAppSettings  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00715710
//
// 00715710  8b4104               mov eax, dword ptr [ecx + 4]
// 00715713  56                   push esi
// 00715714  8b7004               mov esi, dword ptr [eax + 4]
// 00715717  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 0071571b  57                   push edi
// 0071571c  8bf8                 mov edi, eax
// 0071571e  7531                 jne 0x715751
// 00715720  53                   push ebx
// 00715721  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00715725  55                   push ebp
// 00715726  8b2d5026b200         mov ebp, dword ptr [0xb22650]
// 0071572c  8d642400             lea esp, [esp]
// 00715730  8d460c               lea eax, [esi + 0xc]
// 00715733  53                   push ebx
// 00715734  50                   push eax
// 00715735  ffd5                 call ebp
// 00715737  83c408               add esp, 8
// 0071573a  84c0                 test al, al
// 0071573c  7405                 je 0x715743
// 0071573e  8b7608               mov esi, dword ptr [esi + 8]
// 00715741  eb04                 jmp 0x715747
// 00715743  8bfe                 mov edi, esi
// 00715745  8b36                 mov esi, dword ptr [esi]
// 00715747  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 0071574b  74e3                 je 0x715730
// 0071574d  5d                   pop ebp
// 0071574e  8bc7                 mov eax, edi
// 00715750  5b                   pop ebx
// 00715751  5f                   pop edi
// 00715752  5e                   pop esi
// 00715753  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
