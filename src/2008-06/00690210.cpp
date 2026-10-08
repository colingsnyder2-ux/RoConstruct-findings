// roc 2008-06 00690210  unit: Ogre::RbxSceneManagerFactory  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00690210
//
// 00690210  56                   push esi
// 00690211  8b742418             mov esi, dword ptr [esp + 0x18]
// 00690215  57                   push edi
// 00690216  8b3d90288000         mov edi, dword ptr [0x802890]
// 0069021c  8d642400             lea esp, [esp]
// 00690220  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00690224  85c0                 test eax, eax
// 00690226  7406                 je 0x69022e
// 00690228  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0069022c  7402                 je 0x690230
// 0069022e  ffd7                 call edi
// 00690230  8b442410             mov eax, dword ptr [esp + 0x10]
// 00690234  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00690238  740d                 je 0x690247
// 0069023a  ff06                 inc dword ptr [esi]
// 0069023c  8d4c240c             lea ecx, [esp + 0xc]
// 00690240  e89bd1ffff           call 0x68d3e0
// 00690245  ebd9                 jmp 0x690220
// 00690247  5f                   pop edi
// 00690248  5e                   pop esi
// 00690249  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
