// roc 2010-06 00491d60  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00491d60
//
// 00491d60  8b442404             mov eax, dword ptr [esp + 4]
// 00491d64  83ec30               sub esp, 0x30
// 00491d67  53                   push ebx
// 00491d68  55                   push ebp
// 00491d69  8be9                 mov ebp, ecx
// 00491d6b  ff4578               inc dword ptr [ebp + 0x78]
// 00491d6e  56                   push esi
// 00491d6f  c6857808000001       mov byte ptr [ebp + 0x878], 1
// 00491d76  8d9da8070000         lea ebx, [ebp + 0x7a8]
// 00491d7c  57                   push edi
// 00491d7d  8bf0                 mov esi, eax
// 00491d7f  b909000000           mov ecx, 9
// 00491d84  8bfb                 mov edi, ebx
// 00491d86  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00491d88  d94024               fld dword ptr [eax + 0x24]
// 00491d8b  d95b24               fstp dword ptr [ebx + 0x24]
// 00491d8e  d94028               fld dword ptr [eax + 0x28]
// 00491d91  d95b28               fstp dword ptr [ebx + 0x28]
// 00491d94  d9402c               fld dword ptr [eax + 0x2c]
// 00491d97  d95b2c               fstp dword ptr [ebx + 0x2c]
// 00491d9a  6800170000           push 0x1700
// 00491d9f  ff1538ab9e00         call dword ptr [0x9eab38]
// 00491da5  53                   push ebx
// 00491da6  8d442414             lea eax, [esp + 0x14]
// 00491daa  50                   push eax
// 00491dab  8d8d08080000         lea ecx, [ebp + 0x808]
// 00491db1  e80aeeffff           call 0x490bc0
// 00491db6  50                   push eax
// 00491db7  e874ceffff           call 0x48ec30
// 00491dbc  83c404               add esp, 4
// 00491dbf  ff4570               inc dword ptr [ebp + 0x70]
// 00491dc2  5f                   pop edi
// 00491dc3  5e                   pop esi
// 00491dc4  5d                   pop ebp
// 00491dc5  5b                   pop ebx
// 00491dc6  83c430               add esp, 0x30
// 00491dc9  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setObjectToWorldMatrix@RenderDevice@G3D@@QAEXABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
