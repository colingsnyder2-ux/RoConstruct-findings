// roc 2007-08 00544540  unit: RBX::VDebugSettings::?$EnumPropDescriptor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544540
//
// 00544540  51                   push ecx
// 00544541  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00544544  8b01                 mov eax, dword ptr [ecx]
// 00544546  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0054454a  8b4004               mov eax, dword ptr [eax + 4]
// 0054454d  56                   push esi
// 0054454e  52                   push edx
// 0054454f  c744240800000000     mov dword ptr [esp + 8], 0
// 00544557  ffd0                 call eax
// 00544559  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0054455d  8d4c2410             lea ecx, [esp + 0x10]
// 00544561  51                   push ecx
// 00544562  56                   push esi
// 00544563  89442418             mov dword ptr [esp + 0x18], eax
// 00544567  e854f6ffff           call 0x543bc0
// 0054456c  8bc8                 mov ecx, eax
// 0054456e  e83d6b0500           call 0x59b0b0
// 00544573  8bc6                 mov eax, esi
// 00544575  5e                   pop esi
// 00544576  59                   pop ecx
// 00544577  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
