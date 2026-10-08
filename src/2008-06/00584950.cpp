// roc 2008-06 00584950  unit: RBX::ModelInstance  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584950
//
// 00584950  8b4104               mov eax, dword ptr [ecx + 4]
// 00584953  8b5004               mov edx, dword ptr [eax + 4]
// 00584956  8b440a04             mov eax, dword ptr [edx + ecx + 4]
// 0058495a  8b00                 mov eax, dword ptr [eax]
// 0058495c  83ec30               sub esp, 0x30
// 0058495f  56                   push esi
// 00584960  8d4c0a04             lea ecx, [edx + ecx + 4]
// 00584964  57                   push edi
// 00584965  8d542408             lea edx, [esp + 8]
// 00584969  52                   push edx
// 0058496a  ffd0                 call eax
// 0058496c  8b542440             mov edx, dword ptr [esp + 0x40]
// 00584970  b909000000           mov ecx, 9
// 00584975  8bf0                 mov esi, eax
// 00584977  8bfa                 mov edi, edx
// 00584979  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0058497b  d94024               fld dword ptr [eax + 0x24]
// 0058497e  d95a24               fstp dword ptr [edx + 0x24]
// 00584981  d94028               fld dword ptr [eax + 0x28]
// 00584984  d95a28               fstp dword ptr [edx + 0x28]
// 00584987  d9402c               fld dword ptr [eax + 0x2c]
// 0058498a  d95a2c               fstp dword ptr [edx + 0x2c]
// 0058498d  5f                   pop edi
// 0058498e  5e                   pop esi
// 0058498f  83c430               add esp, 0x30
// 00584992  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?stepGoalAndFocus@ICameraSubject@RBX@@UAEXAAVCoordinateFrame@G3D@@0_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
