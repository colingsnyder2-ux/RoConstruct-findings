// roc 2008-06 005cc240  unit: RBX::VCamera::?$FactoryProduct  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cc240
//
// 005cc240  51                   push ecx
// 005cc241  d9ee                 fldz 
// 005cc243  d944240c             fld dword ptr [esp + 0xc]
// 005cc247  d8d1                 fcom st(1)
// 005cc249  dfe0                 fnstsw ax
// 005cc24b  f6c441               test ah, 0x41
// 005cc24e  7535                 jne 0x5cc285
// 005cc250  ddd9                 fstp st(1)
// 005cc252  d905ac9b8100         fld dword ptr [0x819bac]
// 005cc258  d954240c             fst dword ptr [esp + 0xc]
// 005cc25c  d9c9                 fxch st(1)
// 005cc25e  d80de4a38300         fmul dword ptr [0x83a3e4]
// 005cc264  d80594748200         fadd dword ptr [0x827494]
// 005cc26a  d87c2408             fdivr dword ptr [esp + 8]
// 005cc26e  d91424               fst dword ptr [esp]
// 005cc271  ded9                 fcompp 
// 005cc273  dfe0                 fnstsw ax
// 005cc275  f6c405               test ah, 5
// 005cc278  8d44240c             lea eax, [esp + 0xc]
// 005cc27c  7b3f                 jnp 0x5cc2bd
// 005cc27e  8d0424               lea eax, [esp]
// 005cc281  d900                 fld dword ptr [eax]
// 005cc283  59                   pop ecx
// 005cc284  c3                   ret 
// 005cc285  d8d1                 fcom st(1)
// 005cc287  dfe0                 fnstsw ax
// 005cc289  ddd9                 fstp st(1)
// 005cc28b  f6c405               test ah, 5
// 005cc28e  7a31                 jp 0x5cc2c1
// 005cc290  d905cc9d8100         fld dword ptr [0x819dcc]
// 005cc296  d954240c             fst dword ptr [esp + 0xc]
// 005cc29a  d9c9                 fxch st(1)
// 005cc29c  d80de4a38300         fmul dword ptr [0x83a3e4]
// 005cc2a2  d9e8                 fld1 
// 005cc2a4  dee1                 fsubrp st(1)
// 005cc2a6  d84c2408             fmul dword ptr [esp + 8]
// 005cc2aa  d91424               fst dword ptr [esp]
// 005cc2ad  ded9                 fcompp 
// 005cc2af  dfe0                 fnstsw ax
// 005cc2b1  f6c441               test ah, 0x41
// 005cc2b4  8d44240c             lea eax, [esp + 0xc]
// 005cc2b8  7403                 je 0x5cc2bd
// 005cc2ba  8d0424               lea eax, [esp]
// 005cc2bd  d900                 fld dword ptr [eax]
// 005cc2bf  59                   pop ecx
// 005cc2c0  c3                   ret 
// 005cc2c1  ddd8                 fstp st(0)
// 005cc2c3  d9442408             fld dword ptr [esp + 8]
// 005cc2c7  59                   pop ecx
// 005cc2c8  c3                   ret 
// library rbxgs-dll/v8datamodel\Camera.cpp (function ?getNewZoomDistance@Camera@RBX@@SAMMM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8datamodel/Camera.cpp
