// roc 2007-08 00591ed0  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591ed0
//
// 00591ed0  83ec08               sub esp, 8
// 00591ed3  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00591ed6  db4118               fild dword ptr [ecx + 0x18]
// 00591ed9  034108               add eax, dword ptr [ecx + 8]
// 00591edc  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00591edf  13510c               adc edx, dword ptr [ecx + 0xc]
// 00591ee2  890424               mov dword ptr [esp], eax
// 00591ee5  89542404             mov dword ptr [esp + 4], edx
// 00591ee9  df2c24               fild qword ptr [esp]
// 00591eec  dc0d38ff7a00         fmul qword ptr [0x7aff38]
// 00591ef2  def9                 fdivp st(1)
// 00591ef4  83c408               add esp, 8
// 00591ef7  c3                   ret 
// library rbxgs/util\Profiling.cpp (function ?getNominalFPS@Bucket@Profiling@RBX@@QBENXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Profiling.cpp
