// roc 2009-06 00666d80  unit: RBX::Humanoid  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00666d80
//
// 00666d80  83ec0c               sub esp, 0xc
// 00666d83  56                   push esi
// 00666d84  8b742414             mov esi, dword ptr [esp + 0x14]
// 00666d88  8bce                 mov ecx, esi
// 00666d8a  e8218be3ff           call 0x49f8b0
// 00666d8f  d9ee                 fldz 
// 00666d91  83ec0c               sub esp, 0xc
// 00666d94  8bc4                 mov eax, esp
// 00666d96  d910                 fst dword ptr [eax]
// 00666d98  89642420             mov dword ptr [esp + 0x20], esp
// 00666d9c  d95004               fst dword ptr [eax + 4]
// 00666d9f  8bce                 mov ecx, esi
// 00666da1  d90594758b00         fld dword ptr [0x8b7594]
// 00666da7  d95008               fst dword ptr [eax + 8]
// 00666daa  8d442410             lea eax, [esp + 0x10]
// 00666dae  d95c2414             fstp dword ptr [esp + 0x14]
// 00666db2  50                   push eax
// 00666db3  d9542414             fst dword ptr [esp + 0x14]
// 00666db7  d95c241c             fstp dword ptr [esp + 0x1c]
// 00666dbb  e87058f1ff           call 0x57c630
// 00666dc0  d9ee                 fldz 
// 00666dc2  8bc6                 mov eax, esi
// 00666dc4  d95624               fst dword ptr [esi + 0x24]
// 00666dc7  d90594758b00         fld dword ptr [0x8b7594]
// 00666dcd  d95e28               fstp dword ptr [esi + 0x28]
// 00666dd0  d95e2c               fstp dword ptr [esi + 0x2c]
// 00666dd3  5e                   pop esi
// 00666dd4  83c40c               add esp, 0xc
// 00666dd7  c20400               ret 4
// library rbxgs/humanoid\Humanoid.cpp (function ?getRightArmGrip@Humanoid@RBX@@QBE?AVCoordinateFrame@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
