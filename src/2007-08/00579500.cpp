// roc 2007-08 00579500  unit: RBX::VPartInstance::?$EnumPropDescriptor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579500
//
// 00579500  51                   push ecx
// 00579501  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00579504  8b01                 mov eax, dword ptr [ecx]
// 00579506  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057950a  8b4004               mov eax, dword ptr [eax + 4]
// 0057950d  56                   push esi
// 0057950e  52                   push edx
// 0057950f  c744240800000000     mov dword ptr [esp + 8], 0
// 00579517  ffd0                 call eax
// 00579519  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057951d  8d4c2410             lea ecx, [esp + 0x10]
// 00579521  51                   push ecx
// 00579522  56                   push esi
// 00579523  89442418             mov dword ptr [esp + 0x18], eax
// 00579527  e814f7ffff           call 0x578c40
// 0057952c  8bc8                 mov ecx, eax
// 0057952e  e87d1b0200           call 0x59b0b0
// 00579533  8bc6                 mov eax, esi
// 00579535  5e                   pop esi
// 00579536  59                   pop ecx
// 00579537  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
