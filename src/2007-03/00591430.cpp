// roc 2007-03 00591430  unit: seg_00590000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00591430
//
// 00591430  8b01                 mov eax, dword ptr [ecx]
// 00591432  8b08                 mov ecx, dword ptr [eax]
// 00591434  8b5104               mov edx, dword ptr [ecx + 4]
// 00591437  8b440228             mov eax, dword ptr [edx + eax + 0x28]
// 0059143b  85c0                 test eax, eax
// 0059143d  7409                 je 0x591448
// 0059143f  8d4804               lea ecx, [eax + 4]
// 00591442  ff2508e67700         jmp dword ptr [0x77e608]
// 00591448  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??1_Sentry_base@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
