// roc 2009-12 0053a2a0  unit: G3D::VRay::?$holder  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053a2a0
//
// 0053a2a0  56                   push esi
// 0053a2a1  8b742418             mov esi, dword ptr [esp + 0x18]
// 0053a2a5  57                   push edi
// 0053a2a6  8b3d60b79800         mov edi, dword ptr [0x98b760]
// 0053a2ac  8d642400             lea esp, [esp]
// 0053a2b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053a2b4  85c0                 test eax, eax
// 0053a2b6  7406                 je 0x53a2be
// 0053a2b8  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0053a2bc  7402                 je 0x53a2c0
// 0053a2be  ffd7                 call edi
// 0053a2c0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053a2c4  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0053a2c8  740d                 je 0x53a2d7
// 0053a2ca  ff06                 inc dword ptr [esi]
// 0053a2cc  8d4c240c             lea ecx, [esp + 0xc]
// 0053a2d0  e8abfc1d00           call 0x719f80
// 0053a2d5  ebd9                 jmp 0x53a2b0
// 0053a2d7  5f                   pop edi
// 0053a2d8  5e                   pop esi
// 0053a2d9  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
