// roc 2007-03 00467080  unit: seg_00460000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00467080
//
// 00467080  53                   push ebx
// 00467081  56                   push esi
// 00467082  57                   push edi
// 00467083  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00467087  807f2d00             cmp byte ptr [edi + 0x2d], 0
// 0046708b  8bd9                 mov ebx, ecx
// 0046708d  8bf7                 mov esi, edi
// 0046708f  7527                 jne 0x4670b8
// 00467091  8b4608               mov eax, dword ptr [esi + 8]
// 00467094  50                   push eax
// 00467095  8bcb                 mov ecx, ebx
// 00467097  e8e4ffffff           call 0x467080
// 0046709c  8b36                 mov esi, dword ptr [esi]
// 0046709e  8d4f0c               lea ecx, [edi + 0xc]
// 004670a1  ff158ce77700         call dword ptr [0x77e78c]
// 004670a7  57                   push edi
// 004670a8  e843701b00           call 0x61e0f0
// 004670ad  83c404               add esp, 4
// 004670b0  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 004670b4  8bfe                 mov edi, esi
// 004670b6  74d9                 je 0x467091
// 004670b8  5f                   pop edi
// 004670b9  5e                   pop esi
// 004670ba  5b                   pop ebx
// 004670bb  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4CameraType@Camera@RBX@@@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
