// roc 2007-03 005ee510  unit: seg_005e0000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ee510
//
// 005ee510  83ec14               sub esp, 0x14
// 005ee513  d9ee                 fldz 
// 005ee515  33c0                 xor eax, eax
// 005ee517  d9542408             fst dword ptr [esp + 8]
// 005ee51b  51                   push ecx
// 005ee51c  d9542410             fst dword ptr [esp + 0x10]
// 005ee520  6689442404           mov word ptr [esp + 4], ax
// 005ee525  d95c2414             fstp dword ptr [esp + 0x14]
// 005ee529  6689442406           mov word ptr [esp + 6], ax
// 005ee52e  d944241c             fld dword ptr [esp + 0x1c]
// 005ee532  6689442408           mov word ptr [esp + 8], ax
// 005ee537  d91c24               fstp dword ptr [esp]
// 005ee53a  8d44240c             lea eax, [esp + 0xc]
// 005ee53e  50                   push eax
// 005ee53f  8d542408             lea edx, [esp + 8]
// 005ee543  52                   push edx
// 005ee544  8d442424             lea eax, [esp + 0x24]
// 005ee548  50                   push eax
// 005ee549  e8d2f6ffff           call 0x5edc20
// 005ee54e  83c414               add esp, 0x14
// 005ee551  c20400               ret 4
// library rbxgs/v8world\Contact.cpp (function ?computeIsColliding@BallBlockContact@RBX@@EAE_NM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
