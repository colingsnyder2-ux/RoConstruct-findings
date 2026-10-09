// roc 2009-12 004cb4c0  unit: G3D::VARArea  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cb4c0
//
// 004cb4c0  8b442404             mov eax, dword ptr [esp + 4]
// 004cb4c4  83ec30               sub esp, 0x30
// 004cb4c7  53                   push ebx
// 004cb4c8  55                   push ebp
// 004cb4c9  8be9                 mov ebp, ecx
// 004cb4cb  ff4578               inc dword ptr [ebp + 0x78]
// 004cb4ce  56                   push esi
// 004cb4cf  c6857808000001       mov byte ptr [ebp + 0x878], 1
// 004cb4d6  8d9da8070000         lea ebx, [ebp + 0x7a8]
// 004cb4dc  57                   push edi
// 004cb4dd  8bf0                 mov esi, eax
// 004cb4df  b909000000           mov ecx, 9
// 004cb4e4  8bfb                 mov edi, ebx
// 004cb4e6  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004cb4e8  d94024               fld dword ptr [eax + 0x24]
// 004cb4eb  d95b24               fstp dword ptr [ebx + 0x24]
// 004cb4ee  d94028               fld dword ptr [eax + 0x28]
// 004cb4f1  d95b28               fstp dword ptr [ebx + 0x28]
// 004cb4f4  d9402c               fld dword ptr [eax + 0x2c]
// 004cb4f7  d95b2c               fstp dword ptr [ebx + 0x2c]
// 004cb4fa  6800170000           push 0x1700
// 004cb4ff  ff15acba9800         call dword ptr [0x98baac]
// 004cb505  53                   push ebx
// 004cb506  8d442414             lea eax, [esp + 0x14]
// 004cb50a  50                   push eax
// 004cb50b  8d8d08080000         lea ecx, [ebp + 0x808]
// 004cb511  e8ca23fbff           call 0x47d8e0
// 004cb516  50                   push eax
// 004cb517  e824e90000           call 0x4d9e40
// 004cb51c  83c404               add esp, 4
// 004cb51f  ff4570               inc dword ptr [ebp + 0x70]
// 004cb522  5f                   pop edi
// 004cb523  5e                   pop esi
// 004cb524  5d                   pop ebp
// 004cb525  5b                   pop ebx
// 004cb526  83c430               add esp, 0x30
// 004cb529  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setObjectToWorldMatrix@RenderDevice@G3D@@QAEXABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
