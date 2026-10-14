// roc 2008-06 004a5bc0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5bc0
//
// 004a5bc0  d9442408             fld dword ptr [esp + 8]
// 004a5bc4  d9c0                 fld st(0)
// 004a5bc6  d9442404             fld dword ptr [esp + 4]
// 004a5bca  dde1                 fucom st(1)
// 004a5bcc  dfe0                 fnstsw ax
// 004a5bce  ddd9                 fstp st(1)
// 004a5bd0  f6c444               test ah, 0x44
// 004a5bd3  7b14                 jnp 0x4a5be9
// 004a5bd5  dee1                 fsubrp st(1)
// 004a5bd7  d9e1                 fabs 
// 004a5bd9  d81d303c8200         fcomp dword ptr [0x823c30]
// 004a5bdf  dfe0                 fnstsw ax
// 004a5be1  f6c441               test ah, 0x41
// 004a5be4  7b07                 jnp 0x4a5bed
// 004a5be6  33c0                 xor eax, eax
// 004a5be8  c3                   ret 
// 004a5be9  ddd9                 fstp st(1)
// 004a5beb  ddd8                 fstp st(0)
// 004a5bed  b801000000           mov eax, 1
// 004a5bf2  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ?brickEq@Network@RBX@@YA_NMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-net Streaming.cpp
