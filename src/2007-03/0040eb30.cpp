// roc 2007-03 0040eb30  unit: seg_00400000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040eb30
//
// 0040eb30  53                   push ebx
// 0040eb31  56                   push esi
// 0040eb32  8bf1                 mov esi, ecx
// 0040eb34  8b5e04               mov ebx, dword ptr [esi + 4]
// 0040eb37  3b5e08               cmp ebx, dword ptr [esi + 8]
// 0040eb3a  57                   push edi
// 0040eb3b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0040eb3f  c70700000000         mov dword ptr [edi], 0
// 0040eb45  7606                 jbe 0x40eb4d
// 0040eb47  ff1544e97700         call dword ptr [0x77e944]
// 0040eb4d  8937                 mov dword ptr [edi], esi
// 0040eb4f  895f04               mov dword ptr [edi + 4], ebx
// 0040eb52  8bc7                 mov eax, edi
// 0040eb54  5f                   pop edi
// 0040eb55  5e                   pop esi
// 0040eb56  5b                   pop ebx
// 0040eb57  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?begin@?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
