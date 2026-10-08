// roc 2007-03 004abde0  unit: seg_004a0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004abde0
//
// 004abde0  56                   push esi
// 004abde1  8b742408             mov esi, dword ptr [esp + 8]
// 004abde5  56                   push esi
// 004abde6  e875200000           call 0x4ade60
// 004abdeb  8bc6                 mov eax, esi
// 004abded  5e                   pop esi
// 004abdee  c20400               ret 4
// library rbxgs/script\LuaAtomicClasses.cpp (function ?unit@Vector3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
