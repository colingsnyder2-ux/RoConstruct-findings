// roc 2007-08 005dc8c0  unit: RBX::VFeature::?$EnumPropDescriptor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc8c0
//
// 005dc8c0  51                   push ecx
// 005dc8c1  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005dc8c4  8b01                 mov eax, dword ptr [ecx]
// 005dc8c6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005dc8ca  8b4004               mov eax, dword ptr [eax + 4]
// 005dc8cd  56                   push esi
// 005dc8ce  52                   push edx
// 005dc8cf  c744240800000000     mov dword ptr [esp + 8], 0
// 005dc8d7  ffd0                 call eax
// 005dc8d9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005dc8dd  8d4c2410             lea ecx, [esp + 0x10]
// 005dc8e1  51                   push ecx
// 005dc8e2  56                   push esi
// 005dc8e3  89442418             mov dword ptr [esp + 0x18], eax
// 005dc8e7  e884f7ffff           call 0x5dc070
// 005dc8ec  8bc8                 mov ecx, eax
// 005dc8ee  e8bde7fbff           call 0x59b0b0
// 005dc8f3  8bc6                 mov eax, esi
// 005dc8f5  5e                   pop esi
// 005dc8f6  59                   pop ecx
// 005dc8f7  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
