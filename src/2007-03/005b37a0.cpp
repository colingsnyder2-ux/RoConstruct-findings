// roc 2007-03 005b37a0  unit: seg_005b0000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b37a0
//
// 005b37a0  51                   push ecx
// 005b37a1  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005b37a4  8b01                 mov eax, dword ptr [ecx]
// 005b37a6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b37aa  8b4004               mov eax, dword ptr [eax + 4]
// 005b37ad  56                   push esi
// 005b37ae  52                   push edx
// 005b37af  c744240800000000     mov dword ptr [esp + 8], 0
// 005b37b7  ffd0                 call eax
// 005b37b9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b37bd  8d4c2410             lea ecx, [esp + 0x10]
// 005b37c1  51                   push ecx
// 005b37c2  56                   push esi
// 005b37c3  89442418             mov dword ptr [esp + 0x18], eax
// 005b37c7  e804f4ffff           call 0x5b2bd0
// 005b37cc  8bc8                 mov ecx, eax
// 005b37ce  e8dd03f9ff           call 0x543bb0
// 005b37d3  8bc6                 mov eax, esi
// 005b37d5  5e                   pop esi
// 005b37d6  59                   pop ecx
// 005b37d7  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
