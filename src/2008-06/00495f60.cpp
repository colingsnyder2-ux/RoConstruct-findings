// roc 2008-06 00495f60  unit: RBX::Network::Players  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00495f60
//
// 00495f60  56                   push esi
// 00495f61  8bf1                 mov esi, ecx
// 00495f63  57                   push edi
// 00495f64  8d7e14               lea edi, [esi + 0x14]
// 00495f67  e8e4ea0f00           call 0x594a50
// 00495f6c  8907                 mov dword ptr [edi], eax
// 00495f6e  8d4640               lea eax, [esi + 0x40]
// 00495f71  50                   push eax
// 00495f72  e8696b0d00           call 0x56cae0
// 00495f77  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00495f7b  50                   push eax
// 00495f7c  6aff                 push -1
// 00495f7e  51                   push ecx
// 00495f7f  e80ce00b00           call 0x553f90
// 00495f84  83c408               add esp, 8
// 00495f87  50                   push eax
// 00495f88  8bcf                 mov ecx, edi
// 00495f8a  e8b1eb0f00           call 0x594b40
// 00495f8f  83c648               add esi, 0x48
// 00495f92  56                   push esi
// 00495f93  e8586e0d00           call 0x56cdf0
// 00495f98  8b542414             mov edx, dword ptr [esp + 0x14]
// 00495f9c  50                   push eax
// 00495f9d  6aff                 push -1
// 00495f9f  52                   push edx
// 00495fa0  e8ebdf0b00           call 0x553f90
// 00495fa5  83c408               add esp, 8
// 00495fa8  50                   push eax
// 00495fa9  8bcf                 mov ecx, edi
// 00495fab  e890eb0f00           call 0x594b40
// 00495fb0  5f                   pop edi
// 00495fb1  5e                   pop esi
// 00495fb2  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
