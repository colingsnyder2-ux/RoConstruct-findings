// roc 2007-08 005575b0  unit: ChatEnter  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005575b0
//
// 005575b0  56                   push esi
// 005575b1  8bf1                 mov esi, ecx
// 005575b3  57                   push edi
// 005575b4  8d7e14               lea edi, [esi + 0x14]
// 005575b7  e844640100           call 0x56da00
// 005575bc  8907                 mov dword ptr [edi], eax
// 005575be  8d4630               lea eax, [esi + 0x30]
// 005575c1  50                   push eax
// 005575c2  e839640100           call 0x56da00
// 005575c7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005575cb  50                   push eax
// 005575cc  6aff                 push -1
// 005575ce  51                   push ecx
// 005575cf  e86c53fdff           call 0x52c940
// 005575d4  83c408               add esp, 8
// 005575d7  50                   push eax
// 005575d8  8bcf                 mov ecx, edi
// 005575da  e8215e0100           call 0x56d400
// 005575df  83c638               add esi, 0x38
// 005575e2  56                   push esi
// 005575e3  e858620100           call 0x56d840
// 005575e8  8b542414             mov edx, dword ptr [esp + 0x14]
// 005575ec  50                   push eax
// 005575ed  6aff                 push -1
// 005575ef  52                   push edx
// 005575f0  e84b53fdff           call 0x52c940
// 005575f5  83c408               add esp, 8
// 005575f8  50                   push eax
// 005575f9  8bcf                 mov ecx, edi
// 005575fb  e8005e0100           call 0x56d400
// 00557600  5f                   pop edi
// 00557601  5e                   pop esi
// 00557602  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
