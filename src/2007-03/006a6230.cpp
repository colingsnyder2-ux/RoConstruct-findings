// roc 2007-03 006a6230  unit: seg_006a0000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006a6230
//
// 006a6230  8b442404             mov eax, dword ptr [esp + 4]
// 006a6234  50                   push eax
// 006a6235  e8e6ffffff           call 0x6a6220
// 006a623a  8bc8                 mov ecx, eax
// 006a623c  e8afda0400           call 0x6f3cf0
// 006a6241  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveCanCollideChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
