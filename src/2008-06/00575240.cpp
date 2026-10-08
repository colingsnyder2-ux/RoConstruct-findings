// roc 2008-06 00575240  unit: RBX::ServiceProvider  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00575240
//
// 00575240  8b442404             mov eax, dword ptr [esp + 4]
// 00575244  6a00                 push 0
// 00575246  6844989200           push 0x929844
// 0057524b  687c909200           push 0x92907c
// 00575250  6a00                 push 0
// 00575252  50                   push eax
// 00575253  e86ec51200           call 0x6a17c6
// 00575258  83c414               add esp, 0x14
// 0057525b  f7d8                 neg eax
// 0057525d  1bc0                 sbb eax, eax
// 0057525f  f7d8                 neg eax
// 00575261  c20400               ret 4
// library rbxgs/v8tree\Service.cpp (function ?askAddChild@ServiceProvider@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Service.cpp
