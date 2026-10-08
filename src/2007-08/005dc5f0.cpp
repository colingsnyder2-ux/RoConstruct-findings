// roc 2007-08 005dc5f0  unit: RBX::VFeature::?$EnumPropDescriptor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc5f0
//
// 005dc5f0  51                   push ecx
// 005dc5f1  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005dc5f4  8b01                 mov eax, dword ptr [ecx]
// 005dc5f6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005dc5fa  8b4004               mov eax, dword ptr [eax + 4]
// 005dc5fd  56                   push esi
// 005dc5fe  52                   push edx
// 005dc5ff  c744240800000000     mov dword ptr [esp + 8], 0
// 005dc607  ffd0                 call eax
// 005dc609  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005dc60d  8d4c2410             lea ecx, [esp + 0x10]
// 005dc611  51                   push ecx
// 005dc612  56                   push esi
// 005dc613  89442418             mov dword ptr [esp + 0x18], eax
// 005dc617  e8f4f9ffff           call 0x5dc010
// 005dc61c  8bc8                 mov ecx, eax
// 005dc61e  e88deafbff           call 0x59b0b0
// 005dc623  8bc6                 mov eax, esi
// 005dc625  5e                   pop esi
// 005dc626  59                   pop ecx
// 005dc627  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
