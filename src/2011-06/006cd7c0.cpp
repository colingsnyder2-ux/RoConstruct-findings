// roc 2011-06 006cd7c0  unit: RBX::Mechanism  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006cd7c0
//
// 006cd7c0  d944240c             fld dword ptr [esp + 0xc]
// 006cd7c4  56                   push esi
// 006cd7c5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006cd7c9  57                   push edi
// 006cd7ca  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006cd7ce  51                   push ecx
// 006cd7cf  8d4624               lea eax, [esi + 0x24]
// 006cd7d2  d91c24               fstp dword ptr [esp]
// 006cd7d5  50                   push eax
// 006cd7d6  8d4f24               lea ecx, [edi + 0x24]
// 006cd7d9  51                   push ecx
// 006cd7da  e8e1feffff           call 0x6cd6c0
// 006cd7df  83c40c               add esp, 0xc
// 006cd7e2  84c0                 test al, al
// 006cd7e4  7503                 jne 0x6cd7e9
// 006cd7e6  5f                   pop edi
// 006cd7e7  5e                   pop esi
// 006cd7e8  c3                   ret 
// 006cd7e9  d9442418             fld dword ptr [esp + 0x18]
// 006cd7ed  51                   push ecx
// 006cd7ee  d91c24               fstp dword ptr [esp]
// 006cd7f1  56                   push esi
// 006cd7f2  57                   push edi
// 006cd7f3  e838ffffff           call 0x6cd730
// 006cd7f8  83c40c               add esp, 0xc
// 006cd7fb  84c0                 test al, al
// 006cd7fd  5f                   pop edi
// 006cd7fe  0f95c0               setne al
// 006cd801  5e                   pop esi
// 006cd802  c3                   ret 
// library rbxgs/util\Math.cpp (function ?fuzzyEq@Math@RBX@@SA_NABVCoordinateFrame@G3D@@0MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
