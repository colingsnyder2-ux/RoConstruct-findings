// roc 2007-08 00446fd0  unit: VCRenderSettings::?$EnumPropDescriptor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00446fd0
//
// 00446fd0  51                   push ecx
// 00446fd1  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00446fd4  8b01                 mov eax, dword ptr [ecx]
// 00446fd6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00446fda  8b4004               mov eax, dword ptr [eax + 4]
// 00446fdd  56                   push esi
// 00446fde  52                   push edx
// 00446fdf  c744240800000000     mov dword ptr [esp + 8], 0
// 00446fe7  ffd0                 call eax
// 00446fe9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00446fed  8d4c2410             lea ecx, [esp + 0x10]
// 00446ff1  51                   push ecx
// 00446ff2  56                   push esi
// 00446ff3  89442418             mov dword ptr [esp + 0x18], eax
// 00446ff7  e8b4f7ffff           call 0x4467b0
// 00446ffc  8bc8                 mov ecx, eax
// 00446ffe  e8ad401500           call 0x59b0b0
// 00447003  8bc6                 mov eax, esi
// 00447005  5e                   pop esi
// 00447006  59                   pop ecx
// 00447007  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
