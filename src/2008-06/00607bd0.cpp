// roc 2008-06 00607bd0  unit: RBX::BallBlockContact  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00607bd0
//
// 00607bd0  83ec14               sub esp, 0x14
// 00607bd3  d9ee                 fldz 
// 00607bd5  33d2                 xor edx, edx
// 00607bd7  d9542408             fst dword ptr [esp + 8]
// 00607bdb  51                   push ecx
// 00607bdc  d9542410             fst dword ptr [esp + 0x10]
// 00607be0  33c0                 xor eax, eax
// 00607be2  d95c2414             fstp dword ptr [esp + 0x14]
// 00607be6  6689542406           mov word ptr [esp + 6], dx
// 00607beb  d944241c             fld dword ptr [esp + 0x1c]
// 00607bef  8d54240c             lea edx, [esp + 0xc]
// 00607bf3  d91c24               fstp dword ptr [esp]
// 00607bf6  6689442404           mov word ptr [esp + 4], ax
// 00607bfb  52                   push edx
// 00607bfc  668944240c           mov word ptr [esp + 0xc], ax
// 00607c01  8d442408             lea eax, [esp + 8]
// 00607c05  50                   push eax
// 00607c06  8d542424             lea edx, [esp + 0x24]
// 00607c0a  52                   push edx
// 00607c0b  e810f4ffff           call 0x607020
// 00607c10  83c414               add esp, 0x14
// 00607c13  c20400               ret 4
// library rbxgs/v8world\Contact.cpp (function ?computeIsColliding@BallBlockContact@RBX@@EAE_NM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
