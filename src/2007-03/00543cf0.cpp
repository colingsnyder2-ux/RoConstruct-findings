// roc 2007-03 00543cf0  unit: seg_00540000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00543cf0
//
// 00543cf0  51                   push ecx
// 00543cf1  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00543cf4  8b01                 mov eax, dword ptr [ecx]
// 00543cf6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00543cfa  8b4004               mov eax, dword ptr [eax + 4]
// 00543cfd  56                   push esi
// 00543cfe  52                   push edx
// 00543cff  c744240800000000     mov dword ptr [esp + 8], 0
// 00543d07  ffd0                 call eax
// 00543d09  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00543d0d  8d4c2410             lea ecx, [esp + 0x10]
// 00543d11  51                   push ecx
// 00543d12  56                   push esi
// 00543d13  89442418             mov dword ptr [esp + 0x18], eax
// 00543d17  e8d4f9ffff           call 0x5436f0
// 00543d1c  8bc8                 mov ecx, eax
// 00543d1e  e88dfeffff           call 0x543bb0
// 00543d23  8bc6                 mov eax, esi
// 00543d25  5e                   pop esi
// 00543d26  59                   pop ecx
// 00543d27  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
