// roc 2009-12 00534290  unit: RBX::Network::IdSerializer  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00534290
//
// 00534290  56                   push esi
// 00534291  8b742418             mov esi, dword ptr [esp + 0x18]
// 00534295  57                   push edi
// 00534296  8b3d60b79800         mov edi, dword ptr [0x98b760]
// 0053429c  8d642400             lea esp, [esp]
// 005342a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005342a4  85c0                 test eax, eax
// 005342a6  7406                 je 0x5342ae
// 005342a8  3b442414             cmp eax, dword ptr [esp + 0x14]
// 005342ac  7402                 je 0x5342b0
// 005342ae  ffd7                 call edi
// 005342b0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005342b4  3b442418             cmp eax, dword ptr [esp + 0x18]
// 005342b8  740d                 je 0x5342c7
// 005342ba  ff06                 inc dword ptr [esi]
// 005342bc  8d4c240c             lea ecx, [esp + 0xc]
// 005342c0  e84b66f4ff           call 0x47a910
// 005342c5  ebd9                 jmp 0x5342a0
// 005342c7  5f                   pop edi
// 005342c8  5e                   pop esi
// 005342c9  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
