// roc 2008-06 005d7750  unit: RBX::Humanoid  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7750
//
// 005d7750  83ec30               sub esp, 0x30
// 005d7753  e8c8c6f3ff           call 0x513e20
// 005d7758  50                   push eax
// 005d7759  8d4c2404             lea ecx, [esp + 4]
// 005d775d  e8bebaf3ff           call 0x513220
// 005d7762  8b442438             mov eax, dword ptr [esp + 0x38]
// 005d7766  d900                 fld dword ptr [eax]
// 005d7768  d95c2424             fstp dword ptr [esp + 0x24]
// 005d776c  d94004               fld dword ptr [eax + 4]
// 005d776f  d95c2428             fstp dword ptr [esp + 0x28]
// 005d7773  d94008               fld dword ptr [eax + 8]
// 005d7776  d95c242c             fstp dword ptr [esp + 0x2c]
// 005d777a  e861d1f3ff           call 0x5148e0
// 005d777f  d9e8                 fld1 
// 005d7781  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005d7785  50                   push eax
// 005d7786  83ec08               sub esp, 8
// 005d7789  d95c2404             fstp dword ptr [esp + 4]
// 005d778d  8d44240c             lea eax, [esp + 0xc]
// 005d7791  d905f8498200         fld dword ptr [0x8249f8]
// 005d7797  d91c24               fstp dword ptr [esp]
// 005d779a  6a01                 push 1
// 005d779c  50                   push eax
// 005d779d  51                   push ecx
// 005d779e  e84dfc0900           call 0x6773f0
// 005d77a3  83c448               add esp, 0x48
// 005d77a6  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?renderWaypoint@Humanoid@RBX@@SAXPAVAdorn@2@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
