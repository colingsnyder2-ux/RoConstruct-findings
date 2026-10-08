// roc 2007-03 004e57d0  unit: seg_004e0000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e57d0
//
// 004e57d0  55                   push ebp
// 004e57d1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004e57d5  57                   push edi
// 004e57d6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004e57da  3bfd                 cmp edi, ebp
// 004e57dc  742a                 je 0x4e5808
// 004e57de  53                   push ebx
// 004e57df  56                   push esi
// 004e57e0  8d7710               lea esi, [edi + 0x10]
// 004e57e3  33db                 xor ebx, ebx
// 004e57e5  8b06                 mov eax, dword ptr [esi]
// 004e57e7  3bc3                 cmp eax, ebx
// 004e57e9  7409                 je 0x4e57f4
// 004e57eb  50                   push eax
// 004e57ec  e8ff881300           call 0x61e0f0
// 004e57f1  83c404               add esp, 4
// 004e57f4  891e                 mov dword ptr [esi], ebx
// 004e57f6  895e04               mov dword ptr [esi + 4], ebx
// 004e57f9  895e08               mov dword ptr [esi + 8], ebx
// 004e57fc  83c720               add edi, 0x20
// 004e57ff  83c620               add esi, 0x20
// 004e5802  3bfd                 cmp edi, ebp
// 004e5804  75df                 jne 0x4e57e5
// 004e5806  5e                   pop esi
// 004e5807  5b                   pop ebx
// 004e5808  5f                   pop edi
// 004e5809  5d                   pop ebp
// 004e580a  c3                   ret 
// library rbxgs-render/Clusterer.cpp (function ??$_Destroy_range@VCluster@Clusterer@Render@RBX@@V?$allocator@VCluster@Clusterer@Render@RBX@@@std@@@std@@YAXPAVCluster@Clusterer@Render@RBX@@0AAV?$allocator@VCluster@Clusterer@Render@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Clusterer.cpp
