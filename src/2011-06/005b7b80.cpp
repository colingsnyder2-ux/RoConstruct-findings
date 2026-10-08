// roc 2011-06 005b7b80  unit: RBX::ServiceProvider  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b7b80
//
// 005b7b80  8b442404             mov eax, dword ptr [esp + 4]
// 005b7b84  6a00                 push 0
// 005b7b86  68289cc000           push 0xc09c28
// 005b7b8b  68f871c000           push 0xc071f8
// 005b7b90  6a00                 push 0
// 005b7b92  50                   push eax
// 005b7b93  e852372500           call 0x80b2ea
// 005b7b98  83c414               add esp, 0x14
// 005b7b9b  f7d8                 neg eax
// 005b7b9d  1bc0                 sbb eax, eax
// 005b7b9f  f7d8                 neg eax
// 005b7ba1  c20400               ret 4
// library rbxgs/v8tree\Service.cpp (function ?askAddChild@ServiceProvider@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Service.cpp
