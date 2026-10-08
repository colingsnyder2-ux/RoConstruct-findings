// roc 2010-06 0075ac60  unit: RBX::PrismPoly  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075ac60
//
// 0075ac60  56                   push esi
// 0075ac61  8b742418             mov esi, dword ptr [esp + 0x18]
// 0075ac65  57                   push edi
// 0075ac66  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 0075ac6c  8d642400             lea esp, [esp]
// 0075ac70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0075ac74  85c0                 test eax, eax
// 0075ac76  7406                 je 0x75ac7e
// 0075ac78  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0075ac7c  7402                 je 0x75ac80
// 0075ac7e  ffd7                 call edi
// 0075ac80  8b442410             mov eax, dword ptr [esp + 0x10]
// 0075ac84  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0075ac88  740d                 je 0x75ac97
// 0075ac8a  ff06                 inc dword ptr [esi]
// 0075ac8c  8d4c240c             lea ecx, [esp + 0xc]
// 0075ac90  e83b36e3ff           call 0x58e2d0
// 0075ac95  ebd9                 jmp 0x75ac70
// 0075ac97  5f                   pop edi
// 0075ac98  5e                   pop esi
// 0075ac99  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
