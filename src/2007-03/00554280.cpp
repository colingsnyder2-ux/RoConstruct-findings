// roc 2007-03 00554280  unit: seg_00550000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554280
//
// 00554280  56                   push esi
// 00554281  8bf1                 mov esi, ecx
// 00554283  57                   push edi
// 00554284  8d7e14               lea edi, [esi + 0x14]
// 00554287  e874910100           call 0x56d400
// 0055428c  8907                 mov dword ptr [edi], eax
// 0055428e  8d4630               lea eax, [esi + 0x30]
// 00554291  50                   push eax
// 00554292  e869910100           call 0x56d400
// 00554297  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055429b  50                   push eax
// 0055429c  6aff                 push -1
// 0055429e  51                   push ecx
// 0055429f  e83c96fdff           call 0x52d8e0
// 005542a4  83c408               add esp, 8
// 005542a7  50                   push eax
// 005542a8  8bcf                 mov ecx, edi
// 005542aa  e8e18b0100           call 0x56ce90
// 005542af  83c638               add esi, 0x38
// 005542b2  56                   push esi
// 005542b3  e8888f0100           call 0x56d240
// 005542b8  8b542414             mov edx, dword ptr [esp + 0x14]
// 005542bc  50                   push eax
// 005542bd  6aff                 push -1
// 005542bf  52                   push edx
// 005542c0  e81b96fdff           call 0x52d8e0
// 005542c5  83c408               add esp, 8
// 005542c8  50                   push eax
// 005542c9  8bcf                 mov ecx, edi
// 005542cb  e8c08b0100           call 0x56ce90
// 005542d0  5f                   pop edi
// 005542d1  5e                   pop esi
// 005542d2  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
