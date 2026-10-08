// roc 2007-03 00474b00  unit: seg_00470000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00474b00
//
// 00474b00  51                   push ecx
// 00474b01  dd442408             fld qword ptr [esp + 8]
// 00474b05  56                   push esi
// 00474b06  8bf1                 mov esi, ecx
// 00474b08  dc9650040000         fcom qword ptr [esi + 0x450]
// 00474b0e  b901000000           mov ecx, 1
// 00474b13  014e78               add dword ptr [esi + 0x78], ecx
// 00474b16  dfe0                 fnstsw ax
// 00474b18  f6c444               test ah, 0x44
// 00474b1b  0f8baf000000         jnp 0x474bd0
// 00474b21  d9ee                 fldz 
// 00474b23  014e70               add dword ptr [esi + 0x70], ecx
// 00474b26  dae9                 fucompp 
// 00474b28  57                   push edi
// 00474b29  dfe0                 fnstsw ax
// 00474b2b  f6c444               test ah, 0x44
// 00474b2e  7b75                 jnp 0x474ba5
// 00474b30  8b3d6ceb7700         mov edi, dword ptr [0x77eb6c]
// 00474b36  6837800000           push 0x8037
// 00474b3b  ffd7                 call edi
// 00474b3d  68022a0000           push 0x2a02
// 00474b42  ffd7                 call edi
// 00474b44  68012a0000           push 0x2a01
// 00474b49  ffd7                 call edi
// 00474b4b  d9ee                 fldz 
// 00474b4d  dd442410             fld qword ptr [esp + 0x10]
// 00474b51  d8d1                 fcom st(1)
// 00474b53  dfe0                 fnstsw ax
// 00474b55  f6c441               test ah, 0x41
// 00474b58  7506                 jne 0x474b60
// 00474b5a  ddd9                 fstp st(1)
// 00474b5c  d9e8                 fld1 
// 00474b5e  eb15                 jmp 0x474b75
// 00474b60  d8d1                 fcom st(1)
// 00474b62  dfe0                 fnstsw ax
// 00474b64  f6c405               test ah, 5
// 00474b67  7a0a                 jp 0x474b73
// 00474b69  ddd9                 fstp st(1)
// 00474b6b  dd05a0597900         fld qword ptr [0x7959a0]
// 00474b71  eb02                 jmp 0x474b75
// 00474b73  d9c9                 fxch st(1)
// 00474b75  d95c2408             fstp dword ptr [esp + 8]
// 00474b79  83ec08               sub esp, 8
// 00474b7c  d9442410             fld dword ptr [esp + 0x10]
// 00474b80  d95c2404             fstp dword ptr [esp + 4]
// 00474b84  d95c2410             fstp dword ptr [esp + 0x10]
// 00474b88  d9442410             fld dword ptr [esp + 0x10]
// 00474b8c  d91c24               fstp dword ptr [esp]
// 00474b8f  ff1508ec7700         call dword ptr [0x77ec08]
// 00474b95  dd442410             fld qword ptr [esp + 0x10]
// 00474b99  5f                   pop edi
// 00474b9a  dd9e50040000         fstp qword ptr [esi + 0x450]
// 00474ba0  5e                   pop esi
// 00474ba1  59                   pop ecx
// 00474ba2  c20800               ret 8
// 00474ba5  8b3d74eb7700         mov edi, dword ptr [0x77eb74]
// 00474bab  68012a0000           push 0x2a01
// 00474bb0  ffd7                 call edi
// 00474bb2  6837800000           push 0x8037
// 00474bb7  ffd7                 call edi
// 00474bb9  68022a0000           push 0x2a02
// 00474bbe  ffd7                 call edi
// 00474bc0  dd442410             fld qword ptr [esp + 0x10]
// 00474bc4  5f                   pop edi
// 00474bc5  dd9e50040000         fstp qword ptr [esi + 0x450]
// 00474bcb  5e                   pop esi
// 00474bcc  59                   pop ecx
// 00474bcd  c20800               ret 8
// 00474bd0  ddd8                 fstp st(0)
// 00474bd2  5e                   pop esi
// 00474bd3  59                   pop ecx
// 00474bd4  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setPolygonOffset@RenderDevice@G3D@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
