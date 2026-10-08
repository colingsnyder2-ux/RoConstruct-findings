// roc 2009-06 006b8700  unit: RBX::UniversalTool  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b8700
//
// 006b8700  56                   push esi
// 006b8701  8b742418             mov esi, dword ptr [esp + 0x18]
// 006b8705  57                   push edi
// 006b8706  8b3dace98900         mov edi, dword ptr [0x89e9ac]
// 006b870c  8d642400             lea esp, [esp]
// 006b8710  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b8714  85c0                 test eax, eax
// 006b8716  7406                 je 0x6b871e
// 006b8718  3b442414             cmp eax, dword ptr [esp + 0x14]
// 006b871c  7402                 je 0x6b8720
// 006b871e  ffd7                 call edi
// 006b8720  8b442410             mov eax, dword ptr [esp + 0x10]
// 006b8724  3b442418             cmp eax, dword ptr [esp + 0x18]
// 006b8728  740d                 je 0x6b8737
// 006b872a  ff06                 inc dword ptr [esi]
// 006b872c  8d4c240c             lea ecx, [esp + 0xc]
// 006b8730  e81be1ffff           call 0x6b6850
// 006b8735  ebd9                 jmp 0x6b8710
// 006b8737  5f                   pop edi
// 006b8738  5e                   pop esi
// 006b8739  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
