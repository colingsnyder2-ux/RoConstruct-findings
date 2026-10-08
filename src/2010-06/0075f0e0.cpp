// roc 2010-06 0075f0e0  unit: RBX::SleepStage  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075f0e0
//
// 0075f0e0  56                   push esi
// 0075f0e1  8b742418             mov esi, dword ptr [esp + 0x18]
// 0075f0e5  57                   push edi
// 0075f0e6  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 0075f0ec  8d642400             lea esp, [esp]
// 0075f0f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0075f0f4  85c0                 test eax, eax
// 0075f0f6  7406                 je 0x75f0fe
// 0075f0f8  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0075f0fc  7402                 je 0x75f100
// 0075f0fe  ffd7                 call edi
// 0075f100  8b442410             mov eax, dword ptr [esp + 0x10]
// 0075f104  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0075f108  740d                 je 0x75f117
// 0075f10a  ff06                 inc dword ptr [esi]
// 0075f10c  8d4c240c             lea ecx, [esp + 0xc]
// 0075f110  e8ab260000           call 0x7617c0
// 0075f115  ebd9                 jmp 0x75f0f0
// 0075f117  5f                   pop edi
// 0075f118  5e                   pop esi
// 0075f119  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
