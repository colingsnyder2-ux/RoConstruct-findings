// from server: 100% by auto
// roc 2007-08 004a04a0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a04a0
//
// 004a04a0  83ec0c               sub esp, 0xc
// 004a04a3  d94108               fld dword ptr [ecx + 8]
// 004a04a6  8b542414             mov edx, dword ptr [esp + 0x14]
// 004a04aa  d91c24               fstp dword ptr [esp]
// 004a04ad  56                   push esi
// 004a04ae  d94208               fld dword ptr [edx + 8]
// 004a04b1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004a04b5  d95c2418             fstp dword ptr [esp + 0x18]
// 004a04b9  d94608               fld dword ptr [esi + 8]
// 004a04bc  d95c241c             fstp dword ptr [esp + 0x1c]
// 004a04c0  d9442404             fld dword ptr [esp + 4]
// 004a04c4  d9442418             fld dword ptr [esp + 0x18]
// 004a04c8  d8d1                 fcom st(1)
// 004a04ca  dfe0                 fnstsw ax
// 004a04cc  f6c401               test ah, 1
// 004a04cf  7504                 jne 0x4a04d5
// 004a04d1  ddd9                 fstp st(1)
// 004a04d3  eb15                 jmp 0x4a04ea
// 004a04d5  ddd8                 fstp st(0)
// 004a04d7  d944241c             fld dword ptr [esp + 0x1c]
// 004a04db  d8d1                 fcom st(1)
// 004a04dd  dfe0                 fnstsw ax
// 004a04df  f6c441               test ah, 0x41
// 004a04e2  7a04                 jp 0x4a04e8
// 004a04e4  ddd9                 fstp st(1)
// 004a04e6  eb02                 jmp 0x4a04ea
// 004a04e8  ddd8                 fstp st(0)
// 004a04ea  d95c2404             fstp dword ptr [esp + 4]
// 004a04ee  d94104               fld dword ptr [ecx + 4]
// 004a04f1  d95c2418             fstp dword ptr [esp + 0x18]
// 004a04f5  d94204               fld dword ptr [edx + 4]
// 004a04f8  d95c241c             fstp dword ptr [esp + 0x1c]
// 004a04fc  d94604               fld dword ptr [esi + 4]
// 004a04ff  d95c2408             fstp dword ptr [esp + 8]
// 004a0503  d9442418             fld dword ptr [esp + 0x18]
// 004a0507  d944241c             fld dword ptr [esp + 0x1c]
// 004a050b  d8d1                 fcom st(1)
// 004a050d  dfe0                 fnstsw ax
// 004a050f  f6c401               test ah, 1
// 004a0512  7504                 jne 0x4a0518
// 004a0514  ddd9                 fstp st(1)
// 004a0516  eb15                 jmp 0x4a052d
// 004a0518  ddd8                 fstp st(0)
// 004a051a  d9442408             fld dword ptr [esp + 8]
// 004a051e  d8d1                 fcom st(1)
// 004a0520  dfe0                 fnstsw ax
// 004a0522  f6c441               test ah, 0x41
// 004a0525  7a04                 jp 0x4a052b
// 004a0527  ddd9                 fstp st(1)
// 004a0529  eb02                 jmp 0x4a052d
// 004a052b  ddd8                 fstp st(0)
// 004a052d  d95c241c             fstp dword ptr [esp + 0x1c]
// 004a0531  d901                 fld dword ptr [ecx]
// 004a0533  d95c2418             fstp dword ptr [esp + 0x18]
// 004a0537  d902                 fld dword ptr [edx]
// 004a0539  d95c2408             fstp dword ptr [esp + 8]
// 004a053d  d906                 fld dword ptr [esi]
// 004a053f  5e                   pop esi
// 004a0540  d95c2408             fstp dword ptr [esp + 8]
// 004a0544  d9442414             fld dword ptr [esp + 0x14]
// 004a0548  d9442404             fld dword ptr [esp + 4]
// 004a054c  d8d1                 fcom st(1)
// 004a054e  dfe0                 fnstsw ax
// 004a0550  f6c401               test ah, 1
// 004a0553  7504                 jne 0x4a0559
// 004a0555  ddd9                 fstp st(1)
// 004a0557  eb11                 jmp 0x4a056a
// 004a0559  ddd8                 fstp st(0)
// 004a055b  d9442408             fld dword ptr [esp + 8]
// 004a055f  d8d1                 fcom st(1)
// 004a0561  dfe0                 fnstsw ax
// 004a0563  f6c441               test ah, 0x41
// 004a0566  7bed                 jnp 0x4a0555
// 004a0568  ddd8                 fstp st(0)
// 004a056a  8b442410             mov eax, dword ptr [esp + 0x10]
// 004a056e  d95c2414             fstp dword ptr [esp + 0x14]
// 004a0572  d9442414             fld dword ptr [esp + 0x14]
// 004a0576  d918                 fstp dword ptr [eax]
// 004a0578  d9442418             fld dword ptr [esp + 0x18]
// 004a057c  d95804               fstp dword ptr [eax + 4]
// 004a057f  d90424               fld dword ptr [esp]
// 004a0582  d95808               fstp dword ptr [eax + 8]
// 004a0585  83c40c               add esp, 0xc
// 004a0588  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\AABox.cpp (function ?clamp@Vector3@G3D@@QBE?AV12@ABV12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/AABox.cpp
