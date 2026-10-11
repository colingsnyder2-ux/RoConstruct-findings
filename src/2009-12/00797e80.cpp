// roc 2009-12 00797e80  unit: lua_exception  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00797e80
//
// 00797e80  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00797e84  83ec0c               sub esp, 0xc
// 00797e87  85c9                 test ecx, ecx
// 00797e89  7718                 ja 0x797ea3
// 00797e8b  33c9                 xor ecx, ecx
// 00797e8d  8d1449               lea edx, [ecx + ecx*2]
// 00797e90  03d2                 add edx, edx
// 00797e92  03d2                 add edx, edx
// 00797e94  03d2                 add edx, edx
// 00797e96  52                   push edx
// 00797e97  e8c4b90500           call 0x7f3860
// 00797e9c  83c404               add esp, 4
// 00797e9f  83c40c               add esp, 0xc
// 00797ea2  c3                   ret 
// 00797ea3  83c8ff               or eax, 0xffffffff
// 00797ea6  33d2                 xor edx, edx
// 00797ea8  f7f1                 div ecx
// 00797eaa  83f818               cmp eax, 0x18
// 00797ead  73de                 jae 0x797e8d
// 00797eaf  8d442410             lea eax, [esp + 0x10]
// 00797eb3  50                   push eax
// 00797eb4  8d4c2404             lea ecx, [esp + 4]
// 00797eb8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00797ec0  ff1548b79800         call dword ptr [0x98b748]
// 00797ec6  6838efa800           push 0xa8ef38
// 00797ecb  8d4c2404             lea ecx, [esp + 4]
// 00797ecf  51                   push ecx
// 00797ed0  c744240878f49900     mov dword ptr [esp + 8], 0x99f478
// 00797ed8  e89bc90500           call 0x7f4878
// library openrbx-client/App\reflection\type.cpp (function ??$_Allocate@U_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@@std@@YAPAU_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/type.cpp
