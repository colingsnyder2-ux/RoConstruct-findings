// roc 2009-06 004180e0  unit: RBX::VTool::?$FactoryProduct::Creator  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004180e0
//
// 004180e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004180e4  83ec0c               sub esp, 0xc
// 004180e7  85c9                 test ecx, ecx
// 004180e9  771c                 ja 0x418107
// 004180eb  33c9                 xor ecx, ecx
// 004180ed  8d14cd00000000       lea edx, [ecx*8]
// 004180f4  2bd1                 sub edx, ecx
// 004180f6  03d2                 add edx, edx
// 004180f8  03d2                 add edx, edx
// 004180fa  52                   push edx
// 004180fb  e838093000           call 0x718a38
// 00418100  83c404               add esp, 4
// 00418103  83c40c               add esp, 0xc
// 00418106  c3                   ret 
// 00418107  83c8ff               or eax, 0xffffffff
// 0041810a  33d2                 xor edx, edx
// 0041810c  f7f1                 div ecx
// 0041810e  83f81c               cmp eax, 0x1c
// 00418111  73da                 jae 0x4180ed
// 00418113  8d442410             lea eax, [esp + 0x10]
// 00418117  50                   push eax
// 00418118  8d4c2404             lea ecx, [esp + 4]
// 0041811c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00418124  ff15c4e98900         call dword ptr [0x89e9c4]
// 0041812a  6888919700           push 0x979188
// 0041812f  8d4c2404             lea ecx, [esp + 4]
// 00418133  51                   push ecx
// 00418134  c744240838c98a00     mov dword ptr [esp + 8], 0x8ac938
// 0041813c  e809193000           call 0x719a4a
// library openrbx-client/App\reflection\signal.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/signal.cpp
