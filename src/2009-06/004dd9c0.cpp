// roc 2009-06 004dd9c0  unit: RBX::Network::ConcurrentRakPeer::PacketJob  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004dd9c0
//
// 004dd9c0  83ec24               sub esp, 0x24
// 004dd9c3  56                   push esi
// 004dd9c4  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004dd9c8  d94624               fld dword ptr [esi + 0x24]
// 004dd9cb  83c624               add esi, 0x24
// 004dd9ce  83ec08               sub esp, 8
// 004dd9d1  dd1c24               fstp qword ptr [esp]
// 004dd9d4  e897ebffff           call 0x4dc570
// 004dd9d9  83c408               add esp, 8
// 004dd9dc  84c0                 test al, al
// 004dd9de  742a                 je 0x4dda0a
// 004dd9e0  d94604               fld dword ptr [esi + 4]
// 004dd9e3  83ec08               sub esp, 8
// 004dd9e6  dd1c24               fstp qword ptr [esp]
// 004dd9e9  e882ebffff           call 0x4dc570
// 004dd9ee  83c408               add esp, 8
// 004dd9f1  84c0                 test al, al
// 004dd9f3  7415                 je 0x4dda0a
// 004dd9f5  d94608               fld dword ptr [esi + 8]
// 004dd9f8  83ec08               sub esp, 8
// 004dd9fb  dd1c24               fstp qword ptr [esp]
// 004dd9fe  e86debffff           call 0x4dc570
// 004dda03  83c408               add esp, 8
// 004dda06  84c0                 test al, al
// 004dda08  7515                 jne 0x4dda1f
// 004dda0a  d9ee                 fldz 
// 004dda0c  d916                 fst dword ptr [esi]
// 004dda0e  d90514678c00         fld dword ptr [0x8c6714]
// 004dda14  d95e04               fstp dword ptr [esi + 4]
// 004dda17  d95e08               fstp dword ptr [esi + 8]
// 004dda1a  5e                   pop esi
// 004dda1b  83c424               add esp, 0x24
// 004dda1e  c3                   ret 
// 004dda1f  d90510678c00         fld dword ptr [0x8c6710]
// 004dda25  8d442404             lea eax, [esp + 4]
// 004dda29  d9542404             fst dword ptr [esp + 4]
// 004dda2d  50                   push eax
// 004dda2e  d954240c             fst dword ptr [esp + 0xc]
// 004dda32  56                   push esi
// 004dda33  d95c2414             fstp dword ptr [esp + 0x14]
// 004dda37  8d4c2424             lea ecx, [esp + 0x24]
// 004dda3b  d90514678c00         fld dword ptr [0x8c6714]
// 004dda41  51                   push ecx
// 004dda42  d954241c             fst dword ptr [esp + 0x1c]
// 004dda46  8d4c241c             lea ecx, [esp + 0x1c]
// 004dda4a  d9542420             fst dword ptr [esp + 0x20]
// 004dda4e  d95c2424             fstp dword ptr [esp + 0x24]
// 004dda52  e8a9f5ffff           call 0x4dd000
// 004dda57  d944241c             fld dword ptr [esp + 0x1c]
// 004dda5b  d91e                 fstp dword ptr [esi]
// 004dda5d  d9442420             fld dword ptr [esp + 0x20]
// 004dda61  d95e04               fstp dword ptr [esi + 4]
// 004dda64  d9442424             fld dword ptr [esp + 0x24]
// 004dda68  d95e08               fstp dword ptr [esi + 8]
// 004dda6b  5e                   pop esi
// 004dda6c  83c424               add esp, 0x24
// 004dda6f  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ?rationalize@Network@RBX@@YAXAAVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
