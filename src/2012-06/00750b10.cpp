// roc 2012-06 00750b10  unit: RBX::PartInstance  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00750b10
//
// 00750b10  8bc1                 mov eax, ecx
// 00750b12  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00750b16  8b11                 mov edx, dword ptr [ecx]
// 00750b18  8910                 mov dword ptr [eax], edx
// 00750b1a  d94104               fld dword ptr [ecx + 4]
// 00750b1d  d95804               fstp dword ptr [eax + 4]
// 00750b20  53                   push ebx
// 00750b21  d94108               fld dword ptr [ecx + 8]
// 00750b24  56                   push esi
// 00750b25  d95808               fstp dword ptr [eax + 8]
// 00750b28  8d5838               lea ebx, [eax + 0x38]
// 00750b2b  d9410c               fld dword ptr [ecx + 0xc]
// 00750b2e  57                   push edi
// 00750b2f  d9580c               fstp dword ptr [eax + 0xc]
// 00750b32  8bfb                 mov edi, ebx
// 00750b34  d94110               fld dword ptr [ecx + 0x10]
// 00750b37  d95810               fstp dword ptr [eax + 0x10]
// 00750b3a  d94114               fld dword ptr [ecx + 0x14]
// 00750b3d  d95814               fstp dword ptr [eax + 0x14]
// 00750b40  d94118               fld dword ptr [ecx + 0x18]
// 00750b43  d95818               fstp dword ptr [eax + 0x18]
// 00750b46  d9411c               fld dword ptr [ecx + 0x1c]
// 00750b49  d9581c               fstp dword ptr [eax + 0x1c]
// 00750b4c  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00750b4f  895020               mov dword ptr [eax + 0x20], edx
// 00750b52  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00750b55  895024               mov dword ptr [eax + 0x24], edx
// 00750b58  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00750b5b  895028               mov dword ptr [eax + 0x28], edx
// 00750b5e  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 00750b61  89502c               mov dword ptr [eax + 0x2c], edx
// 00750b64  8b5130               mov edx, dword ptr [ecx + 0x30]
// 00750b67  895030               mov dword ptr [eax + 0x30], edx
// 00750b6a  8b5134               mov edx, dword ptr [ecx + 0x34]
// 00750b6d  895034               mov dword ptr [eax + 0x34], edx
// 00750b70  8d5138               lea edx, [ecx + 0x38]
// 00750b73  b909000000           mov ecx, 9
// 00750b78  8bf2                 mov esi, edx
// 00750b7a  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00750b7c  d94224               fld dword ptr [edx + 0x24]
// 00750b7f  d95b24               fstp dword ptr [ebx + 0x24]
// 00750b82  d94228               fld dword ptr [edx + 0x28]
// 00750b85  d95b28               fstp dword ptr [ebx + 0x28]
// 00750b88  d9422c               fld dword ptr [edx + 0x2c]
// 00750b8b  d95b2c               fstp dword ptr [ebx + 0x2c]
// 00750b8e  5f                   pop edi
// 00750b8f  5e                   pop esi
// 00750b90  5b                   pop ebx
// 00750b91  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ??4Part@RBX@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
