// roc 2009-06 00666680  unit: RBX::KernelJoint  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00666680
//
// 00666680  56                   push esi
// 00666681  e80a21f1ff           call 0x578790
// 00666686  8b742408             mov esi, dword ptr [esp + 8]
// 0066668a  50                   push eax
// 0066668b  8bce                 mov ecx, esi
// 0066668d  e8ee38e3ff           call 0x499f80
// 00666692  d9ee                 fldz 
// 00666694  d95624               fst dword ptr [esi + 0x24]
// 00666697  8bc6                 mov eax, esi
// 00666699  d9054cad8b00         fld dword ptr [0x8bad4c]
// 0066669f  d95e28               fstp dword ptr [esi + 0x28]
// 006666a2  d95e2c               fstp dword ptr [esi + 0x2c]
// 006666a5  5e                   pop esi
// 006666a6  c20400               ret 4
// library rbxgs/humanoid\Humanoid.cpp (function ?getTopOfHead@Humanoid@RBX@@QBE?AVCoordinateFrame@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
