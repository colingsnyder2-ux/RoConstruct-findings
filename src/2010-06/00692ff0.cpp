// roc 2010-06 00692ff0  unit: RBX::Lighting  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00692ff0
//
// 00692ff0  56                   push esi
// 00692ff1  8b742408             mov esi, dword ptr [esp + 8]
// 00692ff5  85f6                 test esi, esi
// 00692ff7  7516                 jne 0x69300f
// 00692ff9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00692ffd  8b5104               mov edx, dword ptr [ecx + 4]
// 00693000  33c0                 xor eax, eax
// 00693002  52                   push edx
// 00693003  50                   push eax
// 00693004  8b01                 mov eax, dword ptr [ecx]
// 00693006  ffd0                 call eax
// 00693008  83c408               add esp, 8
// 0069300b  8bc6                 mov eax, esi
// 0069300d  5e                   pop esi
// 0069300e  c3                   ret 
// 0069300f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00693013  8b06                 mov eax, dword ptr [esi]
// 00693015  8b4004               mov eax, dword ptr [eax + 4]
// 00693018  8b5104               mov edx, dword ptr [ecx + 4]
// 0069301b  03c6                 add eax, esi
// 0069301d  52                   push edx
// 0069301e  50                   push eax
// 0069301f  8b01                 mov eax, dword ptr [ecx]
// 00693021  ffd0                 call eax
// 00693023  83c408               add esp, 8
// 00693026  8bc6                 mov eax, esi
// 00693028  5e                   pop esi
// 00693029  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?6DU?$char_traits@D@std@@H@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@ABU?$_Smanip@H@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
