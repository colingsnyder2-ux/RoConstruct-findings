// roc 2007-03 005f1510  unit: seg_005f0000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f1510
//
// 005f1510  6a1c                 push 0x1c
// 005f1512  e8f1cb0200           call 0x61e108
// 005f1517  83c404               add esp, 4
// 005f151a  85c0                 test eax, eax
// 005f151c  7406                 je 0x5f1524
// 005f151e  c70000000000         mov dword ptr [eax], 0
// 005f1524  8d4804               lea ecx, [eax + 4]
// 005f1527  85c9                 test ecx, ecx
// 005f1529  7406                 je 0x5f1531
// 005f152b  c70100000000         mov dword ptr [ecx], 0
// 005f1531  8d4808               lea ecx, [eax + 8]
// 005f1534  85c9                 test ecx, ecx
// 005f1536  7406                 je 0x5f153e
// 005f1538  c70100000000         mov dword ptr [ecx], 0
// 005f153e  c6401801             mov byte ptr [eax + 0x18], 1
// 005f1542  c6401900             mov byte ptr [eax + 0x19], 0
// 005f1546  c3                   ret 
// library rbxgs/reflection\signal.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
