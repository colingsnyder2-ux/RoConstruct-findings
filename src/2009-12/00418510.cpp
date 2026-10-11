// roc 2009-12 00418510  unit: RBX::VTool::?$FactoryProduct::Creator  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00418510
//
// 00418510  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00418514  83ec0c               sub esp, 0xc
// 00418517  85c9                 test ecx, ecx
// 00418519  771c                 ja 0x418537
// 0041851b  33c9                 xor ecx, ecx
// 0041851d  8d14cd00000000       lea edx, [ecx*8]
// 00418524  2bd1                 sub edx, ecx
// 00418526  03d2                 add edx, edx
// 00418528  03d2                 add edx, edx
// 0041852a  52                   push edx
// 0041852b  e830b33d00           call 0x7f3860
// 00418530  83c404               add esp, 4
// 00418533  83c40c               add esp, 0xc
// 00418536  c3                   ret 
// 00418537  83c8ff               or eax, 0xffffffff
// 0041853a  33d2                 xor edx, edx
// 0041853c  f7f1                 div ecx
// 0041853e  83f81c               cmp eax, 0x1c
// 00418541  73da                 jae 0x41851d
// 00418543  8d442410             lea eax, [esp + 0x10]
// 00418547  50                   push eax
// 00418548  8d4c2404             lea ecx, [esp + 4]
// 0041854c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00418554  ff1548b79800         call dword ptr [0x98b748]
// 0041855a  6838efa800           push 0xa8ef38
// 0041855f  8d4c2404             lea ecx, [esp + 4]
// 00418563  51                   push ecx
// 00418564  c744240878f49900     mov dword ptr [esp + 8], 0x99f478
// 0041856c  e807c33d00           call 0x7f4878
// library openrbx-client/App\reflection\signal.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/signal.cpp
