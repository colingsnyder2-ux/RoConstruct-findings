// roc 2009-12 00719e20  unit: RBX::VPhysicsService::?$EventDesc  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00719e20
//
// 00719e20  56                   push esi
// 00719e21  57                   push edi
// 00719e22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00719e26  8bcf                 mov ecx, edi
// 00719e28  e8732dfdff           call 0x6ecba0
// 00719e2d  8bf0                 mov esi, eax
// 00719e2f  85f6                 test esi, esi
// 00719e31  7415                 je 0x719e48
// 00719e33  8bce                 mov ecx, esi
// 00719e35  e816650600           call 0x780350
// 00719e3a  56                   push esi
// 00719e3b  8bcf                 mov ecx, edi
// 00719e3d  e87e2dfdff           call 0x6ecbc0
// 00719e42  8bf0                 mov esi, eax
// 00719e44  85f6                 test esi, esi
// 00719e46  75eb                 jne 0x719e33
// 00719e48  5f                   pop edi
// 00719e49  5e                   pop esi
// 00719e4a  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveContactParametersChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
