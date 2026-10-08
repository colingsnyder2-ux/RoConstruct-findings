// roc 2007-03 0049e4c0  unit: seg_00490000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049e4c0
//
// 0049e4c0  6a1c                 push 0x1c
// 0049e4c2  e841fc1700           call 0x61e108
// 0049e4c7  83c404               add esp, 4
// 0049e4ca  85c0                 test eax, eax
// 0049e4cc  7444                 je 0x49e512
// 0049e4ce  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049e4d2  8b542408             mov edx, dword ptr [esp + 8]
// 0049e4d6  8908                 mov dword ptr [eax], ecx
// 0049e4d8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049e4dc  894808               mov dword ptr [eax + 8], ecx
// 0049e4df  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049e4e3  895004               mov dword ptr [eax + 4], edx
// 0049e4e6  8b11                 mov edx, dword ptr [ecx]
// 0049e4e8  89500c               mov dword ptr [eax + 0xc], edx
// 0049e4eb  8b5104               mov edx, dword ptr [ecx + 4]
// 0049e4ee  895010               mov dword ptr [eax + 0x10], edx
// 0049e4f1  8b4908               mov ecx, dword ptr [ecx + 8]
// 0049e4f4  85c9                 test ecx, ecx
// 0049e4f6  894814               mov dword ptr [eax + 0x14], ecx
// 0049e4f9  740c                 je 0x49e507
// 0049e4fb  83c104               add ecx, 4
// 0049e4fe  ba01000000           mov edx, 1
// 0049e503  f00fc111             lock xadd dword ptr [ecx], edx
// 0049e507  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 0049e50b  884818               mov byte ptr [eax + 0x18], cl
// 0049e50e  c6401900             mov byte ptr [eax + 0x19], 0
// 0049e512  c21400               ret 0x14
// library rbxgs/reflection\signal.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@2@PAU342@00ABU?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
