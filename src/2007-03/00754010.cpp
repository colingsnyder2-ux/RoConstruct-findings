// roc 2007-03 00754010  unit: seg_00750000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00754010
//
// 00754010  b8989d8500           mov eax, 0x859d98
// 00754015  e986aeecff           jmp 0x61eea0
// library rbxgs/reflection\type.cpp (function __ehhandler$?_Buynode@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@2@PAU342@0ABUItem@SignatureDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
