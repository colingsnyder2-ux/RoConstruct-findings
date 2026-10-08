// roc 2011-06 006db4c0  unit: RBX::VPhysicsService::?$EventDesc  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006db4c0
//
// 006db4c0  56                   push esi
// 006db4c1  57                   push edi
// 006db4c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006db4c6  8bcf                 mov ecx, edi
// 006db4c8  e8f382fcff           call 0x6a37c0
// 006db4cd  8bf0                 mov esi, eax
// 006db4cf  85f6                 test esi, esi
// 006db4d1  7415                 je 0x6db4e8
// 006db4d3  8bce                 mov ecx, esi
// 006db4d5  e8b6f30700           call 0x75a890
// 006db4da  56                   push esi
// 006db4db  8bcf                 mov ecx, edi
// 006db4dd  e8fe82fcff           call 0x6a37e0
// 006db4e2  8bf0                 mov esi, eax
// 006db4e4  85f6                 test esi, esi
// 006db4e6  75eb                 jne 0x6db4d3
// 006db4e8  5f                   pop edi
// 006db4e9  5e                   pop esi
// 006db4ea  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveContactParametersChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
