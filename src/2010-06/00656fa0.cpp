// roc 2010-06 00656fa0  unit: RBX::VFrame::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00656fa0
//
// 00656fa0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00656fa4  83ec0c               sub esp, 0xc
// 00656fa7  85c9                 test ecx, ecx
// 00656fa9  771c                 ja 0x656fc7
// 00656fab  33c9                 xor ecx, ecx
// 00656fad  8d14cd00000000       lea edx, [ecx*8]
// 00656fb4  2bd1                 sub edx, ecx
// 00656fb6  03d2                 add edx, edx
// 00656fb8  03d2                 add edx, edx
// 00656fba  52                   push edx
// 00656fbb  e8e0091500           call 0x7a79a0
// 00656fc0  83c404               add esp, 4
// 00656fc3  83c40c               add esp, 0xc
// 00656fc6  c3                   ret 
// 00656fc7  83c8ff               or eax, 0xffffffff
// 00656fca  33d2                 xor edx, edx
// 00656fcc  f7f1                 div ecx
// 00656fce  83f81c               cmp eax, 0x1c
// 00656fd1  73da                 jae 0x656fad
// 00656fd3  8d442410             lea eax, [esp + 0x10]
// 00656fd7  50                   push eax
// 00656fd8  8d4c2404             lea ecx, [esp + 4]
// 00656fdc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00656fe4  ff1524a99e00         call dword ptr [0x9ea924]
// 00656fea  68b41ab000           push 0xb01ab4
// 00656fef  8d4c2404             lea ecx, [esp + 4]
// 00656ff3  51                   push ecx
// 00656ff4  c74424082000a000     mov dword ptr [esp + 8], 0xa00020
// 00656ffc  e8b1191500           call 0x7a89b2
// library openrbx-client/App\reflection\signal.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/signal.cpp
