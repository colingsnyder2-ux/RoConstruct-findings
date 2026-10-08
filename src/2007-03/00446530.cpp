// roc 2007-03 00446530  unit: seg_00440000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00446530
//
// 00446530  51                   push ecx
// 00446531  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00446534  8b01                 mov eax, dword ptr [ecx]
// 00446536  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0044653a  8b4004               mov eax, dword ptr [eax + 4]
// 0044653d  56                   push esi
// 0044653e  52                   push edx
// 0044653f  c744240800000000     mov dword ptr [esp + 8], 0
// 00446547  ffd0                 call eax
// 00446549  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0044654d  8d4c2410             lea ecx, [esp + 0x10]
// 00446551  51                   push ecx
// 00446552  56                   push esi
// 00446553  89442418             mov dword ptr [esp + 0x18], eax
// 00446557  e874f7ffff           call 0x445cd0
// 0044655c  8bc8                 mov ecx, eax
// 0044655e  e84dd60f00           call 0x543bb0
// 00446563  8bc6                 mov eax, esi
// 00446565  5e                   pop esi
// 00446566  59                   pop ecx
// 00446567  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
