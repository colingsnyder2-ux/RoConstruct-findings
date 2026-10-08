// roc 2007-08 00591990  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591990
//
// 00591990  807c240400           cmp byte ptr [esp + 4], 0
// 00591995  740b                 je 0x5919a2
// 00591997  ff15f8d17700         call dword ptr [0x77d1f8]
// 0059199d  a3344c8c00           mov dword ptr [0x8c4c34], eax
// 005919a2  c3                   ret 
// library rbxgs/util\Profiling.cpp (function ?init@Profiling@RBX@@YAX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Profiling.cpp
