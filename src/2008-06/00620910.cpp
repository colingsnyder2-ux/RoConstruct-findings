// roc 2008-06 00620910  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00620910
//
// 00620910  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00620914  83ec0c               sub esp, 0xc
// 00620917  85c9                 test ecx, ecx
// 00620919  7718                 ja 0x620933
// 0062091b  33c9                 xor ecx, ecx
// 0062091d  8d1449               lea edx, [ecx + ecx*2]
// 00620920  03d2                 add edx, edx
// 00620922  03d2                 add edx, edx
// 00620924  03d2                 add edx, edx
// 00620926  52                   push edx
// 00620927  e8f4ff0700           call 0x6a0920
// 0062092c  83c404               add esp, 4
// 0062092f  83c40c               add esp, 0xc
// 00620932  c3                   ret 
// 00620933  83c8ff               or eax, 0xffffffff
// 00620936  33d2                 xor edx, edx
// 00620938  f7f1                 div ecx
// 0062093a  83f818               cmp eax, 0x18
// 0062093d  73de                 jae 0x62091d
// 0062093f  8d442410             lea eax, [esp + 0x10]
// 00620943  50                   push eax
// 00620944  8d4c2404             lea ecx, [esp + 4]
// 00620948  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00620950  ff15a4288000         call dword ptr [0x8028a4]
// 00620956  68d8078d00           push 0x8d07d8
// 0062095b  8d4c2404             lea ecx, [esp + 4]
// 0062095f  51                   push ecx
// 00620960  c744240804b18000     mov dword ptr [esp + 8], 0x80b104
// 00620968  e81f0c0800           call 0x6a158c
// library openrbx-client/App\reflection\type.cpp (function ??$_Allocate@U_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@@std@@YAPAU_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@0@IPAU120@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/type.cpp
