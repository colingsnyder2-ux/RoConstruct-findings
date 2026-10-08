// roc 2007-08 005a4920  unit: RBX::IControllable  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4920
//
// 005a4920  83ec30               sub esp, 0x30
// 005a4923  e8d85bf6ff           call 0x50a500
// 005a4928  50                   push eax
// 005a4929  8d4c2404             lea ecx, [esp + 4]
// 005a492d  e89e4cf6ff           call 0x5095d0
// 005a4932  8b442438             mov eax, dword ptr [esp + 0x38]
// 005a4936  d900                 fld dword ptr [eax]
// 005a4938  d95c2424             fstp dword ptr [esp + 0x24]
// 005a493c  d94004               fld dword ptr [eax + 4]
// 005a493f  d95c2428             fstp dword ptr [esp + 0x28]
// 005a4943  d94008               fld dword ptr [eax + 8]
// 005a4946  d95c242c             fstp dword ptr [esp + 0x2c]
// 005a494a  e83167f6ff           call 0x50b080
// 005a494f  d9e8                 fld1 
// 005a4951  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a4955  50                   push eax
// 005a4956  83ec08               sub esp, 8
// 005a4959  d95c2404             fstp dword ptr [esp + 4]
// 005a495d  8d44240c             lea eax, [esp + 0xc]
// 005a4961  d90580b97a00         fld dword ptr [0x7ab980]
// 005a4967  d91c24               fstp dword ptr [esp]
// 005a496a  6a01                 push 1
// 005a496c  50                   push eax
// 005a496d  51                   push ecx
// 005a496e  e82d9e0800           call 0x62e7a0
// 005a4973  83c448               add esp, 0x48
// 005a4976  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?renderWaypoint@Humanoid@RBX@@SAXPAVAdorn@2@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
