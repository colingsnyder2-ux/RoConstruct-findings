// roc 2007-03 004fe980  unit: seg_004f0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fe980
//
// 004fe980  56                   push esi
// 004fe981  8b742408             mov esi, dword ptr [esp + 8]
// 004fe985  57                   push edi
// 004fe986  8bc1                 mov eax, ecx
// 004fe988  b909000000           mov ecx, 9
// 004fe98d  8bf8                 mov edi, eax
// 004fe98f  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004fe991  5f                   pop edi
// 004fe992  5e                   pop esi
// 004fe993  c20400               ret 4
// library rbxgs/script\LuaAtomicClasses.cpp (function ??4Matrix3@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
