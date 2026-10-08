// roc 2007-03 005f6a50  unit: seg_005f0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f6a50
//
// 005f6a50  8b442404             mov eax, dword ptr [esp + 4]
// 005f6a54  8d0440               lea eax, [eax + eax*2]
// 005f6a57  8d0481               lea eax, [ecx + eax*4]
// 005f6a5a  c20400               ret 4
// library rbxgs/script\LuaAtomicClasses.cpp (function ??AMatrix3@G3D@@QAEPAMH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
