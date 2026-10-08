// roc 2007-08 0057a290  unit: RBX::VSpecialShape::?$EnumPropDescriptor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057a290
//
// 0057a290  51                   push ecx
// 0057a291  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0057a294  8b01                 mov eax, dword ptr [ecx]
// 0057a296  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057a29a  8b4004               mov eax, dword ptr [eax + 4]
// 0057a29d  56                   push esi
// 0057a29e  52                   push edx
// 0057a29f  c744240800000000     mov dword ptr [esp + 8], 0
// 0057a2a7  ffd0                 call eax
// 0057a2a9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057a2ad  8d4c2410             lea ecx, [esp + 0x10]
// 0057a2b1  51                   push ecx
// 0057a2b2  56                   push esi
// 0057a2b3  89442418             mov dword ptr [esp + 0x18], eax
// 0057a2b7  e8c4fbffff           call 0x579e80
// 0057a2bc  8bc8                 mov ecx, eax
// 0057a2be  e8ed0d0200           call 0x59b0b0
// 0057a2c3  8bc6                 mov eax, esi
// 0057a2c5  5e                   pop esi
// 0057a2c6  59                   pop ecx
// 0057a2c7  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
