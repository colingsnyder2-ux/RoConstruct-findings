// roc 2007-08 0059b410  unit: RBX::VCamera::?$EnumPropDescriptor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059b410
//
// 0059b410  51                   push ecx
// 0059b411  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0059b414  8b01                 mov eax, dword ptr [ecx]
// 0059b416  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059b41a  8b4004               mov eax, dword ptr [eax + 4]
// 0059b41d  56                   push esi
// 0059b41e  52                   push edx
// 0059b41f  c744240800000000     mov dword ptr [esp + 8], 0
// 0059b427  ffd0                 call eax
// 0059b429  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059b42d  8d4c2410             lea ecx, [esp + 0x10]
// 0059b431  51                   push ecx
// 0059b432  56                   push esi
// 0059b433  89442418             mov dword ptr [esp + 0x18], eax
// 0059b437  e804fbffff           call 0x59af40
// 0059b43c  8bc8                 mov ecx, eax
// 0059b43e  e86dfcffff           call 0x59b0b0
// 0059b443  8bc6                 mov eax, esi
// 0059b445  5e                   pop esi
// 0059b446  59                   pop ecx
// 0059b447  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
