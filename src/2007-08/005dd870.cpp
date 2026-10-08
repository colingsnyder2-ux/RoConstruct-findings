// roc 2007-08 005dd870  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dd870
//
// 005dd870  51                   push ecx
// 005dd871  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005dd874  8b01                 mov eax, dword ptr [ecx]
// 005dd876  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005dd87a  8b4004               mov eax, dword ptr [eax + 4]
// 005dd87d  56                   push esi
// 005dd87e  52                   push edx
// 005dd87f  c744240800000000     mov dword ptr [esp + 8], 0
// 005dd887  ffd0                 call eax
// 005dd889  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005dd88d  8d4c2410             lea ecx, [esp + 0x10]
// 005dd891  51                   push ecx
// 005dd892  56                   push esi
// 005dd893  89442418             mov dword ptr [esp + 0x18], eax
// 005dd897  e864b6fdff           call 0x5b8f00
// 005dd89c  8bc8                 mov ecx, eax
// 005dd89e  e80dd8fbff           call 0x59b0b0
// 005dd8a3  8bc6                 mov eax, esi
// 005dd8a5  5e                   pop esi
// 005dd8a6  59                   pop ecx
// 005dd8a7  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
