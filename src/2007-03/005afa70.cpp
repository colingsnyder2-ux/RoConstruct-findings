// roc 2007-03 005afa70  unit: seg_005a0000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005afa70
//
// 005afa70  8b542404             mov edx, dword ptr [esp + 4]
// 005afa74  8bc1                 mov eax, ecx
// 005afa76  56                   push esi
// 005afa77  57                   push edi
// 005afa78  b909000000           mov ecx, 9
// 005afa7d  8bf2                 mov esi, edx
// 005afa7f  8bf8                 mov edi, eax
// 005afa81  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005afa83  d94224               fld dword ptr [edx + 0x24]
// 005afa86  d95824               fstp dword ptr [eax + 0x24]
// 005afa89  d94228               fld dword ptr [edx + 0x28]
// 005afa8c  d95828               fstp dword ptr [eax + 0x28]
// 005afa8f  d9422c               fld dword ptr [edx + 0x2c]
// 005afa92  d9582c               fstp dword ptr [eax + 0x2c]
// 005afa95  d94230               fld dword ptr [edx + 0x30]
// 005afa98  d95830               fstp dword ptr [eax + 0x30]
// 005afa9b  d94234               fld dword ptr [edx + 0x34]
// 005afa9e  d95834               fstp dword ptr [eax + 0x34]
// 005afaa1  d94238               fld dword ptr [edx + 0x38]
// 005afaa4  d95838               fstp dword ptr [eax + 0x38]
// 005afaa7  5f                   pop edi
// 005afaa8  d9423c               fld dword ptr [edx + 0x3c]
// 005afaab  5e                   pop esi
// 005afaac  d9583c               fstp dword ptr [eax + 0x3c]
// 005afaaf  d94240               fld dword ptr [edx + 0x40]
// 005afab2  d95840               fstp dword ptr [eax + 0x40]
// 005afab5  d94244               fld dword ptr [edx + 0x44]
// 005afab8  d95844               fstp dword ptr [eax + 0x44]
// 005afabb  c20400               ret 4
// library rbxgs/v8kernel\Body.cpp (function ??4PV@RBX@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Body.cpp
