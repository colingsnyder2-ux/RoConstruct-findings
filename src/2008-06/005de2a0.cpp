// roc 2008-06 005de2a0  unit: RBX::Message  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005de2a0
//
// 005de2a0  d944240c             fld dword ptr [esp + 0xc]
// 005de2a4  56                   push esi
// 005de2a5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005de2a9  57                   push edi
// 005de2aa  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005de2ae  51                   push ecx
// 005de2af  8d4624               lea eax, [esi + 0x24]
// 005de2b2  d91c24               fstp dword ptr [esp]
// 005de2b5  50                   push eax
// 005de2b6  8d4f24               lea ecx, [edi + 0x24]
// 005de2b9  51                   push ecx
// 005de2ba  e811ffffff           call 0x5de1d0
// 005de2bf  83c40c               add esp, 0xc
// 005de2c2  84c0                 test al, al
// 005de2c4  7503                 jne 0x5de2c9
// 005de2c6  5f                   pop edi
// 005de2c7  5e                   pop esi
// 005de2c8  c3                   ret 
// 005de2c9  d9442418             fld dword ptr [esp + 0x18]
// 005de2cd  51                   push ecx
// 005de2ce  d91c24               fstp dword ptr [esp]
// 005de2d1  56                   push esi
// 005de2d2  57                   push edi
// 005de2d3  e858ffffff           call 0x5de230
// 005de2d8  83c40c               add esp, 0xc
// 005de2db  84c0                 test al, al
// 005de2dd  5f                   pop edi
// 005de2de  0f95c0               setne al
// 005de2e1  5e                   pop esi
// 005de2e2  c3                   ret 
// library rbxgs/util\Math.cpp (function ?fuzzyEq@Math@RBX@@SA_NABVCoordinateFrame@G3D@@0MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
