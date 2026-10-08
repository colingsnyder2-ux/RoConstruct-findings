// roc 2010-06 00699ac0  unit: RBX::PolyContact  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00699ac0
//
// 00699ac0  56                   push esi
// 00699ac1  57                   push edi
// 00699ac2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00699ac6  8bcf                 mov ecx, edi
// 00699ac8  e873e7fdff           call 0x678240
// 00699acd  8bf0                 mov esi, eax
// 00699acf  85f6                 test esi, esi
// 00699ad1  7415                 je 0x699ae8
// 00699ad3  8bce                 mov ecx, esi
// 00699ad5  e8f6cb0700           call 0x7166d0
// 00699ada  56                   push esi
// 00699adb  8bcf                 mov ecx, edi
// 00699add  e87ee7fdff           call 0x678260
// 00699ae2  8bf0                 mov esi, eax
// 00699ae4  85f6                 test esi, esi
// 00699ae6  75eb                 jne 0x699ad3
// 00699ae8  5f                   pop edi
// 00699ae9  5e                   pop esi
// 00699aea  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveContactParametersChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
