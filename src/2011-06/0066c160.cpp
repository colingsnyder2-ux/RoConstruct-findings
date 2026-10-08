// roc 2011-06 0066c160  unit: DxUserInput  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066c160
//
// 0066c160  8bc1                 mov eax, ecx
// 0066c162  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066c166  8b11                 mov edx, dword ptr [ecx]
// 0066c168  8910                 mov dword ptr [eax], edx
// 0066c16a  d94104               fld dword ptr [ecx + 4]
// 0066c16d  d95804               fstp dword ptr [eax + 4]
// 0066c170  53                   push ebx
// 0066c171  d94108               fld dword ptr [ecx + 8]
// 0066c174  56                   push esi
// 0066c175  d95808               fstp dword ptr [eax + 8]
// 0066c178  8d5838               lea ebx, [eax + 0x38]
// 0066c17b  d9410c               fld dword ptr [ecx + 0xc]
// 0066c17e  57                   push edi
// 0066c17f  d9580c               fstp dword ptr [eax + 0xc]
// 0066c182  8bfb                 mov edi, ebx
// 0066c184  d94110               fld dword ptr [ecx + 0x10]
// 0066c187  d95810               fstp dword ptr [eax + 0x10]
// 0066c18a  d94114               fld dword ptr [ecx + 0x14]
// 0066c18d  d95814               fstp dword ptr [eax + 0x14]
// 0066c190  d94118               fld dword ptr [ecx + 0x18]
// 0066c193  d95818               fstp dword ptr [eax + 0x18]
// 0066c196  d9411c               fld dword ptr [ecx + 0x1c]
// 0066c199  d9581c               fstp dword ptr [eax + 0x1c]
// 0066c19c  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0066c19f  895020               mov dword ptr [eax + 0x20], edx
// 0066c1a2  8b5124               mov edx, dword ptr [ecx + 0x24]
// 0066c1a5  895024               mov dword ptr [eax + 0x24], edx
// 0066c1a8  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0066c1ab  895028               mov dword ptr [eax + 0x28], edx
// 0066c1ae  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 0066c1b1  89502c               mov dword ptr [eax + 0x2c], edx
// 0066c1b4  8b5130               mov edx, dword ptr [ecx + 0x30]
// 0066c1b7  895030               mov dword ptr [eax + 0x30], edx
// 0066c1ba  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0066c1bd  895034               mov dword ptr [eax + 0x34], edx
// 0066c1c0  8d5138               lea edx, [ecx + 0x38]
// 0066c1c3  b909000000           mov ecx, 9
// 0066c1c8  8bf2                 mov esi, edx
// 0066c1ca  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0066c1cc  d94224               fld dword ptr [edx + 0x24]
// 0066c1cf  d95b24               fstp dword ptr [ebx + 0x24]
// 0066c1d2  d94228               fld dword ptr [edx + 0x28]
// 0066c1d5  d95b28               fstp dword ptr [ebx + 0x28]
// 0066c1d8  d9422c               fld dword ptr [edx + 0x2c]
// 0066c1db  d95b2c               fstp dword ptr [ebx + 0x2c]
// 0066c1de  5f                   pop edi
// 0066c1df  5e                   pop esi
// 0066c1e0  5b                   pop ebx
// 0066c1e1  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ??4Part@RBX@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
