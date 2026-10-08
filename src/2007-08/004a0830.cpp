// roc 2007-08 004a0830  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a0830
//
// 004a0830  83ec24               sub esp, 0x24
// 004a0833  56                   push esi
// 004a0834  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004a0838  d94624               fld dword ptr [esi + 0x24]
// 004a083b  83c624               add esi, 0x24
// 004a083e  83ec08               sub esp, 8
// 004a0841  dd1c24               fstp qword ptr [esp]
// 004a0844  e897f8ffff           call 0x4a00e0
// 004a0849  83c408               add esp, 8
// 004a084c  84c0                 test al, al
// 004a084e  742a                 je 0x4a087a
// 004a0850  d94604               fld dword ptr [esi + 4]
// 004a0853  83ec08               sub esp, 8
// 004a0856  dd1c24               fstp qword ptr [esp]
// 004a0859  e882f8ffff           call 0x4a00e0
// 004a085e  83c408               add esp, 8
// 004a0861  84c0                 test al, al
// 004a0863  7415                 je 0x4a087a
// 004a0865  d94608               fld dword ptr [esi + 8]
// 004a0868  83ec08               sub esp, 8
// 004a086b  dd1c24               fstp qword ptr [esp]
// 004a086e  e86df8ffff           call 0x4a00e0
// 004a0873  83c408               add esp, 8
// 004a0876  84c0                 test al, al
// 004a0878  7515                 jne 0x4a088f
// 004a087a  d9ee                 fldz 
// 004a087c  d916                 fst dword ptr [esi]
// 004a087e  d90574cc7900         fld dword ptr [0x79cc74]
// 004a0884  d95e04               fstp dword ptr [esi + 4]
// 004a0887  d95e08               fstp dword ptr [esi + 8]
// 004a088a  5e                   pop esi
// 004a088b  83c424               add esp, 0x24
// 004a088e  c3                   ret 
// 004a088f  d90570cc7900         fld dword ptr [0x79cc70]
// 004a0895  8d442404             lea eax, [esp + 4]
// 004a0899  d9542404             fst dword ptr [esp + 4]
// 004a089d  50                   push eax
// 004a089e  d954240c             fst dword ptr [esp + 0xc]
// 004a08a2  56                   push esi
// 004a08a3  d95c2414             fstp dword ptr [esp + 0x14]
// 004a08a7  8d4c2424             lea ecx, [esp + 0x24]
// 004a08ab  d90574cc7900         fld dword ptr [0x79cc74]
// 004a08b1  51                   push ecx
// 004a08b2  d954241c             fst dword ptr [esp + 0x1c]
// 004a08b6  8d4c241c             lea ecx, [esp + 0x1c]
// 004a08ba  d9542420             fst dword ptr [esp + 0x20]
// 004a08be  d95c2424             fstp dword ptr [esp + 0x24]
// 004a08c2  e8d9fbffff           call 0x4a04a0
// 004a08c7  d944241c             fld dword ptr [esp + 0x1c]
// 004a08cb  d91e                 fstp dword ptr [esi]
// 004a08cd  d9442420             fld dword ptr [esp + 0x20]
// 004a08d1  d95e04               fstp dword ptr [esi + 4]
// 004a08d4  d9442424             fld dword ptr [esp + 0x24]
// 004a08d8  d95e08               fstp dword ptr [esi + 8]
// 004a08db  5e                   pop esi
// 004a08dc  83c424               add esp, 0x24
// 004a08df  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ?rationalize@Network@RBX@@YAXAAVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
