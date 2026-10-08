// roc 2007-08 0052fd60  unit: RBX::ICameraSubject  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052fd60
//
// 0052fd60  8b542404             mov edx, dword ptr [esp + 4]
// 0052fd64  8bc1                 mov eax, ecx
// 0052fd66  56                   push esi
// 0052fd67  57                   push edi
// 0052fd68  b909000000           mov ecx, 9
// 0052fd6d  8bf2                 mov esi, edx
// 0052fd6f  8bf8                 mov edi, eax
// 0052fd71  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0052fd73  d94224               fld dword ptr [edx + 0x24]
// 0052fd76  d95824               fstp dword ptr [eax + 0x24]
// 0052fd79  d94228               fld dword ptr [edx + 0x28]
// 0052fd7c  d95828               fstp dword ptr [eax + 0x28]
// 0052fd7f  d9422c               fld dword ptr [edx + 0x2c]
// 0052fd82  d9582c               fstp dword ptr [eax + 0x2c]
// 0052fd85  d94230               fld dword ptr [edx + 0x30]
// 0052fd88  d95830               fstp dword ptr [eax + 0x30]
// 0052fd8b  d94234               fld dword ptr [edx + 0x34]
// 0052fd8e  d95834               fstp dword ptr [eax + 0x34]
// 0052fd91  d94238               fld dword ptr [edx + 0x38]
// 0052fd94  d95838               fstp dword ptr [eax + 0x38]
// 0052fd97  5f                   pop edi
// 0052fd98  d9423c               fld dword ptr [edx + 0x3c]
// 0052fd9b  5e                   pop esi
// 0052fd9c  d9583c               fstp dword ptr [eax + 0x3c]
// 0052fd9f  d94240               fld dword ptr [edx + 0x40]
// 0052fda2  d95840               fstp dword ptr [eax + 0x40]
// 0052fda5  d94244               fld dword ptr [edx + 0x44]
// 0052fda8  d95844               fstp dword ptr [eax + 0x44]
// 0052fdab  c20400               ret 4
// library rbxgs/v8kernel\Body.cpp (function ??4PV@RBX@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Body.cpp
