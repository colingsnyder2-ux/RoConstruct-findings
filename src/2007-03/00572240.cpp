// roc 2007-03 00572240  unit: seg_00570000  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00572240
//
// 00572240  8bc1                 mov eax, ecx
// 00572242  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00572246  8b11                 mov edx, dword ptr [ecx]
// 00572248  8910                 mov dword ptr [eax], edx
// 0057224a  d94104               fld dword ptr [ecx + 4]
// 0057224d  d95804               fstp dword ptr [eax + 4]
// 00572250  53                   push ebx
// 00572251  d94108               fld dword ptr [ecx + 8]
// 00572254  56                   push esi
// 00572255  d95808               fstp dword ptr [eax + 8]
// 00572258  8d5838               lea ebx, [eax + 0x38]
// 0057225b  d9410c               fld dword ptr [ecx + 0xc]
// 0057225e  57                   push edi
// 0057225f  d9580c               fstp dword ptr [eax + 0xc]
// 00572262  8bfb                 mov edi, ebx
// 00572264  d94110               fld dword ptr [ecx + 0x10]
// 00572267  d95810               fstp dword ptr [eax + 0x10]
// 0057226a  d94114               fld dword ptr [ecx + 0x14]
// 0057226d  d95814               fstp dword ptr [eax + 0x14]
// 00572270  d94118               fld dword ptr [ecx + 0x18]
// 00572273  d95818               fstp dword ptr [eax + 0x18]
// 00572276  d9411c               fld dword ptr [ecx + 0x1c]
// 00572279  d9581c               fstp dword ptr [eax + 0x1c]
// 0057227c  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0057227f  895020               mov dword ptr [eax + 0x20], edx
// 00572282  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00572285  895024               mov dword ptr [eax + 0x24], edx
// 00572288  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0057228b  895028               mov dword ptr [eax + 0x28], edx
// 0057228e  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 00572291  89502c               mov dword ptr [eax + 0x2c], edx
// 00572294  8b5130               mov edx, dword ptr [ecx + 0x30]
// 00572297  895030               mov dword ptr [eax + 0x30], edx
// 0057229a  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0057229d  895034               mov dword ptr [eax + 0x34], edx
// 005722a0  8d5138               lea edx, [ecx + 0x38]
// 005722a3  b909000000           mov ecx, 9
// 005722a8  8bf2                 mov esi, edx
// 005722aa  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005722ac  d94224               fld dword ptr [edx + 0x24]
// 005722af  d95b24               fstp dword ptr [ebx + 0x24]
// 005722b2  d94228               fld dword ptr [edx + 0x28]
// 005722b5  d95b28               fstp dword ptr [ebx + 0x28]
// 005722b8  d9422c               fld dword ptr [edx + 0x2c]
// 005722bb  d95b2c               fstp dword ptr [ebx + 0x2c]
// 005722be  5f                   pop edi
// 005722bf  5e                   pop esi
// 005722c0  5b                   pop ebx
// 005722c1  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ??4Part@RBX@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
