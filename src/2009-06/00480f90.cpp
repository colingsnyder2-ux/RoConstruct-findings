// from server: 100% by tester
// roc 2007-08 005acd10  unit: RBX::Lighting  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005acd10
//
// 005acd10  56                   push esi
// 005acd11  8b742408             mov esi, dword ptr [esp + 8]
// 005acd15  85f6                 test esi, esi
// 005acd17  7516                 jne 0x5acd2f
// 005acd19  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005acd1d  8b5104               mov edx, dword ptr [ecx + 4]
// 005acd20  33c0                 xor eax, eax
// 005acd22  52                   push edx
// 005acd23  50                   push eax
// 005acd24  8b01                 mov eax, dword ptr [ecx]
// 005acd26  ffd0                 call eax
// 005acd28  83c408               add esp, 8
// 005acd2b  8bc6                 mov eax, esi
// 005acd2d  5e                   pop esi
// 005acd2e  c3                   ret 
// 005acd2f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005acd33  8b06                 mov eax, dword ptr [esi]
// 005acd35  8b4004               mov eax, dword ptr [eax + 4]
// 005acd38  8b5104               mov edx, dword ptr [ecx + 4]
// 005acd3b  03c6                 add eax, esi
// 005acd3d  52                   push edx
// 005acd3e  50                   push eax
// 005acd3f  8b01                 mov eax, dword ptr [ecx]
// 005acd41  ffd0                 call eax
// 005acd43  83c408               add esp, 8
// 005acd46  8bc6                 mov eax, esi
// 005acd48  5e                   pop esi
// 005acd49  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?6DU?$char_traits@D@std@@H@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@ABU?$_Smanip@H@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
