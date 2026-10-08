// roc 2009-06 006afb70  unit: RBX::BallBlockContact  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006afb70
//
// 006afb70  83ec14               sub esp, 0x14
// 006afb73  d9ee                 fldz 
// 006afb75  33d2                 xor edx, edx
// 006afb77  d9542408             fst dword ptr [esp + 8]
// 006afb7b  51                   push ecx
// 006afb7c  d9542410             fst dword ptr [esp + 0x10]
// 006afb80  33c0                 xor eax, eax
// 006afb82  d95c2414             fstp dword ptr [esp + 0x14]
// 006afb86  6689542406           mov word ptr [esp + 6], dx
// 006afb8b  d944241c             fld dword ptr [esp + 0x1c]
// 006afb8f  8d54240c             lea edx, [esp + 0xc]
// 006afb93  d91c24               fstp dword ptr [esp]
// 006afb96  6689442404           mov word ptr [esp + 4], ax
// 006afb9b  52                   push edx
// 006afb9c  668944240c           mov word ptr [esp + 0xc], ax
// 006afba1  8d442408             lea eax, [esp + 8]
// 006afba5  50                   push eax
// 006afba6  8d542424             lea edx, [esp + 0x24]
// 006afbaa  52                   push edx
// 006afbab  e890f5ffff           call 0x6af140
// 006afbb0  83c414               add esp, 0x14
// 006afbb3  c20400               ret 4
// library rbxgs/v8world\Contact.cpp (function ?computeIsColliding@BallBlockContact@RBX@@EAE_NM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
