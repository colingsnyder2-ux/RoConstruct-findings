// roc 2007-03 00455910  unit: seg_00450000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00455910
//
// 00455910  8b542408             mov edx, dword ptr [esp + 8]
// 00455914  d901                 fld dword ptr [ecx]
// 00455916  d822                 fsub dword ptr [edx]
// 00455918  8b442404             mov eax, dword ptr [esp + 4]
// 0045591c  d918                 fstp dword ptr [eax]
// 0045591e  d94104               fld dword ptr [ecx + 4]
// 00455921  d86204               fsub dword ptr [edx + 4]
// 00455924  d95804               fstp dword ptr [eax + 4]
// 00455927  d94108               fld dword ptr [ecx + 8]
// 0045592a  d86208               fsub dword ptr [edx + 8]
// 0045592d  d95808               fstp dword ptr [eax + 8]
// 00455930  c20800               ret 8
// library rbxgs/script\LuaAtomicClasses.cpp (function ??GVector3@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
