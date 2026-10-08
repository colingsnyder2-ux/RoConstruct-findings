// roc 2007-03 005b3d00  unit: seg_005b0000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3d00
//
// 005b3d00  51                   push ecx
// 005b3d01  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005b3d04  8b01                 mov eax, dword ptr [ecx]
// 005b3d06  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b3d0a  8b4004               mov eax, dword ptr [eax + 4]
// 005b3d0d  56                   push esi
// 005b3d0e  52                   push edx
// 005b3d0f  c744240800000000     mov dword ptr [esp + 8], 0
// 005b3d17  ffd0                 call eax
// 005b3d19  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b3d1d  8d4c2410             lea ecx, [esp + 0x10]
// 005b3d21  51                   push ecx
// 005b3d22  56                   push esi
// 005b3d23  89442418             mov dword ptr [esp + 0x18], eax
// 005b3d27  e8d4fdffff           call 0x5b3b00
// 005b3d2c  8bc8                 mov ecx, eax
// 005b3d2e  e87dfef8ff           call 0x543bb0
// 005b3d33  8bc6                 mov eax, esi
// 005b3d35  5e                   pop esi
// 005b3d36  59                   pop ecx
// 005b3d37  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
