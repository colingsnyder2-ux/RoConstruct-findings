// roc 2012-06 0091cb30  unit: seg_00910000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0091cb30
//
// 0091cb30  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0091cb34  83ec0c               sub esp, 0xc
// 0091cb37  85c9                 test ecx, ecx
// 0091cb39  771c                 ja 0x91cb57
// 0091cb3b  33c9                 xor ecx, ecx
// 0091cb3d  8d14cd00000000       lea edx, [ecx*8]
// 0091cb44  2bd1                 sub edx, ecx
// 0091cb46  03d2                 add edx, edx
// 0091cb48  03d2                 add edx, edx
// 0091cb4a  52                   push edx
// 0091cb4b  e8ca550600           call 0x98211a
// 0091cb50  83c404               add esp, 4
// 0091cb53  83c40c               add esp, 0xc
// 0091cb56  c3                   ret 
// 0091cb57  83c8ff               or eax, 0xffffffff
// 0091cb5a  33d2                 xor edx, edx
// 0091cb5c  f7f1                 div ecx
// 0091cb5e  83f81c               cmp eax, 0x1c
// 0091cb61  73da                 jae 0x91cb3d
// 0091cb63  8d442410             lea eax, [esp + 0x10]
// 0091cb67  50                   push eax
// 0091cb68  8d4c2404             lea ecx, [esp + 4]
// 0091cb6c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0091cb74  ff15d029b200         call dword ptr [0xb229d0]
// 0091cb7a  685861cd00           push 0xcd6158
// 0091cb7f  8d4c2404             lea ecx, [esp + 4]
// 0091cb83  51                   push ecx
// 0091cb84  c7442408942eb400     mov dword ptr [esp + 8], 0xb42e94
// 0091cb8c  e8b3650600           call 0x983144
// library openrbx-client/App\reflection\signal.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/signal.cpp
