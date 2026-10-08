// roc 2007-03 0059e590  unit: seg_00590000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059e590
//
// 0059e590  51                   push ecx
// 0059e591  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0059e594  8b01                 mov eax, dword ptr [ecx]
// 0059e596  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059e59a  8b4004               mov eax, dword ptr [eax + 4]
// 0059e59d  56                   push esi
// 0059e59e  52                   push edx
// 0059e59f  c744240800000000     mov dword ptr [esp + 8], 0
// 0059e5a7  ffd0                 call eax
// 0059e5a9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059e5ad  8d4c2410             lea ecx, [esp + 0x10]
// 0059e5b1  51                   push ecx
// 0059e5b2  56                   push esi
// 0059e5b3  89442418             mov dword ptr [esp + 0x18], eax
// 0059e5b7  e8f4f9ffff           call 0x59dfb0
// 0059e5bc  8bc8                 mov ecx, eax
// 0059e5be  e8ed55faff           call 0x543bb0
// 0059e5c3  8bc6                 mov eax, esi
// 0059e5c5  5e                   pop esi
// 0059e5c6  59                   pop ecx
// 0059e5c7  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
