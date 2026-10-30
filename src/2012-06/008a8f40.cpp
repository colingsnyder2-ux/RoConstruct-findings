// roc 2012-06 008a8f40  unit: RBX::Block  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a8f40
//
// 008a8f40  55                   push ebp
// 008a8f41  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 008a8f45  57                   push edi
// 008a8f46  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008a8f4a  3bfd                 cmp edi, ebp
// 008a8f4c  742a                 je 0x8a8f78
// 008a8f4e  53                   push ebx
// 008a8f4f  56                   push esi
// 008a8f50  8d7714               lea esi, [edi + 0x14]
// 008a8f53  33db                 xor ebx, ebx
// 008a8f55  8b06                 mov eax, dword ptr [esi]
// 008a8f57  3bc3                 cmp eax, ebx
// 008a8f59  7409                 je 0x8a8f64
// 008a8f5b  50                   push eax
// 008a8f5c  e8b3910d00           call 0x982114
// 008a8f61  83c404               add esp, 4
// 008a8f64  891e                 mov dword ptr [esi], ebx
// 008a8f66  895e04               mov dword ptr [esi + 4], ebx
// 008a8f69  895e08               mov dword ptr [esi + 8], ebx
// 008a8f6c  83c720               add edi, 0x20
// 008a8f6f  83c620               add esi, 0x20
// 008a8f72  3bfd                 cmp edi, ebp
// 008a8f74  75df                 jne 0x8a8f55
// 008a8f76  5e                   pop esi
// 008a8f77  5b                   pop ebx
// 008a8f78  5f                   pop edi
// 008a8f79  5d                   pop ebp
// 008a8f7a  c3                   ret 
// library ogre-1.7.0/OgreEdgeListBuilder.cpp (function ??$_Destroy_range@UEdgeGroup@EdgeData@Ogre@@V?$allocator@UEdgeGroup@EdgeData@Ogre@@@std@@@std@@YAXPAUEdgeGroup@EdgeData@Ogre@@0AAV?$allocator@UEdgeGroup@EdgeData@Ogre@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreEdgeListBuilder.cpp
