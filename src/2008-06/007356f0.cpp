// roc 2008-06 007356f0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007356f0
//
// 007356f0  8b442404             mov eax, dword ptr [esp + 4]
// 007356f4  50                   push eax
// 007356f5  e8e6ffffff           call 0x7356e0
// 007356fa  8bc8                 mov ecx, eax
// 007356fc  e88f8e0500           call 0x78e590
// 00735701  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveCanCollideChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
