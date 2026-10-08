// roc 2011-06 0078d5d0  unit: RBX::UniversalTool  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0078d5d0
//
// 0078d5d0  8b4104               mov eax, dword ptr [ecx + 4]
// 0078d5d3  56                   push esi
// 0078d5d4  8b7004               mov esi, dword ptr [eax + 4]
// 0078d5d7  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 0078d5db  57                   push edi
// 0078d5dc  8bf8                 mov edi, eax
// 0078d5de  7531                 jne 0x78d611
// 0078d5e0  53                   push ebx
// 0078d5e1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0078d5e5  55                   push ebp
// 0078d5e6  8b2d3405a400         mov ebp, dword ptr [0xa40534]
// 0078d5ec  8d642400             lea esp, [esp]
// 0078d5f0  8d460c               lea eax, [esi + 0xc]
// 0078d5f3  53                   push ebx
// 0078d5f4  50                   push eax
// 0078d5f5  ffd5                 call ebp
// 0078d5f7  83c408               add esp, 8
// 0078d5fa  84c0                 test al, al
// 0078d5fc  7405                 je 0x78d603
// 0078d5fe  8b7608               mov esi, dword ptr [esi + 8]
// 0078d601  eb04                 jmp 0x78d607
// 0078d603  8bfe                 mov edi, esi
// 0078d605  8b36                 mov esi, dword ptr [esi]
// 0078d607  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 0078d60b  74e3                 je 0x78d5f0
// 0078d60d  5d                   pop ebp
// 0078d60e  8bc7                 mov eax, edi
// 0078d610  5b                   pop ebx
// 0078d611  5f                   pop edi
// 0078d612  5e                   pop esi
// 0078d613  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
