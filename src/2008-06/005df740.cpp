// roc 2008-06 005df740  unit: RBX::Lighting  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df740
//
// 005df740  56                   push esi
// 005df741  8b742408             mov esi, dword ptr [esp + 8]
// 005df745  85f6                 test esi, esi
// 005df747  7516                 jne 0x5df75f
// 005df749  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005df74d  8b5104               mov edx, dword ptr [ecx + 4]
// 005df750  33c0                 xor eax, eax
// 005df752  52                   push edx
// 005df753  50                   push eax
// 005df754  8b01                 mov eax, dword ptr [ecx]
// 005df756  ffd0                 call eax
// 005df758  83c408               add esp, 8
// 005df75b  8bc6                 mov eax, esi
// 005df75d  5e                   pop esi
// 005df75e  c3                   ret 
// 005df75f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005df763  8b06                 mov eax, dword ptr [esi]
// 005df765  8b4004               mov eax, dword ptr [eax + 4]
// 005df768  8b5104               mov edx, dword ptr [ecx + 4]
// 005df76b  03c6                 add eax, esi
// 005df76d  52                   push edx
// 005df76e  50                   push eax
// 005df76f  8b01                 mov eax, dword ptr [ecx]
// 005df771  ffd0                 call eax
// 005df773  83c408               add esp, 8
// 005df776  8bc6                 mov eax, esi
// 005df778  5e                   pop esi
// 005df779  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?6DU?$char_traits@D@std@@H@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@ABU?$_Smanip@H@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
