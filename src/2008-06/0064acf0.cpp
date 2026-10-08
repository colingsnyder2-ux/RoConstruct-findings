// roc 2008-06 0064acf0  unit: RBX::SleepStage  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064acf0
//
// 0064acf0  56                   push esi
// 0064acf1  8b742418             mov esi, dword ptr [esp + 0x18]
// 0064acf5  57                   push edi
// 0064acf6  8b3d90288000         mov edi, dword ptr [0x802890]
// 0064acfc  8d642400             lea esp, [esp]
// 0064ad00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0064ad04  85c0                 test eax, eax
// 0064ad06  7406                 je 0x64ad0e
// 0064ad08  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0064ad0c  7402                 je 0x64ad10
// 0064ad0e  ffd7                 call edi
// 0064ad10  8b442410             mov eax, dword ptr [esp + 0x10]
// 0064ad14  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0064ad18  740d                 je 0x64ad27
// 0064ad1a  ff06                 inc dword ptr [esi]
// 0064ad1c  8d4c240c             lea ecx, [esp + 0xc]
// 0064ad20  e81be6f9ff           call 0x5e9340
// 0064ad25  ebd9                 jmp 0x64ad00
// 0064ad27  5f                   pop edi
// 0064ad28  5e                   pop esi
// 0064ad29  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
