// roc 2007-03 00577cd0  unit: seg_00570000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00577cd0
//
// 00577cd0  51                   push ecx
// 00577cd1  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00577cd4  8b01                 mov eax, dword ptr [ecx]
// 00577cd6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00577cda  8b4004               mov eax, dword ptr [eax + 4]
// 00577cdd  56                   push esi
// 00577cde  52                   push edx
// 00577cdf  c744240800000000     mov dword ptr [esp + 8], 0
// 00577ce7  ffd0                 call eax
// 00577ce9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00577ced  8d4c2410             lea ecx, [esp + 0x10]
// 00577cf1  51                   push ecx
// 00577cf2  56                   push esi
// 00577cf3  89442418             mov dword ptr [esp + 0x18], eax
// 00577cf7  e8c4f6ffff           call 0x5773c0
// 00577cfc  8bc8                 mov ecx, eax
// 00577cfe  e8adbefcff           call 0x543bb0
// 00577d03  8bc6                 mov eax, esi
// 00577d05  5e                   pop esi
// 00577d06  59                   pop ecx
// 00577d07  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
