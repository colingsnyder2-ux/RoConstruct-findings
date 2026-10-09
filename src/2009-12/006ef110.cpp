// roc 2009-12 006ef110  unit: RBX::Primitive  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ef110
//
// 006ef110  d944240c             fld dword ptr [esp + 0xc]
// 006ef114  56                   push esi
// 006ef115  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ef119  57                   push edi
// 006ef11a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006ef11e  51                   push ecx
// 006ef11f  8d4624               lea eax, [esi + 0x24]
// 006ef122  d91c24               fstp dword ptr [esp]
// 006ef125  50                   push eax
// 006ef126  8d4f24               lea ecx, [edi + 0x24]
// 006ef129  51                   push ecx
// 006ef12a  e8e1feffff           call 0x6ef010
// 006ef12f  83c40c               add esp, 0xc
// 006ef132  84c0                 test al, al
// 006ef134  7503                 jne 0x6ef139
// 006ef136  5f                   pop edi
// 006ef137  5e                   pop esi
// 006ef138  c3                   ret 
// 006ef139  d9442418             fld dword ptr [esp + 0x18]
// 006ef13d  51                   push ecx
// 006ef13e  d91c24               fstp dword ptr [esp]
// 006ef141  56                   push esi
// 006ef142  57                   push edi
// 006ef143  e838ffffff           call 0x6ef080
// 006ef148  83c40c               add esp, 0xc
// 006ef14b  84c0                 test al, al
// 006ef14d  5f                   pop edi
// 006ef14e  0f95c0               setne al
// 006ef151  5e                   pop esi
// 006ef152  c3                   ret 
// library rbxgs/util\Math.cpp (function ?fuzzyEq@Math@RBX@@SA_NABVCoordinateFrame@G3D@@0MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
