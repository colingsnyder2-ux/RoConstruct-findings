// roc 2007-03 00576210  unit: seg_00570000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00576210
//
// 00576210  51                   push ecx
// 00576211  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00576214  8b01                 mov eax, dword ptr [ecx]
// 00576216  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057621a  8b4004               mov eax, dword ptr [eax + 4]
// 0057621d  56                   push esi
// 0057621e  52                   push edx
// 0057621f  c744240800000000     mov dword ptr [esp + 8], 0
// 00576227  ffd0                 call eax
// 00576229  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057622d  8d4c2410             lea ecx, [esp + 0x10]
// 00576231  51                   push ecx
// 00576232  56                   push esi
// 00576233  89442418             mov dword ptr [esp + 0x18], eax
// 00576237  e864f6ffff           call 0x5758a0
// 0057623c  8bc8                 mov ecx, eax
// 0057623e  e86dd9fcff           call 0x543bb0
// 00576243  8bc6                 mov eax, esi
// 00576245  5e                   pop esi
// 00576246  59                   pop ecx
// 00576247  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
