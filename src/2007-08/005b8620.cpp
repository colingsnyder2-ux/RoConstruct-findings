// roc 2007-08 005b8620  unit: VCRenderSettings::?$EnumPropDescriptor  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b8620
//
// 005b8620  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005b8623  8b01                 mov eax, dword ptr [ecx]
// 005b8625  8b4004               mov eax, dword ptr [eax + 4]
// 005b8628  ffe0                 jmp eax
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@QBE?AW4NormalId@3@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
