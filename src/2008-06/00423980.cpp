// roc 2008-06 00423980  unit: CSelectionTreeCtrl  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00423980
//
// 00423980  56                   push esi
// 00423981  8b742418             mov esi, dword ptr [esp + 0x18]
// 00423985  57                   push edi
// 00423986  8b3d90288000         mov edi, dword ptr [0x802890]
// 0042398c  8d642400             lea esp, [esp]
// 00423990  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00423994  85c0                 test eax, eax
// 00423996  7406                 je 0x42399e
// 00423998  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0042399c  7402                 je 0x4239a0
// 0042399e  ffd7                 call edi
// 004239a0  8b442410             mov eax, dword ptr [esp + 0x10]
// 004239a4  3b442418             cmp eax, dword ptr [esp + 0x18]
// 004239a8  740d                 je 0x4239b7
// 004239aa  ff06                 inc dword ptr [esi]
// 004239ac  8d4c240c             lea ecx, [esp + 0xc]
// 004239b0  e8eba52600           call 0x68dfa0
// 004239b5  ebd9                 jmp 0x423990
// 004239b7  5f                   pop edi
// 004239b8  5e                   pop esi
// 004239b9  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
