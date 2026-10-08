// roc 2007-08 005abfe0  unit: RBX::World  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005abfe0
//
// 005abfe0  83ec0c               sub esp, 0xc
// 005abfe3  d9442418             fld dword ptr [esp + 0x18]
// 005abfe7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005abfeb  56                   push esi
// 005abfec  d9542404             fst dword ptr [esp + 4]
// 005abff0  8b742414             mov esi, dword ptr [esp + 0x14]
// 005abff4  d9542408             fst dword ptr [esp + 8]
// 005abff8  8d442404             lea eax, [esp + 4]
// 005abffc  d95c240c             fstp dword ptr [esp + 0xc]
// 005ac000  50                   push eax
// 005ac001  51                   push ecx
// 005ac002  56                   push esi
// 005ac003  e858ffffff           call 0x5abf60
// 005ac008  83c40c               add esp, 0xc
// 005ac00b  8bc6                 mov eax, esi
// 005ac00d  5e                   pop esi
// 005ac00e  83c40c               add esp, 0xc
// 005ac011  c3                   ret 
// library rbxgs/util\Math.cpp (function ?toGrid@Math@RBX@@SA?AVVector3@G3D@@ABV34@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
