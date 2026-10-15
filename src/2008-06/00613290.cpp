// roc 2008-06 00613290  unit: seg_00610000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00613290
//
// 00613290  53                   push ebx
// 00613291  8bd9                 mov ebx, ecx
// 00613293  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00613296  d980b8000000         fld dword ptr [eax + 0xb8]
// 0061329c  56                   push esi
// 0061329d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006132a1  57                   push edi
// 006132a2  8b7b0c               mov edi, dword ptr [ebx + 0xc]
// 006132a5  d8a7b8000000         fsub dword ptr [edi + 0xb8]
// 006132ab  05b8000000           add eax, 0xb8
// 006132b0  d94004               fld dword ptr [eax + 4]
// 006132b3  81c7b8000000         add edi, 0xb8
// 006132b9  d86704               fsub dword ptr [edi + 4]
// 006132bc  51                   push ecx
// 006132bd  d94008               fld dword ptr [eax + 8]
// 006132c0  8bce                 mov ecx, esi
// 006132c2  d86708               fsub dword ptr [edi + 8]
// 006132c5  d9ca                 fxch st(2)
// 006132c7  d91e                 fstp dword ptr [esi]
// 006132c9  d95e04               fstp dword ptr [esi + 4]
// 006132cc  d95e08               fstp dword ptr [esi + 8]
// 006132cf  d905706e8200         fld dword ptr [0x826e70]
// 006132d5  d91c24               fstp dword ptr [esp]
// 006132d8  e89351f0ff           call 0x518470
// 006132dd  d8631c               fsub dword ptr [ebx + 0x1c]
// 006132e0  d95e0c               fstp dword ptr [esi + 0xc]
// 006132e3  d94318               fld dword ptr [ebx + 0x18]
// 006132e6  d906                 fld dword ptr [esi]
// 006132e8  d8c9                 fmul st(1)
// 006132ea  d9c1                 fld st(1)
// 006132ec  d84e04               fmul dword ptr [esi + 4]
// 006132ef  d94608               fld dword ptr [esi + 8]
// 006132f2  decb                 fmulp st(3)
// 006132f4  d907                 fld dword ptr [edi]
// 006132f6  dec2                 faddp st(2)
// 006132f8  d84704               fadd dword ptr [edi + 4]
// 006132fb  d94708               fld dword ptr [edi + 8]
// 006132fe  5f                   pop edi
// 006132ff  dec3                 faddp st(3)
// 00613301  d9c9                 fxch st(1)
// 00613303  d95e10               fstp dword ptr [esi + 0x10]
// 00613306  d95e14               fstp dword ptr [esi + 0x14]
// 00613309  d95e18               fstp dword ptr [esi + 0x18]
// 0061330c  5e                   pop esi
// 0061330d  5b                   pop ebx
// 0061330e  c20400               ret 4
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?computeBallBall@GeoPair@RBX@@AAEXAAVPairParams@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
