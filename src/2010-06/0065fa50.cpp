// roc 2010-06 0065fa50  unit: RBX::VPlayerMouse::?$FactoryProduct  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065fa50
//
// 0065fa50  56                   push esi
// 0065fa51  8b742418             mov esi, dword ptr [esp + 0x18]
// 0065fa55  57                   push edi
// 0065fa56  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 0065fa5c  8d642400             lea esp, [esp]
// 0065fa60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0065fa64  85c0                 test eax, eax
// 0065fa66  7406                 je 0x65fa6e
// 0065fa68  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0065fa6c  7402                 je 0x65fa70
// 0065fa6e  ffd7                 call edi
// 0065fa70  8b442410             mov eax, dword ptr [esp + 0x10]
// 0065fa74  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0065fa78  740d                 je 0x65fa87
// 0065fa7a  ff06                 inc dword ptr [esi]
// 0065fa7c  8d4c240c             lea ecx, [esp + 0xc]
// 0065fa80  e85b7f0800           call 0x6e79e0
// 0065fa85  ebd9                 jmp 0x65fa60
// 0065fa87  5f                   pop edi
// 0065fa88  5e                   pop esi
// 0065fa89  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
