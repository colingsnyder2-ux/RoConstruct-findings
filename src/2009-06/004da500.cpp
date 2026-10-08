// roc 2009-06 004da500  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004da500
//
// 004da500  56                   push esi
// 004da501  8b742418             mov esi, dword ptr [esp + 0x18]
// 004da505  57                   push edi
// 004da506  8b3dace98900         mov edi, dword ptr [0x89e9ac]
// 004da50c  8d642400             lea esp, [esp]
// 004da510  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004da514  85c0                 test eax, eax
// 004da516  7406                 je 0x4da51e
// 004da518  3b442414             cmp eax, dword ptr [esp + 0x14]
// 004da51c  7402                 je 0x4da520
// 004da51e  ffd7                 call edi
// 004da520  8b442410             mov eax, dword ptr [esp + 0x10]
// 004da524  3b442418             cmp eax, dword ptr [esp + 0x18]
// 004da528  740d                 je 0x4da537
// 004da52a  ff06                 inc dword ptr [esi]
// 004da52c  8d4c240c             lea ecx, [esp + 0xc]
// 004da530  e8abfcffff           call 0x4da1e0
// 004da535  ebd9                 jmp 0x4da510
// 004da537  5f                   pop edi
// 004da538  5e                   pop esi
// 004da539  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
