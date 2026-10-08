// roc 2008-06 004a6a00  unit: RBX::VHint::?$FactoryProduct::Creator  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a6a00
//
// 004a6a00  83ec24               sub esp, 0x24
// 004a6a03  56                   push esi
// 004a6a04  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004a6a08  d94624               fld dword ptr [esi + 0x24]
// 004a6a0b  83c624               add esi, 0x24
// 004a6a0e  83ec08               sub esp, 8
// 004a6a11  dd1c24               fstp qword ptr [esp]
// 004a6a14  e827efffff           call 0x4a5940
// 004a6a19  83c408               add esp, 8
// 004a6a1c  84c0                 test al, al
// 004a6a1e  742a                 je 0x4a6a4a
// 004a6a20  d94604               fld dword ptr [esi + 4]
// 004a6a23  83ec08               sub esp, 8
// 004a6a26  dd1c24               fstp qword ptr [esp]
// 004a6a29  e812efffff           call 0x4a5940
// 004a6a2e  83c408               add esp, 8
// 004a6a31  84c0                 test al, al
// 004a6a33  7415                 je 0x4a6a4a
// 004a6a35  d94608               fld dword ptr [esi + 8]
// 004a6a38  83ec08               sub esp, 8
// 004a6a3b  dd1c24               fstp qword ptr [esp]
// 004a6a3e  e8fdeeffff           call 0x4a5940
// 004a6a43  83c408               add esp, 8
// 004a6a46  84c0                 test al, al
// 004a6a48  7515                 jne 0x4a6a5f
// 004a6a4a  d9ee                 fldz 
// 004a6a4c  d916                 fst dword ptr [esi]
// 004a6a4e  d905083e8200         fld dword ptr [0x823e08]
// 004a6a54  d95e04               fstp dword ptr [esi + 4]
// 004a6a57  d95e08               fstp dword ptr [esi + 8]
// 004a6a5a  5e                   pop esi
// 004a6a5b  83c424               add esp, 0x24
// 004a6a5e  c3                   ret 
// 004a6a5f  d905043e8200         fld dword ptr [0x823e04]
// 004a6a65  8d442404             lea eax, [esp + 4]
// 004a6a69  d9542404             fst dword ptr [esp + 4]
// 004a6a6d  50                   push eax
// 004a6a6e  d954240c             fst dword ptr [esp + 0xc]
// 004a6a72  56                   push esi
// 004a6a73  d95c2414             fstp dword ptr [esp + 0x14]
// 004a6a77  8d4c2424             lea ecx, [esp + 0x24]
// 004a6a7b  d905083e8200         fld dword ptr [0x823e08]
// 004a6a81  51                   push ecx
// 004a6a82  d954241c             fst dword ptr [esp + 0x1c]
// 004a6a86  8d4c241c             lea ecx, [esp + 0x1c]
// 004a6a8a  d9542420             fst dword ptr [esp + 0x20]
// 004a6a8e  d95c2424             fstp dword ptr [esp + 0x24]
// 004a6a92  e869f6ffff           call 0x4a6100
// 004a6a97  d944241c             fld dword ptr [esp + 0x1c]
// 004a6a9b  d91e                 fstp dword ptr [esi]
// 004a6a9d  d9442420             fld dword ptr [esp + 0x20]
// 004a6aa1  d95e04               fstp dword ptr [esi + 4]
// 004a6aa4  d9442424             fld dword ptr [esp + 0x24]
// 004a6aa8  d95e08               fstp dword ptr [esi + 8]
// 004a6aab  5e                   pop esi
// 004a6aac  83c424               add esp, 0x24
// 004a6aaf  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ?rationalize@Network@RBX@@YAXAAVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
