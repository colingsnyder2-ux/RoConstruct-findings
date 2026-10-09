// roc 2009-12 0053a390  unit: G3D::VRay::?$holder  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053a390
//
// 0053a390  56                   push esi
// 0053a391  8b742418             mov esi, dword ptr [esp + 0x18]
// 0053a395  57                   push edi
// 0053a396  8b3d60b79800         mov edi, dword ptr [0x98b760]
// 0053a39c  8d642400             lea esp, [esp]
// 0053a3a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053a3a4  85c0                 test eax, eax
// 0053a3a6  7406                 je 0x53a3ae
// 0053a3a8  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0053a3ac  7402                 je 0x53a3b0
// 0053a3ae  ffd7                 call edi
// 0053a3b0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053a3b4  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0053a3b8  740d                 je 0x53a3c7
// 0053a3ba  ff06                 inc dword ptr [esi]
// 0053a3bc  8d4c240c             lea ecx, [esp + 0xc]
// 0053a3c0  e8bbe1ffff           call 0x538580
// 0053a3c5  ebd9                 jmp 0x53a3a0
// 0053a3c7  5f                   pop edi
// 0053a3c8  5e                   pop esi
// 0053a3c9  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
