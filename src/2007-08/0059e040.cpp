// roc 2007-08 0059e040  unit: RBX::VHopperBin::?$EnumPropDescriptor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059e040
//
// 0059e040  51                   push ecx
// 0059e041  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0059e044  8b01                 mov eax, dword ptr [ecx]
// 0059e046  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059e04a  8b4004               mov eax, dword ptr [eax + 4]
// 0059e04d  56                   push esi
// 0059e04e  52                   push edx
// 0059e04f  c744240800000000     mov dword ptr [esp + 8], 0
// 0059e057  ffd0                 call eax
// 0059e059  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059e05d  8d4c2410             lea ecx, [esp + 0x10]
// 0059e061  51                   push ecx
// 0059e062  56                   push esi
// 0059e063  89442418             mov dword ptr [esp + 0x18], eax
// 0059e067  e874faffff           call 0x59dae0
// 0059e06c  8bc8                 mov ecx, eax
// 0059e06e  e83dd0ffff           call 0x59b0b0
// 0059e073  8bc6                 mov eax, esi
// 0059e075  5e                   pop esi
// 0059e076  59                   pop ecx
// 0059e077  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
