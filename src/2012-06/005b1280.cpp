// roc 2012-06 005b1280  unit: RBX::Network::ErrorCompPhysicsSender  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005b1280
//
// 005b1280  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b1284  83ec0c               sub esp, 0xc
// 005b1287  85c9                 test ecx, ecx
// 005b1289  7718                 ja 0x5b12a3
// 005b128b  33c9                 xor ecx, ecx
// 005b128d  8d1449               lea edx, [ecx + ecx*2]
// 005b1290  03d2                 add edx, edx
// 005b1292  03d2                 add edx, edx
// 005b1294  03d2                 add edx, edx
// 005b1296  52                   push edx
// 005b1297  e87e0e3d00           call 0x98211a
// 005b129c  83c404               add esp, 4
// 005b129f  83c40c               add esp, 0xc
// 005b12a2  c3                   ret 
// 005b12a3  83c8ff               or eax, 0xffffffff
// 005b12a6  33d2                 xor edx, edx
// 005b12a8  f7f1                 div ecx
// 005b12aa  83f818               cmp eax, 0x18
// 005b12ad  73de                 jae 0x5b128d
// 005b12af  8d442410             lea eax, [esp + 0x10]
// 005b12b3  50                   push eax
// 005b12b4  8d4c2404             lea ecx, [esp + 4]
// 005b12b8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005b12c0  ff15d029b200         call dword ptr [0xb229d0]
// 005b12c6  685861cd00           push 0xcd6158
// 005b12cb  8d4c2404             lea ecx, [esp + 4]
// 005b12cf  51                   push ecx
// 005b12d0  c7442408942eb400     mov dword ptr [esp + 8], 0xb42e94
// 005b12d8  e8671e3d00           call 0x983144
// library openrbx-client/App\reflection\type.cpp (function ??$_Allocate@U_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@@std@@YAPAU_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/type.cpp
