// roc 2009-12 00665680  unit: RBX::ServiceProvider  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00665680
//
// 00665680  8b442404             mov eax, dword ptr [esp + 4]
// 00665684  6a00                 push 0
// 00665686  689819b000           push 0xb01998
// 0066568b  6840feaf00           push 0xaffe40
// 00665690  6a00                 push 0
// 00665692  50                   push eax
// 00665693  e812f41800           call 0x7f4aaa
// 00665698  83c414               add esp, 0x14
// 0066569b  f7d8                 neg eax
// 0066569d  1bc0                 sbb eax, eax
// 0066569f  f7d8                 neg eax
// 006656a1  c20400               ret 4
// library rbxgs/v8tree\Service.cpp (function ?askAddChild@ServiceProvider@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Service.cpp
