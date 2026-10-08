// roc 2007-08 005b8b60  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8b60
//
// 005b8b60  51                   push ecx
// 005b8b61  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005b8b64  8b01                 mov eax, dword ptr [ecx]
// 005b8b66  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b8b6a  8b4004               mov eax, dword ptr [eax + 4]
// 005b8b6d  56                   push esi
// 005b8b6e  52                   push edx
// 005b8b6f  c744240800000000     mov dword ptr [esp + 8], 0
// 005b8b77  ffd0                 call eax
// 005b8b79  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b8b7d  8d4c2410             lea ecx, [esp + 0x10]
// 005b8b81  51                   push ecx
// 005b8b82  56                   push esi
// 005b8b83  89442418             mov dword ptr [esp + 0x18], eax
// 005b8b87  e8f4f2ffff           call 0x5b7e80
// 005b8b8c  8bc8                 mov ecx, eax
// 005b8b8e  e81d25feff           call 0x59b0b0
// 005b8b93  8bc6                 mov eax, esi
// 005b8b95  5e                   pop esi
// 005b8b96  59                   pop ecx
// 005b8b97  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
