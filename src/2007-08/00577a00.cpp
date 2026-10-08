// roc 2007-08 00577a00  unit: RBX::VPartInstance::?$EnumPropDescriptor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00577a00
//
// 00577a00  51                   push ecx
// 00577a01  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00577a04  8b01                 mov eax, dword ptr [ecx]
// 00577a06  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00577a0a  8b4004               mov eax, dword ptr [eax + 4]
// 00577a0d  56                   push esi
// 00577a0e  52                   push edx
// 00577a0f  c744240800000000     mov dword ptr [esp + 8], 0
// 00577a17  ffd0                 call eax
// 00577a19  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00577a1d  8d4c2410             lea ecx, [esp + 0x10]
// 00577a21  51                   push ecx
// 00577a22  56                   push esi
// 00577a23  89442418             mov dword ptr [esp + 0x18], eax
// 00577a27  e874f6ffff           call 0x5770a0
// 00577a2c  8bc8                 mov ecx, eax
// 00577a2e  e87d360200           call 0x59b0b0
// 00577a33  8bc6                 mov eax, esi
// 00577a35  5e                   pop esi
// 00577a36  59                   pop ecx
// 00577a37  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
