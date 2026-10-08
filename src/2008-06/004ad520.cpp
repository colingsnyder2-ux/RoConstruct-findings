// roc 2008-06 004ad520  unit: RBX::Network::Replicator::ChangePropertyItem  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ad520
//
// 004ad520  56                   push esi
// 004ad521  8b742418             mov esi, dword ptr [esp + 0x18]
// 004ad525  57                   push edi
// 004ad526  8b3d90288000         mov edi, dword ptr [0x802890]
// 004ad52c  8d642400             lea esp, [esp]
// 004ad530  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ad534  85c0                 test eax, eax
// 004ad536  7406                 je 0x4ad53e
// 004ad538  3b442414             cmp eax, dword ptr [esp + 0x14]
// 004ad53c  7402                 je 0x4ad540
// 004ad53e  ffd7                 call edi
// 004ad540  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ad544  3b442418             cmp eax, dword ptr [esp + 0x18]
// 004ad548  740d                 je 0x4ad557
// 004ad54a  ff06                 inc dword ptr [esi]
// 004ad54c  8d4c240c             lea ecx, [esp + 0xc]
// 004ad550  e8fb9c1000           call 0x5b7250
// 004ad555  ebd9                 jmp 0x4ad530
// 004ad557  5f                   pop edi
// 004ad558  5e                   pop esi
// 004ad559  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??$_Distance2@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
