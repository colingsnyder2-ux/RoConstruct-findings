// roc 2007-03 00753340  unit: seg_00750000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00753340
//
// 00753340  b8fc868500           mov eax, 0x8586fc
// 00753345  e956bbecff           jmp 0x61eea0
// library rbxgs/reflection\type.cpp (function __ehhandler$?_Buynode@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@2@PAU342@0ABUItem@SignatureDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
