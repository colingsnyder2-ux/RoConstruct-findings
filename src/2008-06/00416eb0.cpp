// roc 2008-06 00416eb0  unit: DHTMLWindowService  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416eb0
//
// 00416eb0  56                   push esi
// 00416eb1  8bf1                 mov esi, ecx
// 00416eb3  57                   push edi
// 00416eb4  8d7e14               lea edi, [esi + 0x14]
// 00416eb7  e894db1700           call 0x594a50
// 00416ebc  8907                 mov dword ptr [edi], eax
// 00416ebe  8d4640               lea eax, [esi + 0x40]
// 00416ec1  50                   push eax
// 00416ec2  e8f95c1500           call 0x56cbc0
// 00416ec7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00416ecb  50                   push eax
// 00416ecc  6aff                 push -1
// 00416ece  51                   push ecx
// 00416ecf  e8bcd01300           call 0x553f90
// 00416ed4  83c408               add esp, 8
// 00416ed7  50                   push eax
// 00416ed8  8bcf                 mov ecx, edi
// 00416eda  e861dc1700           call 0x594b40
// 00416edf  83c648               add esi, 0x48
// 00416ee2  56                   push esi
// 00416ee3  e8d85c1500           call 0x56cbc0
// 00416ee8  8b542414             mov edx, dword ptr [esp + 0x14]
// 00416eec  50                   push eax
// 00416eed  6aff                 push -1
// 00416eef  52                   push edx
// 00416ef0  e89bd01300           call 0x553f90
// 00416ef5  83c408               add esp, 8
// 00416ef8  50                   push eax
// 00416ef9  8bcf                 mov ecx, edi
// 00416efb  e840dc1700           call 0x594b40
// 00416f00  5f                   pop edi
// 00416f01  5e                   pop esi
// 00416f02  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
