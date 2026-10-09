// roc 2009-12 0052f870  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0052f870
//
// 0052f870  56                   push esi
// 0052f871  8b742418             mov esi, dword ptr [esp + 0x18]
// 0052f875  57                   push edi
// 0052f876  8b3d60b79800         mov edi, dword ptr [0x98b760]
// 0052f87c  8d642400             lea esp, [esp]
// 0052f880  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052f884  85c0                 test eax, eax
// 0052f886  7406                 je 0x52f88e
// 0052f888  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0052f88c  7402                 je 0x52f890
// 0052f88e  ffd7                 call edi
// 0052f890  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052f894  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0052f898  740d                 je 0x52f8a7
// 0052f89a  ff06                 inc dword ptr [esi]
// 0052f89c  8d4c240c             lea ecx, [esp + 0xc]
// 0052f8a0  e83bfdffff           call 0x52f5e0
// 0052f8a5  ebd9                 jmp 0x52f880
// 0052f8a7  5f                   pop edi
// 0052f8a8  5e                   pop esi
// 0052f8a9  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
