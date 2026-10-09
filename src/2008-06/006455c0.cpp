// roc 2008-06 006455c0  unit: RBX::HUMAN::Climbing  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006455c0
//
// 006455c0  8b442408             mov eax, dword ptr [esp + 8]
// 006455c4  83ec30               sub esp, 0x30
// 006455c7  53                   push ebx
// 006455c8  55                   push ebp
// 006455c9  56                   push esi
// 006455ca  57                   push edi
// 006455cb  8bd9                 mov ebx, ecx
// 006455cd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006455d1  50                   push eax
// 006455d2  51                   push ecx
// 006455d3  8bcb                 mov ecx, ebx
// 006455d5  e8863c0100           call 0x659260
// 006455da  33c0                 xor eax, eax
// 006455dc  8d6b28               lea ebp, [ebx + 0x28]
// 006455df  8bcd                 mov ecx, ebp
// 006455e1  c70344ad8400         mov dword ptr [ebx], 0x84ad44
// 006455e7  894320               mov dword ptr [ebx + 0x20], eax
// 006455ea  884324               mov byte ptr [ebx + 0x24], al
// 006455ed  e8de2ce3ff           call 0x4782d0
// 006455f2  8d4b58               lea ecx, [ebx + 0x58]
// 006455f5  e8d62ce3ff           call 0x4782d0
// 006455fa  d90504e78100         fld dword ptr [0x81e704]
// 00645600  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00645604  51                   push ecx
// 00645605  d91c24               fstp dword ptr [esp]
// 00645608  52                   push edx
// 00645609  8d442418             lea eax, [esp + 0x18]
// 0064560d  50                   push eax
// 0064560e  e8bd98f9ff           call 0x5deed0
// 00645613  8bf0                 mov esi, eax
// 00645615  b909000000           mov ecx, 9
// 0064561a  8bfd                 mov edi, ebp
// 0064561c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0064561e  d94024               fld dword ptr [eax + 0x24]
// 00645621  d95d24               fstp dword ptr [ebp + 0x24]
// 00645624  d94028               fld dword ptr [eax + 0x28]
// 00645627  d95d28               fstp dword ptr [ebp + 0x28]
// 0064562a  d9402c               fld dword ptr [eax + 0x2c]
// 0064562d  d95d2c               fstp dword ptr [ebp + 0x2c]
// 00645630  d90504e78100         fld dword ptr [0x81e704]
// 00645636  d95c2408             fstp dword ptr [esp + 8]
// 0064563a  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0064563e  83c408               add esp, 8
// 00645641  51                   push ecx
// 00645642  8d542418             lea edx, [esp + 0x18]
// 00645646  52                   push edx
// 00645647  e88498f9ff           call 0x5deed0
// 0064564c  8d5358               lea edx, [ebx + 0x58]
// 0064564f  8bf0                 mov esi, eax
// 00645651  83c40c               add esp, 0xc
// 00645654  b909000000           mov ecx, 9
// 00645659  8bfa                 mov edi, edx
// 0064565b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0064565d  d94024               fld dword ptr [eax + 0x24]
// 00645660  d95a24               fstp dword ptr [edx + 0x24]
// 00645663  d94028               fld dword ptr [eax + 0x28]
// 00645666  d95a28               fstp dword ptr [edx + 0x28]
// 00645669  d9402c               fld dword ptr [eax + 0x2c]
// 0064566c  d95a2c               fstp dword ptr [edx + 0x2c]
// 0064566f  5f                   pop edi
// 00645670  5e                   pop esi
// 00645671  5d                   pop ebp
// 00645672  8bc3                 mov eax, ebx
// 00645674  5b                   pop ebx
// 00645675  83c430               add esp, 0x30
// 00645678  c21000               ret 0x10
// library openrbx-client/App\v8world\Joint.cpp (function ??0Joint@RBX@@IAE@PAVPrimitive@1@0ABVCoordinateFrame@G3D@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Joint.cpp
