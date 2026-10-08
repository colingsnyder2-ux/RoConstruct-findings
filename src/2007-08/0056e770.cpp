// roc 2007-08 0056e770  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056e770
//
// 0056e770  51                   push ecx
// 0056e771  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056e774  8b01                 mov eax, dword ptr [ecx]
// 0056e776  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0056e77a  8b4004               mov eax, dword ptr [eax + 4]
// 0056e77d  56                   push esi
// 0056e77e  52                   push edx
// 0056e77f  c744240800000000     mov dword ptr [esp + 8], 0
// 0056e787  ffd0                 call eax
// 0056e789  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056e78d  8d4c2410             lea ecx, [esp + 0x10]
// 0056e791  51                   push ecx
// 0056e792  56                   push esi
// 0056e793  88442418             mov byte ptr [esp + 0x18], al
// 0056e797  e8541c0100           call 0x5803f0
// 0056e79c  83c408               add esp, 8
// 0056e79f  8bc6                 mov eax, esi
// 0056e7a1  5e                   pop esi
// 0056e7a2  59                   pop ecx
// 0056e7a3  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?getStringValue@?$TypedPropertyDescriptor@_N@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
