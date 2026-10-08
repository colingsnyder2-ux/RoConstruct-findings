// roc 2007-03 005afcc0  unit: seg_005a0000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005afcc0
//
// 005afcc0  8b442408             mov eax, dword ptr [esp + 8]
// 005afcc4  83ec30               sub esp, 0x30
// 005afcc7  56                   push esi
// 005afcc8  8b742438             mov esi, dword ptr [esp + 0x38]
// 005afccc  50                   push eax
// 005afccd  56                   push esi
// 005afcce  8d54240c             lea edx, [esp + 0xc]
// 005afcd2  52                   push edx
// 005afcd3  e8f854ecff           call 0x4751d0
// 005afcd8  8bc8                 mov ecx, eax
// 005afcda  e81136ecff           call 0x4732f0
// 005afcdf  8bc6                 mov eax, esi
// 005afce1  5e                   pop esi
// 005afce2  83c430               add esp, 0x30
// 005afce5  c20800               ret 8
// library rbxgs/script\LuaAtomicClasses.cpp (function ?toObjectSpace@CoordinateFrame@G3D@@QBE?AV12@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
