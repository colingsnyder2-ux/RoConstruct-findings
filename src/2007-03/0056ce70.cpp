// roc 2007-03 0056ce70  unit: seg_00560000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056ce70
//
// 0056ce70  6a18                 push 0x18
// 0056ce72  e891120b00           call 0x61e108
// 0056ce77  83c404               add esp, 4
// 0056ce7a  85c0                 test eax, eax
// 0056ce7c  7402                 je 0x56ce80
// 0056ce7e  8900                 mov dword ptr [eax], eax
// 0056ce80  8d4804               lea ecx, [eax + 4]
// 0056ce83  85c9                 test ecx, ecx
// 0056ce85  7402                 je 0x56ce89
// 0056ce87  8901                 mov dword ptr [ecx], eax
// 0056ce89  c3                   ret 
// library rbxgs/reflection\type.cpp (function ?_Buynode@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
