// roc 2010-06 00636ec0  unit: RBX::Profiling::Profiler  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00636ec0
//
// 00636ec0  8bc1                 mov eax, ecx
// 00636ec2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00636ec6  8b11                 mov edx, dword ptr [ecx]
// 00636ec8  8910                 mov dword ptr [eax], edx
// 00636eca  d94104               fld dword ptr [ecx + 4]
// 00636ecd  d95804               fstp dword ptr [eax + 4]
// 00636ed0  53                   push ebx
// 00636ed1  d94108               fld dword ptr [ecx + 8]
// 00636ed4  56                   push esi
// 00636ed5  d95808               fstp dword ptr [eax + 8]
// 00636ed8  8d5838               lea ebx, [eax + 0x38]
// 00636edb  d9410c               fld dword ptr [ecx + 0xc]
// 00636ede  57                   push edi
// 00636edf  d9580c               fstp dword ptr [eax + 0xc]
// 00636ee2  8bfb                 mov edi, ebx
// 00636ee4  d94110               fld dword ptr [ecx + 0x10]
// 00636ee7  d95810               fstp dword ptr [eax + 0x10]
// 00636eea  d94114               fld dword ptr [ecx + 0x14]
// 00636eed  d95814               fstp dword ptr [eax + 0x14]
// 00636ef0  d94118               fld dword ptr [ecx + 0x18]
// 00636ef3  d95818               fstp dword ptr [eax + 0x18]
// 00636ef6  d9411c               fld dword ptr [ecx + 0x1c]
// 00636ef9  d9581c               fstp dword ptr [eax + 0x1c]
// 00636efc  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00636eff  895020               mov dword ptr [eax + 0x20], edx
// 00636f02  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00636f05  895024               mov dword ptr [eax + 0x24], edx
// 00636f08  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00636f0b  895028               mov dword ptr [eax + 0x28], edx
// 00636f0e  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 00636f11  89502c               mov dword ptr [eax + 0x2c], edx
// 00636f14  8b5130               mov edx, dword ptr [ecx + 0x30]
// 00636f17  895030               mov dword ptr [eax + 0x30], edx
// 00636f1a  8b5134               mov edx, dword ptr [ecx + 0x34]
// 00636f1d  895034               mov dword ptr [eax + 0x34], edx
// 00636f20  8d5138               lea edx, [ecx + 0x38]
// 00636f23  b909000000           mov ecx, 9
// 00636f28  8bf2                 mov esi, edx
// 00636f2a  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00636f2c  d94224               fld dword ptr [edx + 0x24]
// 00636f2f  d95b24               fstp dword ptr [ebx + 0x24]
// 00636f32  d94228               fld dword ptr [edx + 0x28]
// 00636f35  d95b28               fstp dword ptr [ebx + 0x28]
// 00636f38  d9422c               fld dword ptr [edx + 0x2c]
// 00636f3b  d95b2c               fstp dword ptr [ebx + 0x2c]
// 00636f3e  5f                   pop edi
// 00636f3f  5e                   pop esi
// 00636f40  5b                   pop ebx
// 00636f41  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ??4Part@RBX@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
