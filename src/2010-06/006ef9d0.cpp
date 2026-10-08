// roc 2010-06 006ef9d0  unit: RBX::HandlesBase  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ef9d0
//
// 006ef9d0  56                   push esi
// 006ef9d1  8b742418             mov esi, dword ptr [esp + 0x18]
// 006ef9d5  57                   push edi
// 006ef9d6  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 006ef9dc  8d642400             lea esp, [esp]
// 006ef9e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ef9e4  85c0                 test eax, eax
// 006ef9e6  7406                 je 0x6ef9ee
// 006ef9e8  3b442414             cmp eax, dword ptr [esp + 0x14]
// 006ef9ec  7402                 je 0x6ef9f0
// 006ef9ee  ffd7                 call edi
// 006ef9f0  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ef9f4  3b442418             cmp eax, dword ptr [esp + 0x18]
// 006ef9f8  740d                 je 0x6efa07
// 006ef9fa  ff06                 inc dword ptr [esi]
// 006ef9fc  8d4c240c             lea ecx, [esp + 0xc]
// 006efa00  e8abfb0700           call 0x76f5b0
// 006efa05  ebd9                 jmp 0x6ef9e0
// 006efa07  5f                   pop edi
// 006efa08  5e                   pop esi
// 006efa09  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
