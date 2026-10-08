// roc 2008-06 00615c30  unit: RBX::Unlocked  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00615c30
//
// 00615c30  83ec14               sub esp, 0x14
// 00615c33  56                   push esi
// 00615c34  8b742420             mov esi, dword ptr [esp + 0x20]
// 00615c38  0fbf4612             movsx eax, word ptr [esi + 0x12]
// 00615c3c  0fbf4e10             movsx ecx, word ptr [esi + 0x10]
// 00615c40  89442420             mov dword ptr [esp + 0x20], eax
// 00615c44  83ec10               sub esp, 0x10
// 00615c47  8d542418             lea edx, [esp + 0x18]
// 00615c4b  db442430             fild dword ptr [esp + 0x30]
// 00615c4f  894c2430             mov dword ptr [esp + 0x30], ecx
// 00615c53  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00615c5b  d95c240c             fstp dword ptr [esp + 0xc]
// 00615c5f  db442430             fild dword ptr [esp + 0x30]
// 00615c63  d95c2408             fstp dword ptr [esp + 8]
// 00615c67  d9ee                 fldz 
// 00615c69  d9542404             fst dword ptr [esp + 4]
// 00615c6d  d91c24               fstp dword ptr [esp]
// 00615c70  52                   push edx
// 00615c71  e8da5ce4ff           call 0x45b950
// 00615c76  0fbf4e08             movsx ecx, word ptr [esi + 8]
// 00615c7a  83c414               add esp, 0x14
// 00615c7d  50                   push eax
// 00615c7e  0fbf460a             movsx eax, word ptr [esi + 0xa]
// 00615c82  8b742420             mov esi, dword ptr [esp + 0x20]
// 00615c86  89442424             mov dword ptr [esp + 0x24], eax
// 00615c8a  83ec08               sub esp, 8
// 00615c8d  db44242c             fild dword ptr [esp + 0x2c]
// 00615c91  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00615c95  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00615c99  8b11                 mov edx, dword ptr [ecx]
// 00615c9b  8b4208               mov eax, dword ptr [edx + 8]
// 00615c9e  d95c2404             fstp dword ptr [esp + 4]
// 00615ca2  db44242c             fild dword ptr [esp + 0x2c]
// 00615ca6  d91c24               fstp dword ptr [esp]
// 00615ca9  56                   push esi
// 00615caa  ffd0                 call eax
// 00615cac  8bc8                 mov ecx, eax
// 00615cae  e8cdaeefff           call 0x510b80
// 00615cb3  8bc6                 mov eax, esi
// 00615cb5  5e                   pop esi
// 00615cb6  83c414               add esp, 0x14
// 00615cb9  c3                   ret 
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?getUnitMouseRay@MouseCommand@RBX@@SA?AVRay@G3D@@ABVUIEvent@2@PAVICameraOwner@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp
