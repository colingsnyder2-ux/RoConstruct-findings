// roc 2007-08 005dcb90  unit: RBX::VFeature::?$EnumPropDescriptor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dcb90
//
// 005dcb90  51                   push ecx
// 005dcb91  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005dcb94  8b01                 mov eax, dword ptr [ecx]
// 005dcb96  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005dcb9a  8b4004               mov eax, dword ptr [eax + 4]
// 005dcb9d  56                   push esi
// 005dcb9e  52                   push edx
// 005dcb9f  c744240800000000     mov dword ptr [esp + 8], 0
// 005dcba7  ffd0                 call eax
// 005dcba9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005dcbad  8d4c2410             lea ecx, [esp + 0x10]
// 005dcbb1  51                   push ecx
// 005dcbb2  56                   push esi
// 005dcbb3  89442418             mov dword ptr [esp + 0x18], eax
// 005dcbb7  e814f5ffff           call 0x5dc0d0
// 005dcbbc  8bc8                 mov ecx, eax
// 005dcbbe  e8ede4fbff           call 0x59b0b0
// 005dcbc3  8bc6                 mov eax, esi
// 005dcbc5  5e                   pop esi
// 005dcbc6  59                   pop ecx
// 005dcbc7  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
