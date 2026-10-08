// roc 2007-03 00410a90  unit: seg_00410000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00410a90
//
// 00410a90  53                   push ebx
// 00410a91  56                   push esi
// 00410a92  8bf1                 mov esi, ecx
// 00410a94  8b5e08               mov ebx, dword ptr [esi + 8]
// 00410a97  395e04               cmp dword ptr [esi + 4], ebx
// 00410a9a  57                   push edi
// 00410a9b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00410a9f  c70700000000         mov dword ptr [edi], 0
// 00410aa5  7606                 jbe 0x410aad
// 00410aa7  ff1544e97700         call dword ptr [0x77e944]
// 00410aad  8937                 mov dword ptr [edi], esi
// 00410aaf  895f04               mov dword ptr [edi + 4], ebx
// 00410ab2  8bc7                 mov eax, edi
// 00410ab4  5f                   pop edi
// 00410ab5  5e                   pop esi
// 00410ab6  5b                   pop ebx
// 00410ab7  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?end@?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
