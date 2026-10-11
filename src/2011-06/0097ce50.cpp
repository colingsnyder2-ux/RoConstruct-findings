// roc 2011-06 0097ce50  unit: RBX::BeveledBlockBuilder  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0097ce50
//
// 0097ce50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0097ce54  83ec0c               sub esp, 0xc
// 0097ce57  85c9                 test ecx, ecx
// 0097ce59  7718                 ja 0x97ce73
// 0097ce5b  33c9                 xor ecx, ecx
// 0097ce5d  8d1449               lea edx, [ecx + ecx*2]
// 0097ce60  03d2                 add edx, edx
// 0097ce62  03d2                 add edx, edx
// 0097ce64  03d2                 add edx, edx
// 0097ce66  52                   push edx
// 0097ce67  e8f2d1e8ff           call 0x80a05e
// 0097ce6c  83c404               add esp, 4
// 0097ce6f  83c40c               add esp, 0xc
// 0097ce72  c3                   ret 
// 0097ce73  83c8ff               or eax, 0xffffffff
// 0097ce76  33d2                 xor edx, edx
// 0097ce78  f7f1                 div ecx
// 0097ce7a  83f818               cmp eax, 0x18
// 0097ce7d  73de                 jae 0x97ce5d
// 0097ce7f  8d442410             lea eax, [esp + 0x10]
// 0097ce83  50                   push eax
// 0097ce84  8d4c2404             lea ecx, [esp + 4]
// 0097ce88  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0097ce90  ff156c0aa400         call dword ptr [0xa40a6c]
// 0097ce96  68c472b800           push 0xb872c4
// 0097ce9b  8d4c2404             lea ecx, [esp + 4]
// 0097ce9f  51                   push ecx
// 0097cea0  c7442408b4b5a500     mov dword ptr [esp + 8], 0xa5b5b4
// 0097cea8  e8ffe1e8ff           call 0x80b0ac
// library openrbx-client/App\reflection\type.cpp (function ??$_Allocate@U_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@@std@@YAPAU_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/type.cpp
