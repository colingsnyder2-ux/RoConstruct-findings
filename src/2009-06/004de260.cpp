// roc 2009-06 004de260  unit: RBX::Network::IdSerializer  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004de260
//
// 004de260  56                   push esi
// 004de261  8b742418             mov esi, dword ptr [esp + 0x18]
// 004de265  57                   push edi
// 004de266  8b3dace98900         mov edi, dword ptr [0x89e9ac]
// 004de26c  8d642400             lea esp, [esp]
// 004de270  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004de274  85c0                 test eax, eax
// 004de276  7406                 je 0x4de27e
// 004de278  3b442414             cmp eax, dword ptr [esp + 0x14]
// 004de27c  7402                 je 0x4de280
// 004de27e  ffd7                 call edi
// 004de280  8b442410             mov eax, dword ptr [esp + 0x10]
// 004de284  3b442418             cmp eax, dword ptr [esp + 0x18]
// 004de288  740d                 je 0x4de297
// 004de28a  ff06                 inc dword ptr [esi]
// 004de28c  8d4c240c             lea ecx, [esp + 0xc]
// 004de290  e87b071600           call 0x63ea10
// 004de295  ebd9                 jmp 0x4de270
// 004de297  5f                   pop edi
// 004de298  5e                   pop esi
// 004de299  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
