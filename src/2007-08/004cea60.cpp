// roc 2007-08 004cea60  unit: G3D::VVector3::?$Table  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cea60
//
// 004cea60  64a100000000         mov eax, dword ptr fs:[0]
// 004cea66  6aff                 push -1
// 004cea68  68a8c07400           push 0x74c0a8
// 004cea6d  50                   push eax
// 004cea6e  64892500000000       mov dword ptr fs:[0], esp
// 004cea75  53                   push ebx
// 004cea76  55                   push ebp
// 004cea77  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004cea7b  807d2100             cmp byte ptr [ebp + 0x21], 0
// 004cea7f  56                   push esi
// 004cea80  57                   push edi
// 004cea81  8bd9                 mov ebx, ecx
// 004cea83  8bf5                 mov esi, ebp
// 004cea85  7548                 jne 0x4ceacf
// 004cea87  8b4608               mov eax, dword ptr [esi + 8]
// 004cea8a  50                   push eax
// 004cea8b  8bcb                 mov ecx, ebx
// 004cea8d  e8ceffffff           call 0x4cea60
// 004cea92  8b36                 mov esi, dword ptr [esi]
// 004cea94  8d7d18               lea edi, [ebp + 0x18]
// 004cea97  897c2420             mov dword ptr [esp + 0x20], edi
// 004cea9b  c70734f07900         mov dword ptr [edi], 0x79f034
// 004ceaa1  8bcf                 mov ecx, edi
// 004ceaa3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004ceaab  e8e0edffff           call 0x4cd890
// 004ceab0  55                   push ebp
// 004ceab1  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004ceab9  c70710f07900         mov dword ptr [edi], 0x79f010
// 004ceabf  e89e111600           call 0x62fc62
// 004ceac4  83c404               add esp, 4
// 004ceac7  807e2100             cmp byte ptr [esi + 0x21], 0
// 004ceacb  8bee                 mov ebp, esi
// 004ceacd  74b8                 je 0x4cea87
// 004ceacf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004cead3  5f                   pop edi
// 004cead4  5e                   pop esi
// 004cead5  5d                   pop ebp
// 004cead6  64890d00000000       mov dword ptr fs:[0], ecx
// 004ceadd  5b                   pop ebx
// 004ceade  83c40c               add esp, 0xc
// 004ceae1  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@UAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@U?$less@UAttributes@MaterialFactory@View@RBX@@@std@@V?$allocator@U?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@U?$less@UAttributes@MaterialFactory@View@RBX@@@std@@V?$allocator@U?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
