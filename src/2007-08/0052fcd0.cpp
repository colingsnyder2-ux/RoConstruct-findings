// roc 2007-08 0052fcd0  unit: RBX::ICameraSubject  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052fcd0
//
// 0052fcd0  8b4104               mov eax, dword ptr [ecx + 4]
// 0052fcd3  8b5004               mov edx, dword ptr [eax + 4]
// 0052fcd6  8b440a04             mov eax, dword ptr [edx + ecx + 4]
// 0052fcda  8b00                 mov eax, dword ptr [eax]
// 0052fcdc  83ec30               sub esp, 0x30
// 0052fcdf  56                   push esi
// 0052fce0  8d4c0a04             lea ecx, [edx + ecx + 4]
// 0052fce4  57                   push edi
// 0052fce5  8d542408             lea edx, [esp + 8]
// 0052fce9  52                   push edx
// 0052fcea  ffd0                 call eax
// 0052fcec  8b542440             mov edx, dword ptr [esp + 0x40]
// 0052fcf0  b909000000           mov ecx, 9
// 0052fcf5  8bf0                 mov esi, eax
// 0052fcf7  8bfa                 mov edi, edx
// 0052fcf9  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0052fcfb  d94024               fld dword ptr [eax + 0x24]
// 0052fcfe  d95a24               fstp dword ptr [edx + 0x24]
// 0052fd01  d94028               fld dword ptr [eax + 0x28]
// 0052fd04  d95a28               fstp dword ptr [edx + 0x28]
// 0052fd07  d9402c               fld dword ptr [eax + 0x2c]
// 0052fd0a  d95a2c               fstp dword ptr [edx + 0x2c]
// 0052fd0d  5f                   pop edi
// 0052fd0e  5e                   pop esi
// 0052fd0f  83c430               add esp, 0x30
// 0052fd12  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?stepGoalAndFocus@ICameraSubject@RBX@@UAEXAAVCoordinateFrame@G3D@@0_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
