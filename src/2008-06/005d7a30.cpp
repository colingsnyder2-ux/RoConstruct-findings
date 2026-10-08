// roc 2008-06 005d7a30  unit: CXTPReportControl  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7a30
//
// 005d7a30  83ec0c               sub esp, 0xc
// 005d7a33  56                   push esi
// 005d7a34  8b742414             mov esi, dword ptr [esp + 0x14]
// 005d7a38  8bce                 mov ecx, esi
// 005d7a3a  e89108eaff           call 0x4782d0
// 005d7a3f  d9ee                 fldz 
// 005d7a41  83ec0c               sub esp, 0xc
// 005d7a44  8bc4                 mov eax, esp
// 005d7a46  d910                 fst dword ptr [eax]
// 005d7a48  89642420             mov dword ptr [esp + 0x20], esp
// 005d7a4c  d95004               fst dword ptr [eax + 4]
// 005d7a4f  8bce                 mov ecx, esi
// 005d7a51  d905b8c38100         fld dword ptr [0x81c3b8]
// 005d7a57  d95008               fst dword ptr [eax + 8]
// 005d7a5a  8d442410             lea eax, [esp + 0x10]
// 005d7a5e  d95c2414             fstp dword ptr [esp + 0x14]
// 005d7a62  50                   push eax
// 005d7a63  d9542414             fst dword ptr [esp + 0x14]
// 005d7a67  d95c241c             fstp dword ptr [esp + 0x1c]
// 005d7a6b  e82011f4ff           call 0x518b90
// 005d7a70  d9ee                 fldz 
// 005d7a72  8bc6                 mov eax, esi
// 005d7a74  d95624               fst dword ptr [esi + 0x24]
// 005d7a77  d905b8c38100         fld dword ptr [0x81c3b8]
// 005d7a7d  d95e28               fstp dword ptr [esi + 0x28]
// 005d7a80  d95e2c               fstp dword ptr [esi + 0x2c]
// 005d7a83  5e                   pop esi
// 005d7a84  83c40c               add esp, 0xc
// 005d7a87  c20400               ret 4
// library rbxgs/humanoid\Humanoid.cpp (function ?getRightArmGrip@Humanoid@RBX@@QBE?AVCoordinateFrame@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
