// roc 2007-03 00578d10  unit: seg_00570000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00578d10
//
// 00578d10  51                   push ecx
// 00578d11  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00578d14  8b01                 mov eax, dword ptr [ecx]
// 00578d16  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00578d1a  8b4004               mov eax, dword ptr [eax + 4]
// 00578d1d  56                   push esi
// 00578d1e  52                   push edx
// 00578d1f  c744240800000000     mov dword ptr [esp + 8], 0
// 00578d27  ffd0                 call eax
// 00578d29  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00578d2d  8d4c2410             lea ecx, [esp + 0x10]
// 00578d31  51                   push ecx
// 00578d32  56                   push esi
// 00578d33  89442418             mov dword ptr [esp + 0x18], eax
// 00578d37  e854fbffff           call 0x578890
// 00578d3c  8bc8                 mov ecx, eax
// 00578d3e  e86daefcff           call 0x543bb0
// 00578d43  8bc6                 mov eax, esi
// 00578d45  5e                   pop esi
// 00578d46  59                   pop ecx
// 00578d47  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
