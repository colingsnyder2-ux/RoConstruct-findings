// roc 2007-08 00601630  unit: RBX::ScriptMouseCommand  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00601630
//
// 00601630  56                   push esi
// 00601631  8b742408             mov esi, dword ptr [esp + 8]
// 00601635  57                   push edi
// 00601636  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0060163a  57                   push edi
// 0060163b  8bce                 mov ecx, esi
// 0060163d  e88e7ff0ff           call 0x5095d0
// 00601642  d94724               fld dword ptr [edi + 0x24]
// 00601645  8b442414             mov eax, dword ptr [esp + 0x14]
// 00601649  d95e24               fstp dword ptr [esi + 0x24]
// 0060164c  d94728               fld dword ptr [edi + 0x28]
// 0060164f  83c024               add eax, 0x24
// 00601652  d95e28               fstp dword ptr [esi + 0x28]
// 00601655  50                   push eax
// 00601656  d9472c               fld dword ptr [edi + 0x2c]
// 00601659  8bce                 mov ecx, esi
// 0060165b  d95e2c               fstp dword ptr [esi + 0x2c]
// 0060165e  e8fdc8f1ff           call 0x51df60
// 00601663  5f                   pop edi
// 00601664  8bc6                 mov eax, esi
// 00601666  5e                   pop esi
// 00601667  c20c00               ret 0xc
// library rbxgs/v8datamodel\ICharacterSubject.cpp (function ?getFocusLookingAtGoal@ICharacterSubject@RBX@@AAE?AVCoordinateFrame@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ICharacterSubject.cpp
