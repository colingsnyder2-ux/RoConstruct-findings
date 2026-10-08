// roc 2008-06 004a7280  unit: RBX::VHint::?$FactoryProduct::Creator  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a7280
//
// 004a7280  56                   push esi
// 004a7281  8b742418             mov esi, dword ptr [esp + 0x18]
// 004a7285  57                   push edi
// 004a7286  8b3d90288000         mov edi, dword ptr [0x802890]
// 004a728c  8d642400             lea esp, [esp]
// 004a7290  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a7294  85c0                 test eax, eax
// 004a7296  7406                 je 0x4a729e
// 004a7298  3b442414             cmp eax, dword ptr [esp + 0x14]
// 004a729c  7402                 je 0x4a72a0
// 004a729e  ffd7                 call edi
// 004a72a0  8b442410             mov eax, dword ptr [esp + 0x10]
// 004a72a4  3b442418             cmp eax, dword ptr [esp + 0x18]
// 004a72a8  740d                 je 0x4a72b7
// 004a72aa  ff06                 inc dword ptr [esi]
// 004a72ac  8d4c240c             lea ecx, [esp + 0xc]
// 004a72b0  e8eb5e1e00           call 0x68d1a0
// 004a72b5  ebd9                 jmp 0x4a7290
// 004a72b7  5f                   pop edi
// 004a72b8  5e                   pop esi
// 004a72b9  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
