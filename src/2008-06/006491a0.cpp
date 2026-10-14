// roc 2008-06 006491a0  unit: RBX::Ball  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006491a0
//
// 006491a0  64a100000000         mov eax, dword ptr fs:[0]
// 006491a6  6aff                 push -1
// 006491a8  6848c07d00           push 0x7dc048
// 006491ad  50                   push eax
// 006491ae  64892500000000       mov dword ptr fs:[0], esp
// 006491b5  83ec14               sub esp, 0x14
// 006491b8  53                   push ebx
// 006491b9  56                   push esi
// 006491ba  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006491be  d9460c               fld dword ptr [esi + 0xc]
// 006491c1  8d5604               lea edx, [esi + 4]
// 006491c4  d94204               fld dword ptr [edx + 4]
// 006491c7  bb01000000           mov ebx, 1
// 006491cc  d902                 fld dword ptr [edx]
// 006491ce  dcc8                 fmul st(0), st(0)
// 006491d0  d9c1                 fld st(1)
// 006491d2  deca                 fmulp st(2)
// 006491d4  dec1                 faddp st(1)
// 006491d6  d9c1                 fld st(1)
// 006491d8  deca                 fmulp st(2)
// 006491da  dec1                 faddp st(1)
// 006491dc  d94110               fld dword ptr [ecx + 0x10]
// 006491df  dcc8                 fmul st(0), st(0)
// 006491e1  ded9                 fcompp 
// 006491e3  dfe0                 fnstsw ax
// 006491e5  84e3                 test bl, ah
// 006491e7  7504                 jne 0x6491ed
// 006491e9  8bc3                 mov eax, ebx
// 006491eb  eb02                 jmp 0x6491ef
// 006491ed  33c0                 xor eax, eax
// 006491ef  57                   push edi
// 006491f0  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 006491f4  8807                 mov byte ptr [edi], al
// 006491f6  5f                   pop edi
// 006491f7  841d50f09600         test byte ptr [0x96f050], bl
// 006491fd  751a                 jne 0x649219
// 006491ff  d9ee                 fldz 
// 00649201  091d50f09600         or dword ptr [0x96f050], ebx
// 00649207  d91544f09600         fst dword ptr [0x96f044]
// 0064920d  d91548f09600         fst dword ptr [0x96f048]
// 00649213  d91d4cf09600         fstp dword ptr [0x96f04c]
// 00649219  d94110               fld dword ptr [ecx + 0x10]
// 0064921c  c744240804748200     mov dword ptr [esp + 8], 0x827404
// 00649224  d90544f09600         fld dword ptr [0x96f044]
// 0064922a  d95c240c             fstp dword ptr [esp + 0xc]
// 0064922e  d90548f09600         fld dword ptr [0x96f048]
// 00649234  d95c2410             fstp dword ptr [esp + 0x10]
// 00649238  d9054cf09600         fld dword ptr [0x96f04c]
// 0064923e  d95c2414             fstp dword ptr [esp + 0x14]
// 00649242  d95c2418             fstp dword ptr [esp + 0x18]
// 00649246  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0064924e  841d20f09600         test byte ptr [0x96f020], bl
// 00649254  7513                 jne 0x649269
// 00649256  a1ac248000           mov eax, dword ptr [0x8024ac]
// 0064925b  091d20f09600         or dword ptr [0x96f020], ebx
// 00649261  dd00                 fld qword ptr [eax]
// 00649263  dd1d18f09600         fstp qword ptr [0x96f018]
// 00649269  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064926d  68d8f69700           push 0x97f6d8
// 00649272  51                   push ecx
// 00649273  8d442410             lea eax, [esp + 0x10]
// 00649277  50                   push eax
// 00649278  83c610               add esi, 0x10
// 0064927b  56                   push esi
// 0064927c  52                   push edx
// 0064927d  e81e231700           call 0x7bb5a0
// 00649282  dc1d18f09600         fcomp qword ptr [0x96f018]
// 00649288  83c414               add esp, 0x14
// 0064928b  dfe0                 fnstsw ax
// 0064928d  f6c444               test ah, 0x44
// 00649290  7b15                 jnp 0x6492a7
// 00649292  5e                   pop esi
// 00649293  8ac3                 mov al, bl
// 00649295  5b                   pop ebx
// 00649296  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0064929a  64890d00000000       mov dword ptr fs:[0], ecx
// 006492a1  83c420               add esp, 0x20
// 006492a4  c20c00               ret 0xc
// 006492a7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006492ab  5e                   pop esi
// 006492ac  32c0                 xor al, al
// 006492ae  5b                   pop ebx
// 006492af  64890d00000000       mov dword ptr fs:[0], ecx
// 006492b6  83c420               add esp, 0x20
// 006492b9  c20c00               ret 0xc
// library rbxgs-dll/v8world\Ball.cpp (function ?hitTest@Ball@RBX@@UAE_NABVRay@G3D@@AAVVector3@4@AA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8world/Ball.cpp
