// roc 2007-08 005bc0e0  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bc0e0
//
// 005bc0e0  51                   push ecx
// 005bc0e1  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005bc0e4  8b01                 mov eax, dword ptr [ecx]
// 005bc0e6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005bc0ea  8b4004               mov eax, dword ptr [eax + 4]
// 005bc0ed  56                   push esi
// 005bc0ee  52                   push edx
// 005bc0ef  c744240800000000     mov dword ptr [esp + 8], 0
// 005bc0f7  ffd0                 call eax
// 005bc0f9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bc0fd  8d4c2410             lea ecx, [esp + 0x10]
// 005bc101  51                   push ecx
// 005bc102  56                   push esi
// 005bc103  89442418             mov dword ptr [esp + 0x18], eax
// 005bc107  e844fbffff           call 0x5bbc50
// 005bc10c  8bc8                 mov ecx, eax
// 005bc10e  e89deffdff           call 0x59b0b0
// 005bc113  8bc6                 mov eax, esi
// 005bc115  5e                   pop esi
// 005bc116  59                   pop ecx
// 005bc117  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
