// roc 2012-06 00561d50  unit: RBX::VHint::?$FactoryProduct::Creator  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00561d50
//
// 00561d50  807c240404           cmp byte ptr [esp + 4], 4
// 00561d55  6a00                 push 0
// 00561d57  750e                 jne 0x561d67
// 00561d59  a15089d800           mov eax, dword ptr [0xd88950]
// 00561d5e  50                   push eax
// 00561d5f  e8fcfcffff           call 0x561a60
// 00561d64  c20400               ret 4
// 00561d67  8b154c89d800         mov edx, dword ptr [0xd8894c]
// 00561d6d  52                   push edx
// 00561d6e  e8edfcffff           call 0x561a60
// 00561d73  c20400               ret 4
// library rbx2016-raknet/RakNetTypes.cpp (function ?SetToLoopback@SystemAddress@RakNet@@QAEXE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakNetTypes.cpp
