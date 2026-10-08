// roc 2009-06 004e52a0  unit: CRobloxWnd::UserInputJob  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e52a0
//
// 004e52a0  56                   push esi
// 004e52a1  8b742418             mov esi, dword ptr [esp + 0x18]
// 004e52a5  57                   push edi
// 004e52a6  8b3dace98900         mov edi, dword ptr [0x89e9ac]
// 004e52ac  8d642400             lea esp, [esp]
// 004e52b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e52b4  85c0                 test eax, eax
// 004e52b6  7406                 je 0x4e52be
// 004e52b8  3b442414             cmp eax, dword ptr [esp + 0x14]
// 004e52bc  7402                 je 0x4e52c0
// 004e52be  ffd7                 call edi
// 004e52c0  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e52c4  3b442418             cmp eax, dword ptr [esp + 0x18]
// 004e52c8  740d                 je 0x4e52d7
// 004e52ca  ff06                 inc dword ptr [esi]
// 004e52cc  8d4c240c             lea ecx, [esp + 0xc]
// 004e52d0  e8ebcf1300           call 0x6222c0
// 004e52d5  ebd9                 jmp 0x4e52b0
// 004e52d7  5f                   pop edi
// 004e52d8  5e                   pop esi
// 004e52d9  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
