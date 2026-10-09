// roc 2008-06 00613da0  unit: RBX::RevoluteLink  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00613da0
//
// 00613da0  8b542404             mov edx, dword ptr [esp + 4]
// 00613da4  83ec30               sub esp, 0x30
// 00613da7  53                   push ebx
// 00613da8  8bd9                 mov ebx, ecx
// 00613daa  56                   push esi
// 00613dab  57                   push edi
// 00613dac  8d4308               lea eax, [ebx + 8]
// 00613daf  8bf8                 mov edi, eax
// 00613db1  8bf2                 mov esi, edx
// 00613db3  b909000000           mov ecx, 9
// 00613db8  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00613dba  d94224               fld dword ptr [edx + 0x24]
// 00613dbd  d95824               fstp dword ptr [eax + 0x24]
// 00613dc0  d94228               fld dword ptr [edx + 0x28]
// 00613dc3  d95828               fstp dword ptr [eax + 0x28]
// 00613dc6  d9422c               fld dword ptr [edx + 0x2c]
// 00613dc9  d9582c               fstp dword ptr [eax + 0x2c]
// 00613dcc  8b542444             mov edx, dword ptr [esp + 0x44]
// 00613dd0  8d4338               lea eax, [ebx + 0x38]
// 00613dd3  8bf8                 mov edi, eax
// 00613dd5  8bf2                 mov esi, edx
// 00613dd7  b909000000           mov ecx, 9
// 00613ddc  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00613dde  d94224               fld dword ptr [edx + 0x24]
// 00613de1  d95824               fstp dword ptr [eax + 0x24]
// 00613de4  d94228               fld dword ptr [edx + 0x28]
// 00613de7  d95828               fstp dword ptr [eax + 0x28]
// 00613dea  d9422c               fld dword ptr [edx + 0x2c]
// 00613ded  d9582c               fstp dword ptr [eax + 0x2c]
// 00613df0  8d44240c             lea eax, [esp + 0xc]
// 00613df4  50                   push eax
// 00613df5  8bca                 mov ecx, edx
// 00613df7  e83445e6ff           call 0x478330
// 00613dfc  8d5368               lea edx, [ebx + 0x68]
// 00613dff  b909000000           mov ecx, 9
// 00613e04  8bf0                 mov esi, eax
// 00613e06  8bfa                 mov edi, edx
// 00613e08  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00613e0a  d94024               fld dword ptr [eax + 0x24]
// 00613e0d  d95a24               fstp dword ptr [edx + 0x24]
// 00613e10  d94028               fld dword ptr [eax + 0x28]
// 00613e13  d95a28               fstp dword ptr [edx + 0x28]
// 00613e16  d9402c               fld dword ptr [eax + 0x2c]
// 00613e19  d95a2c               fstp dword ptr [edx + 0x2c]
// 00613e1c  5f                   pop edi
// 00613e1d  5e                   pop esi
// 00613e1e  5b                   pop ebx
// 00613e1f  83c430               add esp, 0x30
// 00613e22  c20800               ret 8
// library openrbx-client/App\v8kernel\Link.cpp (function ?reset@Link@RBX@@QAEXABVCoordinateFrame@G3D@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Link.cpp
