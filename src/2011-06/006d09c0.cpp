// roc 2011-06 006d09c0  unit: RBX::Lighting  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d09c0
//
// 006d09c0  56                   push esi
// 006d09c1  8b742408             mov esi, dword ptr [esp + 8]
// 006d09c5  85f6                 test esi, esi
// 006d09c7  7516                 jne 0x6d09df
// 006d09c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d09cd  8b5104               mov edx, dword ptr [ecx + 4]
// 006d09d0  33c0                 xor eax, eax
// 006d09d2  52                   push edx
// 006d09d3  50                   push eax
// 006d09d4  8b01                 mov eax, dword ptr [ecx]
// 006d09d6  ffd0                 call eax
// 006d09d8  83c408               add esp, 8
// 006d09db  8bc6                 mov eax, esi
// 006d09dd  5e                   pop esi
// 006d09de  c3                   ret 
// 006d09df  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d09e3  8b06                 mov eax, dword ptr [esi]
// 006d09e5  8b4004               mov eax, dword ptr [eax + 4]
// 006d09e8  8b5104               mov edx, dword ptr [ecx + 4]
// 006d09eb  03c6                 add eax, esi
// 006d09ed  52                   push edx
// 006d09ee  50                   push eax
// 006d09ef  8b01                 mov eax, dword ptr [ecx]
// 006d09f1  ffd0                 call eax
// 006d09f3  83c408               add esp, 8
// 006d09f6  8bc6                 mov eax, esi
// 006d09f8  5e                   pop esi
// 006d09f9  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?6DU?$char_traits@D@std@@H@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@ABU?$_Smanip@H@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
