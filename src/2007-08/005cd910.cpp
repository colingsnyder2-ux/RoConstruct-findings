// roc 2007-08 005cd910  unit: RBX::BallBlockContact  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cd910
//
// 005cd910  83ec14               sub esp, 0x14
// 005cd913  d9ee                 fldz 
// 005cd915  33c0                 xor eax, eax
// 005cd917  d9542408             fst dword ptr [esp + 8]
// 005cd91b  51                   push ecx
// 005cd91c  d9542410             fst dword ptr [esp + 0x10]
// 005cd920  6689442404           mov word ptr [esp + 4], ax
// 005cd925  d95c2414             fstp dword ptr [esp + 0x14]
// 005cd929  6689442406           mov word ptr [esp + 6], ax
// 005cd92e  d944241c             fld dword ptr [esp + 0x1c]
// 005cd932  6689442408           mov word ptr [esp + 8], ax
// 005cd937  d91c24               fstp dword ptr [esp]
// 005cd93a  8d44240c             lea eax, [esp + 0xc]
// 005cd93e  50                   push eax
// 005cd93f  8d542408             lea edx, [esp + 8]
// 005cd943  52                   push edx
// 005cd944  8d442424             lea eax, [esp + 0x24]
// 005cd948  50                   push eax
// 005cd949  e812f7ffff           call 0x5cd060
// 005cd94e  83c414               add esp, 0x14
// 005cd951  c20400               ret 4
// library rbxgs/v8world\Contact.cpp (function ?computeIsColliding@BallBlockContact@RBX@@EAE_NM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
