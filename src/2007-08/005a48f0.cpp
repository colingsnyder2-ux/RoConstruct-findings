// roc 2007-08 005a48f0  unit: RBX::IControllable  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a48f0
//
// 005a48f0  56                   push esi
// 005a48f1  e80a5cf6ff           call 0x50a500
// 005a48f6  8b742408             mov esi, dword ptr [esp + 8]
// 005a48fa  50                   push eax
// 005a48fb  8bce                 mov ecx, esi
// 005a48fd  e8ce4cf6ff           call 0x5095d0
// 005a4902  d9ee                 fldz 
// 005a4904  d95624               fst dword ptr [esi + 0x24]
// 005a4907  8bc6                 mov eax, esi
// 005a4909  d9059c7e7900         fld dword ptr [0x797e9c]
// 005a490f  d95e28               fstp dword ptr [esi + 0x28]
// 005a4912  d95e2c               fstp dword ptr [esi + 0x2c]
// 005a4915  5e                   pop esi
// 005a4916  c20400               ret 4
// library rbxgs/humanoid\Humanoid.cpp (function ?getTopOfHead@Humanoid@RBX@@QBE?AVCoordinateFrame@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
