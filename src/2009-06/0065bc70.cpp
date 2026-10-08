// roc 2009-06 0065bc70  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065bc70
//
// 0065bc70  8bc1                 mov eax, ecx
// 0065bc72  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0065bc76  8b11                 mov edx, dword ptr [ecx]
// 0065bc78  8910                 mov dword ptr [eax], edx
// 0065bc7a  d94104               fld dword ptr [ecx + 4]
// 0065bc7d  d95804               fstp dword ptr [eax + 4]
// 0065bc80  53                   push ebx
// 0065bc81  d94108               fld dword ptr [ecx + 8]
// 0065bc84  56                   push esi
// 0065bc85  d95808               fstp dword ptr [eax + 8]
// 0065bc88  8d5838               lea ebx, [eax + 0x38]
// 0065bc8b  d9410c               fld dword ptr [ecx + 0xc]
// 0065bc8e  57                   push edi
// 0065bc8f  d9580c               fstp dword ptr [eax + 0xc]
// 0065bc92  8bfb                 mov edi, ebx
// 0065bc94  d94110               fld dword ptr [ecx + 0x10]
// 0065bc97  d95810               fstp dword ptr [eax + 0x10]
// 0065bc9a  d94114               fld dword ptr [ecx + 0x14]
// 0065bc9d  d95814               fstp dword ptr [eax + 0x14]
// 0065bca0  d94118               fld dword ptr [ecx + 0x18]
// 0065bca3  d95818               fstp dword ptr [eax + 0x18]
// 0065bca6  d9411c               fld dword ptr [ecx + 0x1c]
// 0065bca9  d9581c               fstp dword ptr [eax + 0x1c]
// 0065bcac  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0065bcaf  895020               mov dword ptr [eax + 0x20], edx
// 0065bcb2  8b5124               mov edx, dword ptr [ecx + 0x24]
// 0065bcb5  895024               mov dword ptr [eax + 0x24], edx
// 0065bcb8  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0065bcbb  895028               mov dword ptr [eax + 0x28], edx
// 0065bcbe  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 0065bcc1  89502c               mov dword ptr [eax + 0x2c], edx
// 0065bcc4  8b5130               mov edx, dword ptr [ecx + 0x30]
// 0065bcc7  895030               mov dword ptr [eax + 0x30], edx
// 0065bcca  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0065bccd  895034               mov dword ptr [eax + 0x34], edx
// 0065bcd0  8d5138               lea edx, [ecx + 0x38]
// 0065bcd3  b909000000           mov ecx, 9
// 0065bcd8  8bf2                 mov esi, edx
// 0065bcda  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0065bcdc  d94224               fld dword ptr [edx + 0x24]
// 0065bcdf  d95b24               fstp dword ptr [ebx + 0x24]
// 0065bce2  d94228               fld dword ptr [edx + 0x28]
// 0065bce5  d95b28               fstp dword ptr [ebx + 0x28]
// 0065bce8  d9422c               fld dword ptr [edx + 0x2c]
// 0065bceb  d95b2c               fstp dword ptr [ebx + 0x2c]
// 0065bcee  5f                   pop edi
// 0065bcef  5e                   pop esi
// 0065bcf0  5b                   pop ebx
// 0065bcf1  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ??4Part@RBX@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
