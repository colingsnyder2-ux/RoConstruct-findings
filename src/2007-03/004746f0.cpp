// roc 2007-03 004746f0  unit: seg_00470000  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004746f0
//
// 004746f0  56                   push esi
// 004746f1  8bf1                 mov esi, ecx
// 004746f3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004746f7  83467801             add dword ptr [esi + 0x78], 1
// 004746fb  8bc1                 mov eax, ecx
// 004746fd  6bc05c               imul eax, eax, 0x5c
// 00474700  d9843020050000       fld dword ptr [eax + esi + 0x520]
// 00474707  d944240c             fld dword ptr [esp + 0xc]
// 0047470b  d9c0                 fld st(0)
// 0047470d  ddea                 fucomp st(2)
// 0047470f  57                   push edi
// 00474710  8dbc3020050000       lea edi, [eax + esi + 0x520]
// 00474717  dfe0                 fnstsw ax
// 00474719  ddd9                 fstp st(1)
// 0047471b  f6c444               test ah, 0x44
// 0047471e  7b4d                 jnp 0x47476d
// 00474720  8b86c4040000         mov eax, dword ptr [esi + 0x4c4]
// 00474726  3bc1                 cmp eax, ecx
// 00474728  7d02                 jge 0x47472c
// 0047472a  8bc1                 mov eax, ecx
// 0047472c  8986c4040000         mov dword ptr [esi + 0x4c4], eax
// 00474732  803d2a768b0000       cmp byte ptr [0x8b762a], 0
// 00474739  7413                 je 0x47474e
// 0047473b  81c1c0840000         add ecx, 0x84c0
// 00474741  ddd8                 fstp st(0)
// 00474743  51                   push ecx
// 00474744  ff15a87f8b00         call dword ptr [0x8b7fa8]
// 0047474a  d9442410             fld dword ptr [esp + 0x10]
// 0047474e  51                   push ecx
// 0047474f  d917                 fst dword ptr [edi]
// 00474751  83467001             add dword ptr [esi + 0x70], 1
// 00474755  d91c24               fstp dword ptr [esp]
// 00474758  6801850000           push 0x8501
// 0047475d  6800850000           push 0x8500
// 00474762  ff1500ec7700         call dword ptr [0x77ec00]
// 00474768  5f                   pop edi
// 00474769  5e                   pop esi
// 0047476a  c20800               ret 8
// 0047476d  5f                   pop edi
// 0047476e  ddd8                 fstp st(0)
// 00474770  5e                   pop esi
// 00474771  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTextureLODBias@RenderDevice@G3D@@QAEXIM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
