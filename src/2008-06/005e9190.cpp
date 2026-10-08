// roc 2008-06 005e9190  unit: RBX::PhysicsService  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9190
//
// 005e9190  56                   push esi
// 005e9191  57                   push edi
// 005e9192  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e9196  8bcf                 mov ecx, edi
// 005e9198  e833eaffff           call 0x5e7bd0
// 005e919d  8bf0                 mov esi, eax
// 005e919f  85f6                 test esi, esi
// 005e91a1  7415                 je 0x5e91b8
// 005e91a3  8bce                 mov ecx, esi
// 005e91a5  e826e90100           call 0x607ad0
// 005e91aa  56                   push esi
// 005e91ab  8bcf                 mov ecx, edi
// 005e91ad  e82eeaffff           call 0x5e7be0
// 005e91b2  8bf0                 mov esi, eax
// 005e91b4  85f6                 test esi, esi
// 005e91b6  75eb                 jne 0x5e91a3
// 005e91b8  5f                   pop edi
// 005e91b9  5e                   pop esi
// 005e91ba  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveContactParametersChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
