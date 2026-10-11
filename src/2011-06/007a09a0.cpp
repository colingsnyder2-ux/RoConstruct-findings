// roc 2011-06 007a09a0  unit: RBX::Network::VPersistentDataStore::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a09a0
//
// 007a09a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007a09a4  83ec0c               sub esp, 0xc
// 007a09a7  85c9                 test ecx, ecx
// 007a09a9  771c                 ja 0x7a09c7
// 007a09ab  33c9                 xor ecx, ecx
// 007a09ad  8d14cd00000000       lea edx, [ecx*8]
// 007a09b4  2bd1                 sub edx, ecx
// 007a09b6  03d2                 add edx, edx
// 007a09b8  03d2                 add edx, edx
// 007a09ba  52                   push edx
// 007a09bb  e89e960600           call 0x80a05e
// 007a09c0  83c404               add esp, 4
// 007a09c3  83c40c               add esp, 0xc
// 007a09c6  c3                   ret 
// 007a09c7  83c8ff               or eax, 0xffffffff
// 007a09ca  33d2                 xor edx, edx
// 007a09cc  f7f1                 div ecx
// 007a09ce  83f81c               cmp eax, 0x1c
// 007a09d1  73da                 jae 0x7a09ad
// 007a09d3  8d442410             lea eax, [esp + 0x10]
// 007a09d7  50                   push eax
// 007a09d8  8d4c2404             lea ecx, [esp + 4]
// 007a09dc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007a09e4  ff156c0aa400         call dword ptr [0xa40a6c]
// 007a09ea  68c472b800           push 0xb872c4
// 007a09ef  8d4c2404             lea ecx, [esp + 4]
// 007a09f3  51                   push ecx
// 007a09f4  c7442408b4b5a500     mov dword ptr [esp + 8], 0xa5b5b4
// 007a09fc  e8aba60600           call 0x80b0ac
// library openrbx-client/App\reflection\signal.cpp (function ??$_Allocate@U_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@@std@@YAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/signal.cpp
