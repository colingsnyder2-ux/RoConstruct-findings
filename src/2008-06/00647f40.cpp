// roc 2008-06 00647f40  unit: RBX::Block  size: 364 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00647f40
//
// 00647f40  6aff                 push -1
// 00647f42  6828ae7d00           push 0x7dae28
// 00647f47  64a100000000         mov eax, dword ptr fs:[0]
// 00647f4d  50                   push eax
// 00647f4e  64892500000000       mov dword ptr fs:[0], esp
// 00647f55  83ec60               sub esp, 0x60
// 00647f58  d94104               fld dword ptr [ecx + 4]
// 00647f5b  53                   push ebx
// 00647f5c  d905ac9b8100         fld dword ptr [0x819bac]
// 00647f62  8b442474             mov eax, dword ptr [esp + 0x74]
// 00647f66  dcc9                 fmul st(1), st(0)
// 00647f68  55                   push ebp
// 00647f69  d9c9                 fxch st(1)
// 00647f6b  8b6c247c             mov ebp, dword ptr [esp + 0x7c]
// 00647f6f  56                   push esi
// 00647f70  d9542414             fst dword ptr [esp + 0x14]
// 00647f74  57                   push edi
// 00647f75  d94108               fld dword ptr [ecx + 8]
// 00647f78  8bbc2488000000       mov edi, dword ptr [esp + 0x88]
// 00647f7f  d8ca                 fmul st(2)
// 00647f81  68d8f69700           push 0x97f6d8
// 00647f86  57                   push edi
// 00647f87  8d7010               lea esi, [eax + 0x10]
// 00647f8a  d9542424             fst dword ptr [esp + 0x24]
// 00647f8e  8d5804               lea ebx, [eax + 4]
// 00647f91  d9410c               fld dword ptr [ecx + 0xc]
// 00647f94  55                   push ebp
// 00647f95  decb                 fmulp st(3)
// 00647f97  8d442430             lea eax, [esp + 0x30]
// 00647f9b  d9ca                 fxch st(2)
// 00647f9d  50                   push eax
// 00647f9e  56                   push esi
// 00647f9f  d9542434             fst dword ptr [esp + 0x34]
// 00647fa3  53                   push ebx
// 00647fa4  d9c1                 fld st(1)
// 00647fa6  c60700               mov byte ptr [edi], 0
// 00647fa9  d9e0                 fchs 
// 00647fab  d99424a0000000       fst dword ptr [esp + 0xa0]
// 00647fb2  d9c3                 fld st(3)
// 00647fb4  d9e0                 fchs 
// 00647fb6  d9542428             fst dword ptr [esp + 0x28]
// 00647fba  d9c2                 fld st(2)
// 00647fbc  d9e0                 fchs 
// 00647fbe  d954242c             fst dword ptr [esp + 0x2c]
// 00647fc2  d9ca                 fxch st(2)
// 00647fc4  d95c243c             fstp dword ptr [esp + 0x3c]
// 00647fc8  d95c2440             fstp dword ptr [esp + 0x40]
// 00647fcc  d95c2444             fstp dword ptr [esp + 0x44]
// 00647fd0  d9c9                 fxch st(1)
// 00647fd2  d95c2448             fstp dword ptr [esp + 0x48]
// 00647fd6  d9c9                 fxch st(1)
// 00647fd8  d95c244c             fstp dword ptr [esp + 0x4c]
// 00647fdc  d95c2450             fstp dword ptr [esp + 0x50]
// 00647fe0  e88b371700           call 0x7bb770
// 00647fe5  83c418               add esp, 0x18
// 00647fe8  803f00               cmp byte ptr [edi], 0
// 00647feb  0f84a6000000         je 0x648097
// 00647ff1  c60700               mov byte ptr [edi], 0
// 00647ff4  d906                 fld dword ptr [esi]
// 00647ff6  d905cc9d8100         fld dword ptr [0x819dcc]
// 00647ffc  56                   push esi
// 00647ffd  dcc9                 fmul st(1), st(0)
// 00647fff  8d4c2428             lea ecx, [esp + 0x28]
// 00648003  d94604               fld dword ptr [esi + 4]
// 00648006  51                   push ecx
// 00648007  8d54245c             lea edx, [esp + 0x5c]
// 0064800b  d8c9                 fmul st(1)
// 0064800d  52                   push edx
// 0064800e  d94608               fld dword ptr [esi + 8]
// 00648011  deca                 fmulp st(2)
// 00648013  d903                 fld dword ptr [ebx]
// 00648015  dee3                 fsubrp st(3)
// 00648017  d86b04               fsubr dword ptr [ebx + 4]
// 0064801a  d94308               fld dword ptr [ebx + 8]
// 0064801d  dee2                 fsubrp st(2)
// 0064801f  d9ca                 fxch st(2)
// 00648021  d95c2430             fstp dword ptr [esp + 0x30]
// 00648025  d9c9                 fxch st(1)
// 00648027  d95c2434             fstp dword ptr [esp + 0x34]
// 0064802b  d95c2438             fstp dword ptr [esp + 0x38]
// 0064802f  e8fc07edff           call 0x518830
// 00648034  d9842494000000       fld dword ptr [esp + 0x94]
// 0064803b  d944241c             fld dword ptr [esp + 0x1c]
// 0064803f  68d8f69700           push 0x97f6d8
// 00648044  d9442424             fld dword ptr [esp + 0x24]
// 00648048  57                   push edi
// 00648049  d9ca                 fxch st(2)
// 0064804b  55                   push ebp
// 0064804c  d95c2454             fstp dword ptr [esp + 0x54]
// 00648050  8d442454             lea eax, [esp + 0x54]
// 00648054  50                   push eax
// 00648055  d95c245c             fstp dword ptr [esp + 0x5c]
// 00648059  8d8c2480000000       lea ecx, [esp + 0x80]
// 00648060  51                   push ecx
// 00648061  d95c2464             fstp dword ptr [esp + 0x64]
// 00648065  8d542478             lea edx, [esp + 0x78]
// 00648069  d9442438             fld dword ptr [esp + 0x38]
// 0064806d  52                   push edx
// 0064806e  d95c246c             fstp dword ptr [esp + 0x6c]
// 00648072  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 0064807d  d9442440             fld dword ptr [esp + 0x40]
// 00648081  d95c2470             fstp dword ptr [esp + 0x70]
// 00648085  d9442444             fld dword ptr [esp + 0x44]
// 00648089  d95c2474             fstp dword ptr [esp + 0x74]
// 0064808d  e8de361700           call 0x7bb770
// 00648092  83c424               add esp, 0x24
// 00648095  b001                 mov al, 1
// 00648097  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0064809b  5f                   pop edi
// 0064809c  5e                   pop esi
// 0064809d  5d                   pop ebp
// 0064809e  5b                   pop ebx
// 0064809f  64890d00000000       mov dword ptr fs:[0], ecx
// 006480a6  83c46c               add esp, 0x6c
// 006480a9  c20c00               ret 0xc
// library openrbx-client/App\v8world\Block.cpp (function ?hitTest@Block@RBX@@UAE_NABVRay@G3D@@AAVVector3@4@AA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/v8world/Block.cpp
