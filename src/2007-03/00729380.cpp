// roc 2007-03 00729380  unit: seg_00720000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00729380
//
// 00729380  6a28                 push 0x28
// 00729382  e8814defff           call 0x61e108
// 00729387  83c404               add esp, 4
// 0072938a  85c0                 test eax, eax
// 0072938c  7406                 je 0x729394
// 0072938e  c70000000000         mov dword ptr [eax], 0
// 00729394  8d4804               lea ecx, [eax + 4]
// 00729397  85c9                 test ecx, ecx
// 00729399  7406                 je 0x7293a1
// 0072939b  c70100000000         mov dword ptr [ecx], 0
// 007293a1  8d4808               lea ecx, [eax + 8]
// 007293a4  85c9                 test ecx, ecx
// 007293a6  7406                 je 0x7293ae
// 007293a8  c70100000000         mov dword ptr [ecx], 0
// 007293ae  c6402401             mov byte ptr [eax + 0x24], 1
// 007293b2  c6402500             mov byte ptr [eax + 0x25], 0
// 007293b6  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@UData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@U?$less@UData@Guid@RBX@@@5@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@@5@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@U?$less@UData@Guid@RBX@@@5@V?$allocator@U?$pair@$$CBUData@Guid@RBX@@V?$vector@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@@std@@@5@$0A@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
