// roc 2007-03 005a7210  unit: seg_005a0000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a7210
//
// 005a7210  d944240c             fld dword ptr [esp + 0xc]
// 005a7214  56                   push esi
// 005a7215  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a7219  57                   push edi
// 005a721a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a721e  51                   push ecx
// 005a721f  8d4624               lea eax, [esi + 0x24]
// 005a7222  d91c24               fstp dword ptr [esp]
// 005a7225  50                   push eax
// 005a7226  8d4f24               lea ecx, [edi + 0x24]
// 005a7229  51                   push ecx
// 005a722a  e811ffffff           call 0x5a7140
// 005a722f  83c40c               add esp, 0xc
// 005a7232  84c0                 test al, al
// 005a7234  7503                 jne 0x5a7239
// 005a7236  5f                   pop edi
// 005a7237  5e                   pop esi
// 005a7238  c3                   ret 
// 005a7239  d9442418             fld dword ptr [esp + 0x18]
// 005a723d  51                   push ecx
// 005a723e  d91c24               fstp dword ptr [esp]
// 005a7241  56                   push esi
// 005a7242  57                   push edi
// 005a7243  e858ffffff           call 0x5a71a0
// 005a7248  83c40c               add esp, 0xc
// 005a724b  84c0                 test al, al
// 005a724d  5f                   pop edi
// 005a724e  0f95c0               setne al
// 005a7251  5e                   pop esi
// 005a7252  c3                   ret 
// library rbxgs/util\Math.cpp (function ?fuzzyEq@Math@RBX@@SA_NABVCoordinateFrame@G3D@@0MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
