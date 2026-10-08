// roc 2007-08 005ba1e0  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ba1e0
//
// 005ba1e0  83ec10               sub esp, 0x10
// 005ba1e3  8d0424               lea eax, [esp]
// 005ba1e6  50                   push eax
// 005ba1e7  ff1528d27700         call dword ptr [0x77d228]
// 005ba1ed  8d4c2408             lea ecx, [esp + 8]
// 005ba1f1  51                   push ecx
// 005ba1f2  ff1524d27700         call dword ptr [0x77d224]
// 005ba1f8  df2c24               fild qword ptr [esp]
// 005ba1fb  df6c2408             fild qword ptr [esp + 8]
// 005ba1ff  def9                 fdivp st(1)
// 005ba201  83c410               add esp, 0x10
// 005ba204  c3                   ret 
// library openrbx-client/App\util\Timer.cpp (function ?getRealTime@RBX@@YANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Timer.cpp
