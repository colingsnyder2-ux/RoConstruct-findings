// roc 2007-08 006ba7b0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ba7b0
//
// 006ba7b0  8b442404             mov eax, dword ptr [esp + 4]
// 006ba7b4  50                   push eax
// 006ba7b5  e8e6ffffff           call 0x6ba7a0
// 006ba7ba  8bc8                 mov ecx, eax
// 006ba7bc  e87f660500           call 0x710e40
// 006ba7c1  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveCanCollideChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
