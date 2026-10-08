// roc 2009-06 0041df90  unit: CSelectionTreeCtrl  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041df90
//
// 0041df90  56                   push esi
// 0041df91  8b742418             mov esi, dword ptr [esp + 0x18]
// 0041df95  57                   push edi
// 0041df96  8b3dace98900         mov edi, dword ptr [0x89e9ac]
// 0041df9c  8d642400             lea esp, [esp]
// 0041dfa0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041dfa4  85c0                 test eax, eax
// 0041dfa6  7406                 je 0x41dfae
// 0041dfa8  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0041dfac  7402                 je 0x41dfb0
// 0041dfae  ffd7                 call edi
// 0041dfb0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0041dfb4  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0041dfb8  740d                 je 0x41dfc7
// 0041dfba  ff06                 inc dword ptr [esi]
// 0041dfbc  8d4c240c             lea ecx, [esp + 0xc]
// 0041dfc0  e8abb11c00           call 0x5e9170
// 0041dfc5  ebd9                 jmp 0x41dfa0
// 0041dfc7  5f                   pop edi
// 0041dfc8  5e                   pop esi
// 0041dfc9  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
