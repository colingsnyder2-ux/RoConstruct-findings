// roc 2008-06 005def40  unit: RBX::Message  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005def40
//
// 005def40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005def44  83ec30               sub esp, 0x30
// 005def47  56                   push esi
// 005def48  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 005def4c  57                   push edi
// 005def4d  50                   push eax
// 005def4e  8d4e24               lea ecx, [esi + 0x24]
// 005def51  51                   push ecx
// 005def52  8d542410             lea edx, [esp + 0x10]
// 005def56  52                   push edx
// 005def57  e8b4feffff           call 0x5dee10
// 005def5c  8bf8                 mov edi, eax
// 005def5e  8d442420             lea eax, [esp + 0x20]
// 005def62  56                   push esi
// 005def63  50                   push eax
// 005def64  e8e7eeffff           call 0x5dde50
// 005def69  8b742450             mov esi, dword ptr [esp + 0x50]
// 005def6d  83c414               add esp, 0x14
// 005def70  50                   push eax
// 005def71  8bce                 mov ecx, esi
// 005def73  e8a842f3ff           call 0x513220
// 005def78  d907                 fld dword ptr [edi]
// 005def7a  d95e24               fstp dword ptr [esi + 0x24]
// 005def7d  8bc6                 mov eax, esi
// 005def7f  d94704               fld dword ptr [edi + 4]
// 005def82  d95e28               fstp dword ptr [esi + 0x28]
// 005def85  d94708               fld dword ptr [edi + 8]
// 005def88  5f                   pop edi
// 005def89  d95e2c               fstp dword ptr [esi + 0x2c]
// 005def8c  5e                   pop esi
// 005def8d  83c430               add esp, 0x30
// 005def90  c3                   ret 
// library rbxgs/util\Math.cpp (function ?snapToGrid@Math@RBX@@SA?AVCoordinateFrame@G3D@@ABV34@ABVVector3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
