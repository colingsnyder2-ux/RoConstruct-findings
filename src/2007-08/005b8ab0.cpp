// roc 2007-08 005b8ab0  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8ab0
//
// 005b8ab0  51                   push ecx
// 005b8ab1  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005b8ab4  8b01                 mov eax, dword ptr [ecx]
// 005b8ab6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b8aba  8b4004               mov eax, dword ptr [eax + 4]
// 005b8abd  56                   push esi
// 005b8abe  52                   push edx
// 005b8abf  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8ac7  ffd0                 call eax
// 005b8ac9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b8acd  8d4c2410             lea ecx, [esp + 0x10]
// 005b8ad1  51                   push ecx
// 005b8ad2  56                   push esi
// 005b8ad3  89442418             mov dword ptr [esp + 0x18], eax
// 005b8ad7  e804f4ffff           call 0x5b7ee0
// 005b8adc  8bc8                 mov ecx, eax
// 005b8ade  e8cd25feff           call 0x59b0b0
// 005b8ae3  8bc6                 mov eax, esi
// 005b8ae5  5e                   pop esi
// 005b8ae6  59                   pop ecx
// 005b8ae7  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
