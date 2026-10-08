// roc 2007-03 005acc10  unit: seg_005a0000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005acc10
//
// 005acc10  56                   push esi
// 005acc11  57                   push edi
// 005acc12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005acc16  8bcf                 mov ecx, edi
// 005acc18  e8233b1500           call 0x700740
// 005acc1d  8bf0                 mov esi, eax
// 005acc1f  85f6                 test esi, esi
// 005acc21  7415                 je 0x5acc38
// 005acc23  8bce                 mov ecx, esi
// 005acc25  e8f6170400           call 0x5ee420
// 005acc2a  56                   push esi
// 005acc2b  8bcf                 mov ecx, edi
// 005acc2d  e83e240000           call 0x5af070
// 005acc32  8bf0                 mov esi, eax
// 005acc34  85f6                 test esi, esi
// 005acc36  75eb                 jne 0x5acc23
// 005acc38  5f                   pop edi
// 005acc39  5e                   pop esi
// 005acc3a  c20400               ret 4
// library rbxgs/v8world\World.cpp (function ?onPrimitiveContactParametersChanged@World@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
