// roc 2007-03 005a7bc0  unit: seg_005a0000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a7bc0
//
// 005a7bc0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a7bc4  83ec30               sub esp, 0x30
// 005a7bc7  56                   push esi
// 005a7bc8  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 005a7bcc  57                   push edi
// 005a7bcd  50                   push eax
// 005a7bce  8d4e24               lea ecx, [esi + 0x24]
// 005a7bd1  51                   push ecx
// 005a7bd2  8d542410             lea edx, [esp + 0x10]
// 005a7bd6  52                   push edx
// 005a7bd7  e8b4feffff           call 0x5a7a90
// 005a7bdc  8bf8                 mov edi, eax
// 005a7bde  8d442420             lea eax, [esp + 0x20]
// 005a7be2  56                   push esi
// 005a7be3  50                   push eax
// 005a7be4  e817f2ffff           call 0x5a6e00
// 005a7be9  8b742450             mov esi, dword ptr [esp + 0x50]
// 005a7bed  83c414               add esp, 0x14
// 005a7bf0  50                   push eax
// 005a7bf1  8bce                 mov ecx, esi
// 005a7bf3  e8886df5ff           call 0x4fe980
// 005a7bf8  d907                 fld dword ptr [edi]
// 005a7bfa  d95e24               fstp dword ptr [esi + 0x24]
// 005a7bfd  8bc6                 mov eax, esi
// 005a7bff  d94704               fld dword ptr [edi + 4]
// 005a7c02  d95e28               fstp dword ptr [esi + 0x28]
// 005a7c05  d94708               fld dword ptr [edi + 8]
// 005a7c08  5f                   pop edi
// 005a7c09  d95e2c               fstp dword ptr [esi + 0x2c]
// 005a7c0c  5e                   pop esi
// 005a7c0d  83c430               add esp, 0x30
// 005a7c10  c3                   ret 
// library rbxgs/util\Math.cpp (function ?snapToGrid@Math@RBX@@SA?AVCoordinateFrame@G3D@@ABV34@ABVVector3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
