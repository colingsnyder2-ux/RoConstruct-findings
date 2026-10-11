// roc 2007-03 00408e30  unit: seg_00400000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00408e30
//
// 00408e30  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00408e34  83ec0c               sub esp, 0xc
// 00408e37  85c9                 test ecx, ecx
// 00408e39  771c                 ja 0x408e57
// 00408e3b  33c9                 xor ecx, ecx
// 00408e3d  8d14cd00000000       lea edx, [ecx*8]
// 00408e44  2bd1                 sub edx, ecx
// 00408e46  03d2                 add edx, edx
// 00408e48  03d2                 add edx, edx
// 00408e4a  52                   push edx
// 00408e4b  e8b8522100           call 0x61e108
// 00408e50  83c404               add esp, 4
// 00408e53  83c40c               add esp, 0xc
// 00408e56  c3                   ret 
// 00408e57  83c8ff               or eax, 0xffffffff
// 00408e5a  33d2                 xor edx, edx
// 00408e5c  f7f1                 div ecx
// 00408e5e  83f81c               cmp eax, 0x1c
// 00408e61  73da                 jae 0x408e3d
// 00408e63  8d442410             lea eax, [esp + 0x10]
// 00408e67  50                   push eax
// 00408e68  8d4c2404             lea ecx, [esp + 4]
// 00408e6c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00408e74  ff1554e97700         call dword ptr [0x77e954]
// 00408e7a  68e0f18300           push 0x83f1e0
// 00408e7f  8d4c2404             lea ecx, [esp + 4]
// 00408e83  51                   push ecx
// 00408e84  c74424082c3e7800     mov dword ptr [esp + 8], 0x783e2c
// 00408e8c  e89d612100           call 0x61f02e
// library openrbx-client/App\reflection\signal.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/signal.cpp
