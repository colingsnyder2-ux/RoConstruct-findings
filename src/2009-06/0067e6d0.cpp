// roc 2009-06 0067e6d0  unit: RBX::Mechanism  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067e6d0
//
// 0067e6d0  56                   push esi
// 0067e6d1  57                   push edi
// 0067e6d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0067e6d6  8bcf                 mov ecx, edi
// 0067e6d8  e8a31affff           call 0x670180
// 0067e6dd  8bf0                 mov esi, eax
// 0067e6df  85f6                 test esi, esi
// 0067e6e1  7415                 je 0x67e6f8
// 0067e6e3  8bce                 mov ecx, esi
// 0067e6e5  e876130300           call 0x6afa60
// 0067e6ea  56                   push esi
// 0067e6eb  8bcf                 mov ecx, edi
// 0067e6ed  e8ae1affff           call 0x6701a0
// 0067e6f2  8bf0                 mov esi, eax
// 0067e6f4  85f6                 test esi, esi
// 0067e6f6  75eb                 jne 0x67e6e3
// 0067e6f8  5f                   pop edi
// 0067e6f9  5e                   pop esi
// 0067e6fa  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveContactParametersChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
