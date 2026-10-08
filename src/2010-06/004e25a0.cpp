// roc 2010-06 004e25a0  unit: RBX::Network::IdSerializer  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e25a0
//
// 004e25a0  56                   push esi
// 004e25a1  8b742418             mov esi, dword ptr [esp + 0x18]
// 004e25a5  57                   push edi
// 004e25a6  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 004e25ac  8d642400             lea esp, [esp]
// 004e25b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e25b4  85c0                 test eax, eax
// 004e25b6  7406                 je 0x4e25be
// 004e25b8  3b442414             cmp eax, dword ptr [esp + 0x14]
// 004e25bc  7402                 je 0x4e25c0
// 004e25be  ffd7                 call edi
// 004e25c0  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e25c4  3b442418             cmp eax, dword ptr [esp + 0x18]
// 004e25c8  740d                 je 0x4e25d7
// 004e25ca  ff06                 inc dword ptr [esi]
// 004e25cc  8d4c240c             lea ecx, [esp + 0xc]
// 004e25d0  e86b3c3e00           call 0x8c6240
// 004e25d5  ebd9                 jmp 0x4e25b0
// 004e25d7  5f                   pop edi
// 004e25d8  5e                   pop esi
// 004e25d9  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
