// roc 2007-03 00590520  unit: seg_00590000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00590520
//
// 00590520  51                   push ecx
// 00590521  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00590524  8b01                 mov eax, dword ptr [ecx]
// 00590526  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059052a  8b4004               mov eax, dword ptr [eax + 4]
// 0059052d  56                   push esi
// 0059052e  52                   push edx
// 0059052f  c744240800000000     mov dword ptr [esp + 8], 0
// 00590537  ffd0                 call eax
// 00590539  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059053d  8d4c2410             lea ecx, [esp + 0x10]
// 00590541  51                   push ecx
// 00590542  56                   push esi
// 00590543  89442418             mov dword ptr [esp + 0x18], eax
// 00590547  e8f4faffff           call 0x590040
// 0059054c  8bc8                 mov ecx, eax
// 0059054e  e85d36fbff           call 0x543bb0
// 00590553  8bc6                 mov eax, esi
// 00590555  5e                   pop esi
// 00590556  59                   pop ecx
// 00590557  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
