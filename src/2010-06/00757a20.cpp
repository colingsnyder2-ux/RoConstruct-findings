// roc 2010-06 00757a20  unit: RBX::PrismPoly  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00757a20
//
// 00757a20  56                   push esi
// 00757a21  8b742418             mov esi, dword ptr [esp + 0x18]
// 00757a25  57                   push edi
// 00757a26  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 00757a2c  8d642400             lea esp, [esp]
// 00757a30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00757a34  85c0                 test eax, eax
// 00757a36  7406                 je 0x757a3e
// 00757a38  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00757a3c  7402                 je 0x757a40
// 00757a3e  ffd7                 call edi
// 00757a40  8b442410             mov eax, dword ptr [esp + 0x10]
// 00757a44  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00757a48  740d                 je 0x757a57
// 00757a4a  ff06                 inc dword ptr [esi]
// 00757a4c  8d4c240c             lea ecx, [esp + 0xc]
// 00757a50  e8bb140000           call 0x758f10
// 00757a55  ebd9                 jmp 0x757a30
// 00757a57  5f                   pop edi
// 00757a58  5e                   pop esi
// 00757a59  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
