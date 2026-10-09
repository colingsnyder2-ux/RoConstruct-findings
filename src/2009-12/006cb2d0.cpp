// roc 2009-12 006cb2d0  unit: RBX::Profiling::Profiler  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006cb2d0
//
// 006cb2d0  8bc1                 mov eax, ecx
// 006cb2d2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006cb2d6  8b11                 mov edx, dword ptr [ecx]
// 006cb2d8  8910                 mov dword ptr [eax], edx
// 006cb2da  d94104               fld dword ptr [ecx + 4]
// 006cb2dd  d95804               fstp dword ptr [eax + 4]
// 006cb2e0  53                   push ebx
// 006cb2e1  d94108               fld dword ptr [ecx + 8]
// 006cb2e4  56                   push esi
// 006cb2e5  d95808               fstp dword ptr [eax + 8]
// 006cb2e8  8d5838               lea ebx, [eax + 0x38]
// 006cb2eb  d9410c               fld dword ptr [ecx + 0xc]
// 006cb2ee  57                   push edi
// 006cb2ef  d9580c               fstp dword ptr [eax + 0xc]
// 006cb2f2  8bfb                 mov edi, ebx
// 006cb2f4  d94110               fld dword ptr [ecx + 0x10]
// 006cb2f7  d95810               fstp dword ptr [eax + 0x10]
// 006cb2fa  d94114               fld dword ptr [ecx + 0x14]
// 006cb2fd  d95814               fstp dword ptr [eax + 0x14]
// 006cb300  d94118               fld dword ptr [ecx + 0x18]
// 006cb303  d95818               fstp dword ptr [eax + 0x18]
// 006cb306  d9411c               fld dword ptr [ecx + 0x1c]
// 006cb309  d9581c               fstp dword ptr [eax + 0x1c]
// 006cb30c  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006cb30f  895020               mov dword ptr [eax + 0x20], edx
// 006cb312  8b5124               mov edx, dword ptr [ecx + 0x24]
// 006cb315  895024               mov dword ptr [eax + 0x24], edx
// 006cb318  8b5128               mov edx, dword ptr [ecx + 0x28]
// 006cb31b  895028               mov dword ptr [eax + 0x28], edx
// 006cb31e  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 006cb321  89502c               mov dword ptr [eax + 0x2c], edx
// 006cb324  8b5130               mov edx, dword ptr [ecx + 0x30]
// 006cb327  895030               mov dword ptr [eax + 0x30], edx
// 006cb32a  8b5134               mov edx, dword ptr [ecx + 0x34]
// 006cb32d  895034               mov dword ptr [eax + 0x34], edx
// 006cb330  8d5138               lea edx, [ecx + 0x38]
// 006cb333  b909000000           mov ecx, 9
// 006cb338  8bf2                 mov esi, edx
// 006cb33a  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006cb33c  d94224               fld dword ptr [edx + 0x24]
// 006cb33f  d95b24               fstp dword ptr [ebx + 0x24]
// 006cb342  d94228               fld dword ptr [edx + 0x28]
// 006cb345  d95b28               fstp dword ptr [ebx + 0x28]
// 006cb348  d9422c               fld dword ptr [edx + 0x2c]
// 006cb34b  d95b2c               fstp dword ptr [ebx + 0x2c]
// 006cb34e  5f                   pop edi
// 006cb34f  5e                   pop esi
// 006cb350  5b                   pop ebx
// 006cb351  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ??4Part@RBX@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
