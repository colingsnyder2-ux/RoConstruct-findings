// roc 2009-06 0066e030  unit: RBX::VHumanoid::?$EventDesc  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066e030
//
// 0066e030  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066e034  83ec30               sub esp, 0x30
// 0066e037  56                   push esi
// 0066e038  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0066e03c  57                   push edi
// 0066e03d  50                   push eax
// 0066e03e  8d4e24               lea ecx, [esi + 0x24]
// 0066e041  51                   push ecx
// 0066e042  8d542410             lea edx, [esp + 0x10]
// 0066e046  52                   push edx
// 0066e047  e8b4feffff           call 0x66df00
// 0066e04c  8bf8                 mov edi, eax
// 0066e04e  8d442420             lea eax, [esp + 0x20]
// 0066e052  56                   push esi
// 0066e053  50                   push eax
// 0066e054  e857eeffff           call 0x66ceb0
// 0066e059  8b742450             mov esi, dword ptr [esp + 0x50]
// 0066e05d  83c414               add esp, 0x14
// 0066e060  50                   push eax
// 0066e061  8bce                 mov ecx, esi
// 0066e063  e818bfe2ff           call 0x499f80
// 0066e068  d907                 fld dword ptr [edi]
// 0066e06a  d95e24               fstp dword ptr [esi + 0x24]
// 0066e06d  8bc6                 mov eax, esi
// 0066e06f  d94704               fld dword ptr [edi + 4]
// 0066e072  d95e28               fstp dword ptr [esi + 0x28]
// 0066e075  d94708               fld dword ptr [edi + 8]
// 0066e078  5f                   pop edi
// 0066e079  d95e2c               fstp dword ptr [esi + 0x2c]
// 0066e07c  5e                   pop esi
// 0066e07d  83c430               add esp, 0x30
// 0066e080  c3                   ret 
// library rbxgs/util\Math.cpp (function ?snapToGrid@Math@RBX@@SA?AVCoordinateFrame@G3D@@ABV34@ABVVector3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
