// roc 2009-12 007a6a50  unit: RBX::RevoluteLink  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007a6a50
//
// 007a6a50  8b542404             mov edx, dword ptr [esp + 4]
// 007a6a54  83ec30               sub esp, 0x30
// 007a6a57  53                   push ebx
// 007a6a58  8bd9                 mov ebx, ecx
// 007a6a5a  56                   push esi
// 007a6a5b  57                   push edi
// 007a6a5c  8d4308               lea eax, [ebx + 8]
// 007a6a5f  8bf8                 mov edi, eax
// 007a6a61  8bf2                 mov esi, edx
// 007a6a63  b909000000           mov ecx, 9
// 007a6a68  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007a6a6a  d94224               fld dword ptr [edx + 0x24]
// 007a6a6d  d95824               fstp dword ptr [eax + 0x24]
// 007a6a70  d94228               fld dword ptr [edx + 0x28]
// 007a6a73  d95828               fstp dword ptr [eax + 0x28]
// 007a6a76  d9422c               fld dword ptr [edx + 0x2c]
// 007a6a79  d9582c               fstp dword ptr [eax + 0x2c]
// 007a6a7c  8b542444             mov edx, dword ptr [esp + 0x44]
// 007a6a80  8d4338               lea eax, [ebx + 0x38]
// 007a6a83  8bf8                 mov edi, eax
// 007a6a85  8bf2                 mov esi, edx
// 007a6a87  b909000000           mov ecx, 9
// 007a6a8c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007a6a8e  d94224               fld dword ptr [edx + 0x24]
// 007a6a91  d95824               fstp dword ptr [eax + 0x24]
// 007a6a94  d94228               fld dword ptr [edx + 0x28]
// 007a6a97  d95828               fstp dword ptr [eax + 0x28]
// 007a6a9a  d9422c               fld dword ptr [edx + 0x2c]
// 007a6a9d  d9582c               fstp dword ptr [eax + 0x2c]
// 007a6aa0  8d44240c             lea eax, [esp + 0xc]
// 007a6aa4  50                   push eax
// 007a6aa5  8bca                 mov ecx, edx
// 007a6aa7  e894b9d1ff           call 0x4c2440
// 007a6aac  8d5368               lea edx, [ebx + 0x68]
// 007a6aaf  b909000000           mov ecx, 9
// 007a6ab4  8bf0                 mov esi, eax
// 007a6ab6  8bfa                 mov edi, edx
// 007a6ab8  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007a6aba  d94024               fld dword ptr [eax + 0x24]
// 007a6abd  d95a24               fstp dword ptr [edx + 0x24]
// 007a6ac0  d94028               fld dword ptr [eax + 0x28]
// 007a6ac3  d95a28               fstp dword ptr [edx + 0x28]
// 007a6ac6  d9402c               fld dword ptr [eax + 0x2c]
// 007a6ac9  d95a2c               fstp dword ptr [edx + 0x2c]
// 007a6acc  5f                   pop edi
// 007a6acd  5e                   pop esi
// 007a6ace  5b                   pop ebx
// 007a6acf  83c430               add esp, 0x30
// 007a6ad2  c20800               ret 8
// library openrbx-client/App\v8kernel\Link.cpp (function ?reset@Link@RBX@@QAEXABVCoordinateFrame@G3D@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Link.cpp
