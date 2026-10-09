// roc 2009-06 006ceb20  unit: RBX::RevoluteLink  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ceb20
//
// 006ceb20  8b542404             mov edx, dword ptr [esp + 4]
// 006ceb24  83ec30               sub esp, 0x30
// 006ceb27  53                   push ebx
// 006ceb28  8bd9                 mov ebx, ecx
// 006ceb2a  56                   push esi
// 006ceb2b  57                   push edi
// 006ceb2c  8d4308               lea eax, [ebx + 8]
// 006ceb2f  8bf8                 mov edi, eax
// 006ceb31  8bf2                 mov esi, edx
// 006ceb33  b909000000           mov ecx, 9
// 006ceb38  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006ceb3a  d94224               fld dword ptr [edx + 0x24]
// 006ceb3d  d95824               fstp dword ptr [eax + 0x24]
// 006ceb40  d94228               fld dword ptr [edx + 0x28]
// 006ceb43  d95828               fstp dword ptr [eax + 0x28]
// 006ceb46  d9422c               fld dword ptr [edx + 0x2c]
// 006ceb49  d9582c               fstp dword ptr [eax + 0x2c]
// 006ceb4c  8b542444             mov edx, dword ptr [esp + 0x44]
// 006ceb50  8d4338               lea eax, [ebx + 0x38]
// 006ceb53  8bf8                 mov edi, eax
// 006ceb55  8bf2                 mov esi, edx
// 006ceb57  b909000000           mov ecx, 9
// 006ceb5c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006ceb5e  d94224               fld dword ptr [edx + 0x24]
// 006ceb61  d95824               fstp dword ptr [eax + 0x24]
// 006ceb64  d94228               fld dword ptr [edx + 0x28]
// 006ceb67  d95828               fstp dword ptr [eax + 0x28]
// 006ceb6a  d9422c               fld dword ptr [edx + 0x2c]
// 006ceb6d  d9582c               fstp dword ptr [eax + 0x2c]
// 006ceb70  8d44240c             lea eax, [esp + 0xc]
// 006ceb74  50                   push eax
// 006ceb75  8bca                 mov ecx, edx
// 006ceb77  e8940dddff           call 0x49f910
// 006ceb7c  8d5368               lea edx, [ebx + 0x68]
// 006ceb7f  b909000000           mov ecx, 9
// 006ceb84  8bf0                 mov esi, eax
// 006ceb86  8bfa                 mov edi, edx
// 006ceb88  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006ceb8a  d94024               fld dword ptr [eax + 0x24]
// 006ceb8d  d95a24               fstp dword ptr [edx + 0x24]
// 006ceb90  d94028               fld dword ptr [eax + 0x28]
// 006ceb93  d95a28               fstp dword ptr [edx + 0x28]
// 006ceb96  d9402c               fld dword ptr [eax + 0x2c]
// 006ceb99  d95a2c               fstp dword ptr [edx + 0x2c]
// 006ceb9c  5f                   pop edi
// 006ceb9d  5e                   pop esi
// 006ceb9e  5b                   pop ebx
// 006ceb9f  83c430               add esp, 0x30
// 006ceba2  c20800               ret 8
// library openrbx-client/App\v8kernel\Link.cpp (function ?reset@Link@RBX@@QAEXABVCoordinateFrame@G3D@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Link.cpp
