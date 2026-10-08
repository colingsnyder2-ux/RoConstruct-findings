// roc 2008-06 00598e80  unit: RBX::PartInstance  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598e80
//
// 00598e80  8bc1                 mov eax, ecx
// 00598e82  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00598e86  8b11                 mov edx, dword ptr [ecx]
// 00598e88  8910                 mov dword ptr [eax], edx
// 00598e8a  d94104               fld dword ptr [ecx + 4]
// 00598e8d  d95804               fstp dword ptr [eax + 4]
// 00598e90  53                   push ebx
// 00598e91  d94108               fld dword ptr [ecx + 8]
// 00598e94  56                   push esi
// 00598e95  d95808               fstp dword ptr [eax + 8]
// 00598e98  8d5838               lea ebx, [eax + 0x38]
// 00598e9b  d9410c               fld dword ptr [ecx + 0xc]
// 00598e9e  57                   push edi
// 00598e9f  d9580c               fstp dword ptr [eax + 0xc]
// 00598ea2  8bfb                 mov edi, ebx
// 00598ea4  d94110               fld dword ptr [ecx + 0x10]
// 00598ea7  d95810               fstp dword ptr [eax + 0x10]
// 00598eaa  d94114               fld dword ptr [ecx + 0x14]
// 00598ead  d95814               fstp dword ptr [eax + 0x14]
// 00598eb0  d94118               fld dword ptr [ecx + 0x18]
// 00598eb3  d95818               fstp dword ptr [eax + 0x18]
// 00598eb6  d9411c               fld dword ptr [ecx + 0x1c]
// 00598eb9  d9581c               fstp dword ptr [eax + 0x1c]
// 00598ebc  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00598ebf  895020               mov dword ptr [eax + 0x20], edx
// 00598ec2  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00598ec5  895024               mov dword ptr [eax + 0x24], edx
// 00598ec8  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00598ecb  895028               mov dword ptr [eax + 0x28], edx
// 00598ece  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 00598ed1  89502c               mov dword ptr [eax + 0x2c], edx
// 00598ed4  8b5130               mov edx, dword ptr [ecx + 0x30]
// 00598ed7  895030               mov dword ptr [eax + 0x30], edx
// 00598eda  8b5134               mov edx, dword ptr [ecx + 0x34]
// 00598edd  895034               mov dword ptr [eax + 0x34], edx
// 00598ee0  8d5138               lea edx, [ecx + 0x38]
// 00598ee3  b909000000           mov ecx, 9
// 00598ee8  8bf2                 mov esi, edx
// 00598eea  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00598eec  d94224               fld dword ptr [edx + 0x24]
// 00598eef  d95b24               fstp dword ptr [ebx + 0x24]
// 00598ef2  d94228               fld dword ptr [edx + 0x28]
// 00598ef5  d95b28               fstp dword ptr [ebx + 0x28]
// 00598ef8  d9422c               fld dword ptr [edx + 0x2c]
// 00598efb  d95b2c               fstp dword ptr [ebx + 0x2c]
// 00598efe  5f                   pop edi
// 00598eff  5e                   pop esi
// 00598f00  5b                   pop ebx
// 00598f01  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ??4Part@RBX@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
