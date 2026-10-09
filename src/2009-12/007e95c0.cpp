// roc 2009-12 007e95c0  unit: RBX::Limits::VCounter::V?$shared_ptr::?$thread_specific_ptr::delete_data  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e95c0
//
// 007e95c0  56                   push esi
// 007e95c1  8b742418             mov esi, dword ptr [esp + 0x18]
// 007e95c5  57                   push edi
// 007e95c6  8b3d60b79800         mov edi, dword ptr [0x98b760]
// 007e95cc  8d642400             lea esp, [esp]
// 007e95d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007e95d4  85c0                 test eax, eax
// 007e95d6  7406                 je 0x7e95de
// 007e95d8  3b442414             cmp eax, dword ptr [esp + 0x14]
// 007e95dc  7402                 je 0x7e95e0
// 007e95de  ffd7                 call edi
// 007e95e0  8b442410             mov eax, dword ptr [esp + 0x10]
// 007e95e4  3b442418             cmp eax, dword ptr [esp + 0x18]
// 007e95e8  740d                 je 0x7e95f7
// 007e95ea  ff06                 inc dword ptr [esi]
// 007e95ec  8d4c240c             lea ecx, [esp + 0xc]
// 007e95f0  e8fb3aecff           call 0x6ad0f0
// 007e95f5  ebd9                 jmp 0x7e95d0
// 007e95f7  5f                   pop edi
// 007e95f8  5e                   pop esi
// 007e95f9  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
