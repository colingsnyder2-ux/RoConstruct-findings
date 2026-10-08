// roc 2008-06 00645870  unit: RBX::RigidJoint  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645870
//
// 00645870  83ec60               sub esp, 0x60
// 00645873  56                   push esi
// 00645874  8bf1                 mov esi, ecx
// 00645876  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00645879  8d4628               lea eax, [esi + 0x28]
// 0064587c  50                   push eax
// 0064587d  8d542438             lea edx, [esp + 0x38]
// 00645881  52                   push edx
// 00645882  e8392afaff           call 0x5e82c0
// 00645887  8bc8                 mov ecx, eax
// 00645889  e8720ee3ff           call 0x476700
// 0064588e  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00645891  83c658               add esi, 0x58
// 00645894  56                   push esi
// 00645895  8d442408             lea eax, [esp + 8]
// 00645899  50                   push eax
// 0064589a  e8212afaff           call 0x5e82c0
// 0064589f  8bc8                 mov ecx, eax
// 006458a1  e85a0ee3ff           call 0x476700
// 006458a6  d905b0b38200         fld dword ptr [0x82b3b0]
// 006458ac  83ec08               sub esp, 8
// 006458af  d9542404             fst dword ptr [esp + 4]
// 006458b3  8d4c240c             lea ecx, [esp + 0xc]
// 006458b7  d91c24               fstp dword ptr [esp]
// 006458ba  51                   push ecx
// 006458bb  8d542440             lea edx, [esp + 0x40]
// 006458bf  52                   push edx
// 006458c0  e8db89f9ff           call 0x5de2a0
// 006458c5  83c410               add esp, 0x10
// 006458c8  5e                   pop esi
// 006458c9  83c460               add esp, 0x60
// 006458cc  c3                   ret 
// library rbxgs/v8world\RigidJoint.cpp (function ?isAligned@RigidJoint@RBX@@UAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/RigidJoint.cpp
