// roc 2007-08 004f1e60  unit: RBX::Render::AggregatingSceneManager  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f1e60
//
// 004f1e60  55                   push ebp
// 004f1e61  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004f1e65  57                   push edi
// 004f1e66  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004f1e6a  3bfd                 cmp edi, ebp
// 004f1e6c  742a                 je 0x4f1e98
// 004f1e6e  53                   push ebx
// 004f1e6f  56                   push esi
// 004f1e70  8d7710               lea esi, [edi + 0x10]
// 004f1e73  33db                 xor ebx, ebx
// 004f1e75  8b06                 mov eax, dword ptr [esi]
// 004f1e77  3bc3                 cmp eax, ebx
// 004f1e79  7409                 je 0x4f1e84
// 004f1e7b  50                   push eax
// 004f1e7c  e8e1dd1300           call 0x62fc62
// 004f1e81  83c404               add esp, 4
// 004f1e84  891e                 mov dword ptr [esi], ebx
// 004f1e86  895e04               mov dword ptr [esi + 4], ebx
// 004f1e89  895e08               mov dword ptr [esi + 8], ebx
// 004f1e8c  83c720               add edi, 0x20
// 004f1e8f  83c620               add esi, 0x20
// 004f1e92  3bfd                 cmp edi, ebp
// 004f1e94  75df                 jne 0x4f1e75
// 004f1e96  5e                   pop esi
// 004f1e97  5b                   pop ebx
// 004f1e98  5f                   pop edi
// 004f1e99  5d                   pop ebp
// 004f1e9a  c3                   ret 
// library rbxgs-render/Clusterer.cpp (function ??$_Destroy_range@VCluster@Clusterer@Render@RBX@@V?$allocator@VCluster@Clusterer@Render@RBX@@@std@@@std@@YAXPAVCluster@Clusterer@Render@RBX@@0AAV?$allocator@VCluster@Clusterer@Render@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Clusterer.cpp
