// roc 2009-06 0065ba90  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065ba90
//
// 0065ba90  8b442404             mov eax, dword ptr [esp + 4]
// 0065ba94  53                   push ebx
// 0065ba95  56                   push esi
// 0065ba96  8bf1                 mov esi, ecx
// 0065ba98  8906                 mov dword ptr [esi], eax
// 0065ba9a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0065ba9e  d900                 fld dword ptr [eax]
// 0065baa0  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0065baa4  d95e04               fstp dword ptr [esi + 4]
// 0065baa7  57                   push edi
// 0065baa8  d94004               fld dword ptr [eax + 4]
// 0065baab  8d7e38               lea edi, [esi + 0x38]
// 0065baae  d95e08               fstp dword ptr [esi + 8]
// 0065bab1  53                   push ebx
// 0065bab2  d94008               fld dword ptr [eax + 8]
// 0065bab5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0065bab9  d95e0c               fstp dword ptr [esi + 0xc]
// 0065babc  d944241c             fld dword ptr [esp + 0x1c]
// 0065bac0  d95e10               fstp dword ptr [esi + 0x10]
// 0065bac3  d9442420             fld dword ptr [esp + 0x20]
// 0065bac7  d95e14               fstp dword ptr [esi + 0x14]
// 0065baca  d9442424             fld dword ptr [esp + 0x24]
// 0065bace  d95e18               fstp dword ptr [esi + 0x18]
// 0065bad1  d9442428             fld dword ptr [esp + 0x28]
// 0065bad5  d95e1c               fstp dword ptr [esi + 0x1c]
// 0065bad8  8b08                 mov ecx, dword ptr [eax]
// 0065bada  894e20               mov dword ptr [esi + 0x20], ecx
// 0065badd  8b5004               mov edx, dword ptr [eax + 4]
// 0065bae0  895624               mov dword ptr [esi + 0x24], edx
// 0065bae3  8b4808               mov ecx, dword ptr [eax + 8]
// 0065bae6  894e28               mov dword ptr [esi + 0x28], ecx
// 0065bae9  8b500c               mov edx, dword ptr [eax + 0xc]
// 0065baec  89562c               mov dword ptr [esi + 0x2c], edx
// 0065baef  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0065baf2  894e30               mov dword ptr [esi + 0x30], ecx
// 0065baf5  8b5014               mov edx, dword ptr [eax + 0x14]
// 0065baf8  8bcf                 mov ecx, edi
// 0065bafa  895634               mov dword ptr [esi + 0x34], edx
// 0065bafd  e87ee4e3ff           call 0x499f80
// 0065bb02  d94324               fld dword ptr [ebx + 0x24]
// 0065bb05  d95f24               fstp dword ptr [edi + 0x24]
// 0065bb08  8bc6                 mov eax, esi
// 0065bb0a  d94328               fld dword ptr [ebx + 0x28]
// 0065bb0d  d95f28               fstp dword ptr [edi + 0x28]
// 0065bb10  d9432c               fld dword ptr [ebx + 0x2c]
// 0065bb13  d95f2c               fstp dword ptr [edi + 0x2c]
// 0065bb16  5f                   pop edi
// 0065bb17  5e                   pop esi
// 0065bb18  5b                   pop ebx
// 0065bb19  c22000               ret 0x20
// library rbxgs/v8datamodel\PartInstance.cpp (function ??0Part@RBX@@QAE@W4PartType@01@ABVVector3@G3D@@VColor4@4@ABV?$Vector6@W4SurfaceType@RBX@@@@ABVCoordinateFrame@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
