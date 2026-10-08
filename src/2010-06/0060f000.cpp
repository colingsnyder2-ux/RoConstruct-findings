// roc 2010-06 0060f000  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060f000
//
// 0060f000  56                   push esi
// 0060f001  8b742418             mov esi, dword ptr [esp + 0x18]
// 0060f005  57                   push edi
// 0060f006  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 0060f00c  8d642400             lea esp, [esp]
// 0060f010  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0060f014  85c0                 test eax, eax
// 0060f016  7406                 je 0x60f01e
// 0060f018  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0060f01c  7402                 je 0x60f020
// 0060f01e  ffd7                 call edi
// 0060f020  8b442410             mov eax, dword ptr [esp + 0x10]
// 0060f024  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0060f028  740d                 je 0x60f037
// 0060f02a  ff06                 inc dword ptr [esi]
// 0060f02c  8d4c240c             lea ecx, [esp + 0xc]
// 0060f030  e80bc6ffff           call 0x60b640
// 0060f035  ebd9                 jmp 0x60f010
// 0060f037  5f                   pop edi
// 0060f038  5e                   pop esi
// 0060f039  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
