// roc 2007-03 00578160  unit: seg_00570000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00578160
//
// 00578160  51                   push ecx
// 00578161  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 00578164  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00578168  8b01                 mov eax, dword ptr [ecx]
// 0057816a  8b4004               mov eax, dword ptr [eax + 4]
// 0057816d  56                   push esi
// 0057816e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00578172  52                   push edx
// 00578173  56                   push esi
// 00578174  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0057817c  ffd0                 call eax
// 0057817e  8bc6                 mov eax, esi
// 00578180  5e                   pop esi
// 00578181  59                   pop ecx
// 00578182  c20800               ret 8
// library rbxgs/script\Script.cpp (function ?getValue@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
