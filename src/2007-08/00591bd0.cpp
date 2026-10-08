// roc 2007-08 00591bd0  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591bd0
//
// 00591bd0  83ec08               sub esp, 8
// 00591bd3  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00591bd6  034108               add eax, dword ptr [ecx + 8]
// 00591bd9  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00591bdc  13510c               adc edx, dword ptr [ecx + 0xc]
// 00591bdf  890424               mov dword ptr [esp], eax
// 00591be2  89542404             mov dword ptr [esp + 4], edx
// 00591be6  df2c24               fild qword ptr [esp]
// 00591be9  dc0d38ff7a00         fmul qword ptr [0x7aff38]
// 00591bef  83c408               add esp, 8
// 00591bf2  c3                   ret 
// library rbxgs/util\Profiling.cpp (function ?getTotalTime@Bucket@Profiling@RBX@@QBENXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Profiling.cpp
