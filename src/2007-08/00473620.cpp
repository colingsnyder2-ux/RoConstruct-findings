// roc 2007-08 00473620  unit: G3D::VARArea  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473620
//
// 00473620  56                   push esi
// 00473621  8bf1                 mov esi, ecx
// 00473623  83467801             add dword ptr [esi + 0x78], 1
// 00473627  d9865c040000         fld dword ptr [esi + 0x45c]
// 0047362d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00473631  d901                 fld dword ptr [ecx]
// 00473633  dae9                 fucompp 
// 00473635  dfe0                 fnstsw ax
// 00473637  f6c444               test ah, 0x44
// 0047363a  7a24                 jp 0x473660
// 0047363c  d98660040000         fld dword ptr [esi + 0x460]
// 00473642  d94104               fld dword ptr [ecx + 4]
// 00473645  dae9                 fucompp 
// 00473647  dfe0                 fnstsw ax
// 00473649  f6c444               test ah, 0x44
// 0047364c  7a12                 jp 0x473660
// 0047364e  d98664040000         fld dword ptr [esi + 0x464]
// 00473654  d94108               fld dword ptr [ecx + 8]
// 00473657  dae9                 fucompp 
// 00473659  dfe0                 fnstsw ax
// 0047365b  f6c444               test ah, 0x44
// 0047365e  7b55                 jnp 0x4736b5
// 00473660  d901                 fld dword ptr [ecx]
// 00473662  680cd18b00           push 0x8bd10c
// 00473667  d99e5c040000         fstp dword ptr [esi + 0x45c]
// 0047366d  6802120000           push 0x1202
// 00473672  d94104               fld dword ptr [ecx + 4]
// 00473675  6808040000           push 0x408
// 0047367a  d99e60040000         fstp dword ptr [esi + 0x460]
// 00473680  d94108               fld dword ptr [ecx + 8]
// 00473683  d99e64040000         fstp dword ptr [esi + 0x464]
// 00473689  d901                 fld dword ptr [ecx]
// 0047368b  d91d0cd18b00         fstp dword ptr [0x8bd10c]
// 00473691  d94104               fld dword ptr [ecx + 4]
// 00473694  d91d10d18b00         fstp dword ptr [0x8bd110]
// 0047369a  d94108               fld dword ptr [ecx + 8]
// 0047369d  d91d14d18b00         fstp dword ptr [0x8bd114]
// 004736a3  d9e8                 fld1 
// 004736a5  d91d18d18b00         fstp dword ptr [0x8bd118]
// 004736ab  ff15f4ea7700         call dword ptr [0x77eaf4]
// 004736b1  83467001             add dword ptr [esi + 0x70], 1
// 004736b5  5e                   pop esi
// 004736b6  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setSpecularCoefficient@RenderDevice@G3D@@QAEXABVColor3@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
