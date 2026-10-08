// roc 2007-08 00591c00  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591c00
//
// 00591c00  d9e8                 fld1 
// 00591c02  56                   push esi
// 00591c03  8bf1                 mov esi, ecx
// 00591c05  dd1e                 fstp qword ptr [esi]
// 00591c07  d9ee                 fldz 
// 00591c09  33c9                 xor ecx, ecx
// 00591c0b  894e08               mov dword ptr [esi + 8], ecx
// 00591c0e  8d4610               lea eax, [esi + 0x10]
// 00591c11  baff0f0000           mov edx, 0xfff
// 00591c16  dd10                 fst qword ptr [eax]
// 00591c18  894808               mov dword ptr [eax + 8], ecx
// 00591c1b  89480c               mov dword ptr [eax + 0xc], ecx
// 00591c1e  894810               mov dword ptr [eax + 0x10], ecx
// 00591c21  894814               mov dword ptr [eax + 0x14], ecx
// 00591c24  894818               mov dword ptr [eax + 0x18], ecx
// 00591c27  83c020               add eax, 0x20
// 00591c2a  83ea01               sub edx, 1
// 00591c2d  79e7                 jns 0x591c16
// 00591c2f  ddd8                 fstp st(0)
// 00591c31  e8bae2f6ff           call 0x4ffef0
// 00591c36  8b442408             mov eax, dword ptr [esp + 8]
// 00591c3a  dd9e10000200         fstp qword ptr [esi + 0x20010]
// 00591c40  50                   push eax
// 00591c41  8d8e18000200         lea ecx, [esi + 0x20018]
// 00591c47  ff1598e67700         call dword ptr [0x77e698]
// 00591c4d  8bc6                 mov eax, esi
// 00591c4f  5e                   pop esi
// 00591c50  c20400               ret 4
// library rbxgs/util\Profiling.cpp (function ??0Profiler@Profiling@RBX@@QAE@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Profiling.cpp
