// roc 2012-06 008be380  unit: RBX::D6Link  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008be380
//
// 008be380  8b542404             mov edx, dword ptr [esp + 4]
// 008be384  83ec30               sub esp, 0x30
// 008be387  53                   push ebx
// 008be388  8bd9                 mov ebx, ecx
// 008be38a  56                   push esi
// 008be38b  57                   push edi
// 008be38c  8d4308               lea eax, [ebx + 8]
// 008be38f  8bf8                 mov edi, eax
// 008be391  8bf2                 mov esi, edx
// 008be393  b909000000           mov ecx, 9
// 008be398  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 008be39a  d94224               fld dword ptr [edx + 0x24]
// 008be39d  d95824               fstp dword ptr [eax + 0x24]
// 008be3a0  d94228               fld dword ptr [edx + 0x28]
// 008be3a3  d95828               fstp dword ptr [eax + 0x28]
// 008be3a6  d9422c               fld dword ptr [edx + 0x2c]
// 008be3a9  d9582c               fstp dword ptr [eax + 0x2c]
// 008be3ac  8b542444             mov edx, dword ptr [esp + 0x44]
// 008be3b0  8d4338               lea eax, [ebx + 0x38]
// 008be3b3  8bf8                 mov edi, eax
// 008be3b5  8bf2                 mov esi, edx
// 008be3b7  b909000000           mov ecx, 9
// 008be3bc  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 008be3be  d94224               fld dword ptr [edx + 0x24]
// 008be3c1  d95824               fstp dword ptr [eax + 0x24]
// 008be3c4  d94228               fld dword ptr [edx + 0x28]
// 008be3c7  d95828               fstp dword ptr [eax + 0x28]
// 008be3ca  d9422c               fld dword ptr [edx + 0x2c]
// 008be3cd  d9582c               fstp dword ptr [eax + 0x2c]
// 008be3d0  8d44240c             lea eax, [esp + 0xc]
// 008be3d4  50                   push eax
// 008be3d5  8bca                 mov ecx, edx
// 008be3d7  e85494c5ff           call 0x517830
// 008be3dc  8d5368               lea edx, [ebx + 0x68]
// 008be3df  b909000000           mov ecx, 9
// 008be3e4  8bf0                 mov esi, eax
// 008be3e6  8bfa                 mov edi, edx
// 008be3e8  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 008be3ea  d94024               fld dword ptr [eax + 0x24]
// 008be3ed  d95a24               fstp dword ptr [edx + 0x24]
// 008be3f0  d94028               fld dword ptr [eax + 0x28]
// 008be3f3  d95a28               fstp dword ptr [edx + 0x28]
// 008be3f6  d9402c               fld dword ptr [eax + 0x2c]
// 008be3f9  d95a2c               fstp dword ptr [edx + 0x2c]
// 008be3fc  5f                   pop edi
// 008be3fd  5e                   pop esi
// 008be3fe  5b                   pop ebx
// 008be3ff  83c430               add esp, 0x30
// 008be402  c20800               ret 8
// library openrbx-client/App\v8kernel\Link.cpp (function ?reset@Link@RBX@@QAEXABVCoordinateFrame@G3D@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Link.cpp
