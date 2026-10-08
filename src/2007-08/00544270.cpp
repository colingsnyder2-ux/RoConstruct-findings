// roc 2007-08 00544270  unit: RBX::VDebugSettings::?$EnumPropDescriptor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544270
//
// 00544270  51                   push ecx
// 00544271  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00544274  8b01                 mov eax, dword ptr [ecx]
// 00544276  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0054427a  8b4004               mov eax, dword ptr [eax + 4]
// 0054427d  56                   push esi
// 0054427e  52                   push edx
// 0054427f  c744240800000000     mov dword ptr [esp + 8], 0
// 00544287  ffd0                 call eax
// 00544289  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0054428d  8d4c2410             lea ecx, [esp + 0x10]
// 00544291  51                   push ecx
// 00544292  56                   push esi
// 00544293  89442418             mov dword ptr [esp + 0x18], eax
// 00544297  e884f9ffff           call 0x543c20
// 0054429c  8bc8                 mov ecx, eax
// 0054429e  e80d6e0500           call 0x59b0b0
// 005442a3  8bc6                 mov eax, esi
// 005442a5  5e                   pop esi
// 005442a6  59                   pop ecx
// 005442a7  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
