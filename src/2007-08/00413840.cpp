// roc 2007-08 00413840  unit: DHTMLWindowService  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00413840
//
// 00413840  56                   push esi
// 00413841  8bf1                 mov esi, ecx
// 00413843  57                   push edi
// 00413844  8d7e14               lea edi, [esi + 0x14]
// 00413847  e8049b1500           call 0x56d350
// 0041384c  8907                 mov dword ptr [edi], eax
// 0041384e  8d4630               lea eax, [esi + 0x30]
// 00413851  50                   push eax
// 00413852  e8799f1500           call 0x56d7d0
// 00413857  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041385b  50                   push eax
// 0041385c  6aff                 push -1
// 0041385e  51                   push ecx
// 0041385f  e8dc901100           call 0x52c940
// 00413864  83c408               add esp, 8
// 00413867  50                   push eax
// 00413868  8bcf                 mov ecx, edi
// 0041386a  e8919b1500           call 0x56d400
// 0041386f  83c638               add esi, 0x38
// 00413872  56                   push esi
// 00413873  e8589f1500           call 0x56d7d0
// 00413878  8b542414             mov edx, dword ptr [esp + 0x14]
// 0041387c  50                   push eax
// 0041387d  6aff                 push -1
// 0041387f  52                   push edx
// 00413880  e8bb901100           call 0x52c940
// 00413885  83c408               add esp, 8
// 00413888  50                   push eax
// 00413889  8bcf                 mov ecx, edi
// 0041388b  e8709b1500           call 0x56d400
// 00413890  5f                   pop edi
// 00413891  5e                   pop esi
// 00413892  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
