// roc 2007-03 005b3440  unit: seg_005b0000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b3440
//
// 005b3440  51                   push ecx
// 005b3441  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005b3444  8b01                 mov eax, dword ptr [ecx]
// 005b3446  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b344a  8b4004               mov eax, dword ptr [eax + 4]
// 005b344d  56                   push esi
// 005b344e  52                   push edx
// 005b344f  c744240800000000     mov dword ptr [esp + 8], 0
// 005b3457  ffd0                 call eax
// 005b3459  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005b345d  8d4c2410             lea ecx, [esp + 0x10]
// 005b3461  51                   push ecx
// 005b3462  56                   push esi
// 005b3463  89442418             mov dword ptr [esp + 0x18], eax
// 005b3467  e804f7ffff           call 0x5b2b70
// 005b346c  8bc8                 mov ecx, eax
// 005b346e  e83d07f9ff           call 0x543bb0
// 005b3473  8bc6                 mov eax, esi
// 005b3475  5e                   pop esi
// 005b3476  59                   pop ecx
// 005b3477  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
