// roc 2007-08 00591ba0  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591ba0
//
// 00591ba0  83ec08               sub esp, 8
// 00591ba3  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00591ba6  034108               add eax, dword ptr [ecx + 8]
// 00591ba9  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00591bac  13510c               adc edx, dword ptr [ecx + 0xc]
// 00591baf  890424               mov dword ptr [esp], eax
// 00591bb2  89542404             mov dword ptr [esp + 4], edx
// 00591bb6  df2c24               fild qword ptr [esp]
// 00591bb9  dc0d38ff7a00         fmul qword ptr [0x7aff38]
// 00591bbf  da7118               fidiv dword ptr [ecx + 0x18]
// 00591bc2  83c408               add esp, 8
// 00591bc5  c3                   ret 
// library rbxgs/util\Profiling.cpp (function ?getFrameTime@Bucket@Profiling@RBX@@QBENXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Profiling.cpp
