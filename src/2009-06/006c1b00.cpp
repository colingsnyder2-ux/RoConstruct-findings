// roc 2009-06 006c1b00  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c1b00
//
// 006c1b00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c1b04  83ec0c               sub esp, 0xc
// 006c1b07  85c9                 test ecx, ecx
// 006c1b09  7718                 ja 0x6c1b23
// 006c1b0b  33c9                 xor ecx, ecx
// 006c1b0d  8d1449               lea edx, [ecx + ecx*2]
// 006c1b10  03d2                 add edx, edx
// 006c1b12  03d2                 add edx, edx
// 006c1b14  03d2                 add edx, edx
// 006c1b16  52                   push edx
// 006c1b17  e81c6f0500           call 0x718a38
// 006c1b1c  83c404               add esp, 4
// 006c1b1f  83c40c               add esp, 0xc
// 006c1b22  c3                   ret 
// 006c1b23  83c8ff               or eax, 0xffffffff
// 006c1b26  33d2                 xor edx, edx
// 006c1b28  f7f1                 div ecx
// 006c1b2a  83f818               cmp eax, 0x18
// 006c1b2d  73de                 jae 0x6c1b0d
// 006c1b2f  8d442410             lea eax, [esp + 0x10]
// 006c1b33  50                   push eax
// 006c1b34  8d4c2404             lea ecx, [esp + 4]
// 006c1b38  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006c1b40  ff15c4e98900         call dword ptr [0x89e9c4]
// 006c1b46  6888919700           push 0x979188
// 006c1b4b  8d4c2404             lea ecx, [esp + 4]
// 006c1b4f  51                   push ecx
// 006c1b50  c744240838c98a00     mov dword ptr [esp + 8], 0x8ac938
// 006c1b58  e8ed7e0500           call 0x719a4a
// library openrbx-client/App\reflection\type.cpp (function ??$_Allocate@U_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@@std@@YAPAU_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/type.cpp
