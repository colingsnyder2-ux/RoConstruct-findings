// roc 2010-06 004e8910  unit: G3D::VRay::?$holder  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e8910
//
// 004e8910  56                   push esi
// 004e8911  8b742418             mov esi, dword ptr [esp + 0x18]
// 004e8915  57                   push edi
// 004e8916  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 004e891c  8d642400             lea esp, [esp]
// 004e8920  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e8924  85c0                 test eax, eax
// 004e8926  7406                 je 0x4e892e
// 004e8928  3b442414             cmp eax, dword ptr [esp + 0x14]
// 004e892c  7402                 je 0x4e8930
// 004e892e  ffd7                 call edi
// 004e8930  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e8934  3b442418             cmp eax, dword ptr [esp + 0x18]
// 004e8938  740d                 je 0x4e8947
// 004e893a  ff06                 inc dword ptr [esi]
// 004e893c  8d4c240c             lea ecx, [esp + 0xc]
// 004e8940  e8ebe0ffff           call 0x4e6a30
// 004e8945  ebd9                 jmp 0x4e8920
// 004e8947  5f                   pop edi
// 004e8948  5e                   pop esi
// 004e8949  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
