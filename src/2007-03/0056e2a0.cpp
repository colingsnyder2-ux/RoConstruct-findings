// roc 2007-03 0056e2a0  unit: seg_00560000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056e2a0
//
// 0056e2a0  83ec10               sub esp, 0x10
// 0056e2a3  8b542418             mov edx, dword ptr [esp + 0x18]
// 0056e2a7  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056e2aa  8b01                 mov eax, dword ptr [ecx]
// 0056e2ac  8b4004               mov eax, dword ptr [eax + 4]
// 0056e2af  56                   push esi
// 0056e2b0  52                   push edx
// 0056e2b1  8d54240c             lea edx, [esp + 0xc]
// 0056e2b5  52                   push edx
// 0056e2b6  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0056e2be  ffd0                 call eax
// 0056e2c0  8b742418             mov esi, dword ptr [esp + 0x18]
// 0056e2c4  8d4c2408             lea ecx, [esp + 8]
// 0056e2c8  51                   push ecx
// 0056e2c9  56                   push esi
// 0056e2ca  e8f1950100           call 0x5878c0
// 0056e2cf  83c408               add esp, 8
// 0056e2d2  8bc6                 mov eax, esi
// 0056e2d4  5e                   pop esi
// 0056e2d5  83c410               add esp, 0x10
// 0056e2d8  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
