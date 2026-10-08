// roc 2012-06 0044cf00  unit: PasteVerb  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0044cf00
//
// 0044cf00  56                   push esi
// 0044cf01  8b742408             mov esi, dword ptr [esp + 8]
// 0044cf05  85f6                 test esi, esi
// 0044cf07  7516                 jne 0x44cf1f
// 0044cf09  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044cf0d  8b5104               mov edx, dword ptr [ecx + 4]
// 0044cf10  33c0                 xor eax, eax
// 0044cf12  52                   push edx
// 0044cf13  50                   push eax
// 0044cf14  8b01                 mov eax, dword ptr [ecx]
// 0044cf16  ffd0                 call eax
// 0044cf18  83c408               add esp, 8
// 0044cf1b  8bc6                 mov eax, esi
// 0044cf1d  5e                   pop esi
// 0044cf1e  c3                   ret 
// 0044cf1f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044cf23  8b06                 mov eax, dword ptr [esi]
// 0044cf25  8b4004               mov eax, dword ptr [eax + 4]
// 0044cf28  8b5104               mov edx, dword ptr [ecx + 4]
// 0044cf2b  03c6                 add eax, esi
// 0044cf2d  52                   push edx
// 0044cf2e  50                   push eax
// 0044cf2f  8b01                 mov eax, dword ptr [ecx]
// 0044cf31  ffd0                 call eax
// 0044cf33  83c408               add esp, 8
// 0044cf36  8bc6                 mov eax, esi
// 0044cf38  5e                   pop esi
// 0044cf39  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?6DU?$char_traits@D@std@@H@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@ABU?$_Smanip@H@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
