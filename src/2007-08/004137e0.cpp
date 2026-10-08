// roc 2007-08 004137e0  unit: DHTMLWindowService  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004137e0
//
// 004137e0  56                   push esi
// 004137e1  8bf1                 mov esi, ecx
// 004137e3  57                   push edi
// 004137e4  8d7e14               lea edi, [esi + 0x14]
// 004137e7  e8049f1500           call 0x56d6f0
// 004137ec  8907                 mov dword ptr [edi], eax
// 004137ee  8d4630               lea eax, [esi + 0x30]
// 004137f1  50                   push eax
// 004137f2  e8d99f1500           call 0x56d7d0
// 004137f7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004137fb  50                   push eax
// 004137fc  6aff                 push -1
// 004137fe  51                   push ecx
// 004137ff  e83c911100           call 0x52c940
// 00413804  83c408               add esp, 8
// 00413807  50                   push eax
// 00413808  8bcf                 mov ecx, edi
// 0041380a  e8f19b1500           call 0x56d400
// 0041380f  83c638               add esi, 0x38
// 00413812  56                   push esi
// 00413813  e8b89f1500           call 0x56d7d0
// 00413818  8b542414             mov edx, dword ptr [esp + 0x14]
// 0041381c  50                   push eax
// 0041381d  6aff                 push -1
// 0041381f  52                   push edx
// 00413820  e81b911100           call 0x52c940
// 00413825  83c408               add esp, 8
// 00413828  50                   push eax
// 00413829  8bcf                 mov ecx, edi
// 0041382b  e8d09b1500           call 0x56d400
// 00413830  5f                   pop edi
// 00413831  5e                   pop esi
// 00413832  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
