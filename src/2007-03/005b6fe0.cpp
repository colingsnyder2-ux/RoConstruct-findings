// roc 2007-03 005b6fe0  unit: seg_005b0000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b6fe0
//
// 005b6fe0  51                   push ecx
// 005b6fe1  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005b6fe4  8b01                 mov eax, dword ptr [ecx]
// 005b6fe6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b6fea  8b4004               mov eax, dword ptr [eax + 4]
// 005b6fed  56                   push esi
// 005b6fee  52                   push edx
// 005b6fef  c744240800000000     mov dword ptr [esp + 8], 0
// 005b6ff7  ffd0                 call eax
// 005b6ff9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b6ffd  8d4c2410             lea ecx, [esp + 0x10]
// 005b7001  51                   push ecx
// 005b7002  56                   push esi
// 005b7003  89442418             mov dword ptr [esp + 0x18], eax
// 005b7007  e8d4faffff           call 0x5b6ae0
// 005b700c  8bc8                 mov ecx, eax
// 005b700e  e89dcbf8ff           call 0x543bb0
// 005b7013  8bc6                 mov eax, esi
// 005b7015  5e                   pop esi
// 005b7016  59                   pop ecx
// 005b7017  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
