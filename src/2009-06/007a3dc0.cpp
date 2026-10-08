// roc 2009-06 007a3dc0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a3dc0
//
// 007a3dc0  8b442404             mov eax, dword ptr [esp + 4]
// 007a3dc4  50                   push eax
// 007a3dc5  e8e6ffffff           call 0x7a3db0
// 007a3dca  8bc8                 mov ecx, eax
// 007a3dcc  e84f2e0600           call 0x806c20
// 007a3dd1  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveCanCollideChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
