// roc 2010-06 007306e0  unit: lua_exception  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007306e0
//
// 007306e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007306e4  83ec0c               sub esp, 0xc
// 007306e7  85c9                 test ecx, ecx
// 007306e9  7718                 ja 0x730703
// 007306eb  33c9                 xor ecx, ecx
// 007306ed  8d1449               lea edx, [ecx + ecx*2]
// 007306f0  03d2                 add edx, edx
// 007306f2  03d2                 add edx, edx
// 007306f4  03d2                 add edx, edx
// 007306f6  52                   push edx
// 007306f7  e8a4720700           call 0x7a79a0
// 007306fc  83c404               add esp, 4
// 007306ff  83c40c               add esp, 0xc
// 00730702  c3                   ret 
// 00730703  83c8ff               or eax, 0xffffffff
// 00730706  33d2                 xor edx, edx
// 00730708  f7f1                 div ecx
// 0073070a  83f818               cmp eax, 0x18
// 0073070d  73de                 jae 0x7306ed
// 0073070f  8d442410             lea eax, [esp + 0x10]
// 00730713  50                   push eax
// 00730714  8d4c2404             lea ecx, [esp + 4]
// 00730718  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00730720  ff1524a99e00         call dword ptr [0x9ea924]
// 00730726  68b41ab000           push 0xb01ab4
// 0073072b  8d4c2404             lea ecx, [esp + 4]
// 0073072f  51                   push ecx
// 00730730  c74424082000a000     mov dword ptr [esp + 8], 0xa00020
// 00730738  e875820700           call 0x7a89b2
// library openrbx-client/App\reflection\type.cpp (function ??$_Allocate@U_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@@std@@YAPAU_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/type.cpp
