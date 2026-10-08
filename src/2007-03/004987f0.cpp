// roc 2007-03 004987f0  unit: seg_00490000  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004987f0
//
// 004987f0  83ec24               sub esp, 0x24
// 004987f3  56                   push esi
// 004987f4  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004987f8  d94624               fld dword ptr [esi + 0x24]
// 004987fb  83c624               add esi, 0x24
// 004987fe  83ec08               sub esp, 8
// 00498801  dd1c24               fstp qword ptr [esp]
// 00498804  e8e7f8ffff           call 0x4980f0
// 00498809  83c408               add esp, 8
// 0049880c  84c0                 test al, al
// 0049880e  742a                 je 0x49883a
// 00498810  d94604               fld dword ptr [esi + 4]
// 00498813  83ec08               sub esp, 8
// 00498816  dd1c24               fstp qword ptr [esp]
// 00498819  e8d2f8ffff           call 0x4980f0
// 0049881e  83c408               add esp, 8
// 00498821  84c0                 test al, al
// 00498823  7415                 je 0x49883a
// 00498825  d94608               fld dword ptr [esi + 8]
// 00498828  83ec08               sub esp, 8
// 0049882b  dd1c24               fstp qword ptr [esp]
// 0049882e  e8bdf8ffff           call 0x4980f0
// 00498833  83c408               add esp, 8
// 00498836  84c0                 test al, al
// 00498838  7515                 jne 0x49884f
// 0049883a  d9ee                 fldz 
// 0049883c  d916                 fst dword ptr [esi]
// 0049883e  d9055cbb7900         fld dword ptr [0x79bb5c]
// 00498844  d95e04               fstp dword ptr [esi + 4]
// 00498847  d95e08               fstp dword ptr [esi + 8]
// 0049884a  5e                   pop esi
// 0049884b  83c424               add esp, 0x24
// 0049884e  c3                   ret 
// 0049884f  d90558bb7900         fld dword ptr [0x79bb58]
// 00498855  8d442404             lea eax, [esp + 4]
// 00498859  d9542404             fst dword ptr [esp + 4]
// 0049885d  50                   push eax
// 0049885e  d954240c             fst dword ptr [esp + 0xc]
// 00498862  56                   push esi
// 00498863  d95c2414             fstp dword ptr [esp + 0x14]
// 00498867  8d4c2424             lea ecx, [esp + 0x24]
// 0049886b  d9055cbb7900         fld dword ptr [0x79bb5c]
// 00498871  51                   push ecx
// 00498872  d954241c             fst dword ptr [esp + 0x1c]
// 00498876  8d4c241c             lea ecx, [esp + 0x1c]
// 0049887a  d9542420             fst dword ptr [esp + 0x20]
// 0049887e  d95c2424             fstp dword ptr [esp + 0x24]
// 00498882  e869faffff           call 0x4982f0
// 00498887  d944241c             fld dword ptr [esp + 0x1c]
// 0049888b  d91e                 fstp dword ptr [esi]
// 0049888d  d9442420             fld dword ptr [esp + 0x20]
// 00498891  d95e04               fstp dword ptr [esi + 4]
// 00498894  d9442424             fld dword ptr [esp + 0x24]
// 00498898  d95e08               fstp dword ptr [esi + 8]
// 0049889b  5e                   pop esi
// 0049889c  83c424               add esp, 0x24
// 0049889f  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ?rationalize@Network@RBX@@YAXAAVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
