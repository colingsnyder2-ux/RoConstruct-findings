// roc 2008-06 00641240  unit: RBX::AxisMoveTool  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00641240
//
// 00641240  56                   push esi
// 00641241  8b742408             mov esi, dword ptr [esp + 8]
// 00641245  57                   push edi
// 00641246  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0064124a  57                   push edi
// 0064124b  8bce                 mov ecx, esi
// 0064124d  e8ce1fedff           call 0x513220
// 00641252  d94724               fld dword ptr [edi + 0x24]
// 00641255  8b442414             mov eax, dword ptr [esp + 0x14]
// 00641259  d95e24               fstp dword ptr [esi + 0x24]
// 0064125c  d94728               fld dword ptr [edi + 0x28]
// 0064125f  83c024               add eax, 0x24
// 00641262  d95e28               fstp dword ptr [esi + 0x28]
// 00641265  50                   push eax
// 00641266  d9472c               fld dword ptr [edi + 0x2c]
// 00641269  8bce                 mov ecx, esi
// 0064126b  d95e2c               fstp dword ptr [esi + 0x2c]
// 0064126e  e8ad7bedff           call 0x518e20
// 00641273  5f                   pop edi
// 00641274  8bc6                 mov eax, esi
// 00641276  5e                   pop esi
// 00641277  c20c00               ret 0xc
// library rbxgs/v8datamodel\ICharacterSubject.cpp (function ?getFocusLookingAtGoal@ICharacterSubject@RBX@@AAE?AVCoordinateFrame@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ICharacterSubject.cpp
