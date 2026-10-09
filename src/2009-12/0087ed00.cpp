// roc 2009-12 0087ed00  unit: XTPPaintThemes::CXTPDefaultTheme  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087ed00
//
// 0087ed00  8b442404             mov eax, dword ptr [esp + 4]
// 0087ed04  50                   push eax
// 0087ed05  e8e6ffffff           call 0x87ecf0
// 0087ed0a  8bc8                 mov ecx, eax
// 0087ed0c  e80f2a0600           call 0x8e1720
// 0087ed11  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveCanCollideChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
