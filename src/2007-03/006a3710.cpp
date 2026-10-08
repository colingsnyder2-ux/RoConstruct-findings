// roc 2007-03 006a3710  unit: seg_006a0000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006a3710
//
// 006a3710  8b442404             mov eax, dword ptr [esp + 4]
// 006a3714  50                   push eax
// 006a3715  e816c4ffff           call 0x69fb30
// 006a371a  8bc8                 mov ecx, eax
// 006a371c  e89ff4ffff           call 0x6a2bc0
// 006a3721  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveCanCollideChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
