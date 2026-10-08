// roc 2007-03 006a3730  unit: seg_006a0000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006a3730
//
// 006a3730  8b442404             mov eax, dword ptr [esp + 4]
// 006a3734  50                   push eax
// 006a3735  e8f6c3ffff           call 0x69fb30
// 006a373a  8bc8                 mov ecx, eax
// 006a373c  e88ff3ffff           call 0x6a2ad0
// 006a3741  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveCanCollideChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
