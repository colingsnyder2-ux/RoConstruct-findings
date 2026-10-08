// roc 2008-06 004777e0  unit: G3D::VARArea  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004777e0
//
// 004777e0  8b442404             mov eax, dword ptr [esp + 4]
// 004777e4  83ec30               sub esp, 0x30
// 004777e7  53                   push ebx
// 004777e8  55                   push ebp
// 004777e9  8be9                 mov ebp, ecx
// 004777eb  ff4578               inc dword ptr [ebp + 0x78]
// 004777ee  56                   push esi
// 004777ef  c6857808000001       mov byte ptr [ebp + 0x878], 1
// 004777f6  8d9da8070000         lea ebx, [ebp + 0x7a8]
// 004777fc  57                   push edi
// 004777fd  8bf0                 mov esi, eax
// 004777ff  b909000000           mov ecx, 9
// 00477804  8bfb                 mov edi, ebx
// 00477806  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00477808  d94024               fld dword ptr [eax + 0x24]
// 0047780b  d95b24               fstp dword ptr [ebx + 0x24]
// 0047780e  d94028               fld dword ptr [eax + 0x28]
// 00477811  d95b28               fstp dword ptr [ebx + 0x28]
// 00477814  d9402c               fld dword ptr [eax + 0x2c]
// 00477817  d95b2c               fstp dword ptr [ebx + 0x2c]
// 0047781a  6800170000           push 0x1700
// 0047781f  ff1580298000         call dword ptr [0x802980]
// 00477825  53                   push ebx
// 00477826  8d442414             lea eax, [esp + 0x14]
// 0047782a  50                   push eax
// 0047782b  8d8d08080000         lea ecx, [ebp + 0x808]
// 00477831  e8caeeffff           call 0x476700
// 00477836  50                   push eax
// 00477837  e8f4bb0000           call 0x483430
// 0047783c  83c404               add esp, 4
// 0047783f  ff4570               inc dword ptr [ebp + 0x70]
// 00477842  5f                   pop edi
// 00477843  5e                   pop esi
// 00477844  5d                   pop ebp
// 00477845  5b                   pop ebx
// 00477846  83c430               add esp, 0x30
// 00477849  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setObjectToWorldMatrix@RenderDevice@G3D@@QAEXABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
