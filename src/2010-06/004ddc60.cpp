// roc 2010-06 004ddc60  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ddc60
//
// 004ddc60  56                   push esi
// 004ddc61  8b742418             mov esi, dword ptr [esp + 0x18]
// 004ddc65  57                   push edi
// 004ddc66  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 004ddc6c  8d642400             lea esp, [esp]
// 004ddc70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ddc74  85c0                 test eax, eax
// 004ddc76  7406                 je 0x4ddc7e
// 004ddc78  3b442414             cmp eax, dword ptr [esp + 0x14]
// 004ddc7c  7402                 je 0x4ddc80
// 004ddc7e  ffd7                 call edi
// 004ddc80  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ddc84  3b442418             cmp eax, dword ptr [esp + 0x18]
// 004ddc88  740d                 je 0x4ddc97
// 004ddc8a  ff06                 inc dword ptr [esi]
// 004ddc8c  8d4c240c             lea ecx, [esp + 0xc]
// 004ddc90  e85bfdffff           call 0x4dd9f0
// 004ddc95  ebd9                 jmp 0x4ddc70
// 004ddc97  5f                   pop edi
// 004ddc98  5e                   pop esi
// 004ddc99  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
