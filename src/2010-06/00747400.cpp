// roc 2010-06 00747400  unit: RBX::D6Link  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00747400
//
// 00747400  8b542404             mov edx, dword ptr [esp + 4]
// 00747404  83ec30               sub esp, 0x30
// 00747407  53                   push ebx
// 00747408  8bd9                 mov ebx, ecx
// 0074740a  56                   push esi
// 0074740b  57                   push edi
// 0074740c  8d4308               lea eax, [ebx + 8]
// 0074740f  8bf8                 mov edi, eax
// 00747411  8bf2                 mov esi, edx
// 00747413  b909000000           mov ecx, 9
// 00747418  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0074741a  d94224               fld dword ptr [edx + 0x24]
// 0074741d  d95824               fstp dword ptr [eax + 0x24]
// 00747420  d94228               fld dword ptr [edx + 0x28]
// 00747423  d95828               fstp dword ptr [eax + 0x28]
// 00747426  d9422c               fld dword ptr [edx + 0x2c]
// 00747429  d9582c               fstp dword ptr [eax + 0x2c]
// 0074742c  8b542444             mov edx, dword ptr [esp + 0x44]
// 00747430  8d4338               lea eax, [ebx + 0x38]
// 00747433  8bf8                 mov edi, eax
// 00747435  8bf2                 mov esi, edx
// 00747437  b909000000           mov ecx, 9
// 0074743c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0074743e  d94224               fld dword ptr [edx + 0x24]
// 00747441  d95824               fstp dword ptr [eax + 0x24]
// 00747444  d94228               fld dword ptr [edx + 0x28]
// 00747447  d95828               fstp dword ptr [eax + 0x28]
// 0074744a  d9422c               fld dword ptr [edx + 0x2c]
// 0074744d  d9582c               fstp dword ptr [eax + 0x2c]
// 00747450  8d44240c             lea eax, [esp + 0xc]
// 00747454  50                   push eax
// 00747455  8bca                 mov ecx, edx
// 00747457  e854b4d4ff           call 0x4928b0
// 0074745c  8d5368               lea edx, [ebx + 0x68]
// 0074745f  b909000000           mov ecx, 9
// 00747464  8bf0                 mov esi, eax
// 00747466  8bfa                 mov edi, edx
// 00747468  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0074746a  d94024               fld dword ptr [eax + 0x24]
// 0074746d  d95a24               fstp dword ptr [edx + 0x24]
// 00747470  d94028               fld dword ptr [eax + 0x28]
// 00747473  d95a28               fstp dword ptr [edx + 0x28]
// 00747476  d9402c               fld dword ptr [eax + 0x2c]
// 00747479  d95a2c               fstp dword ptr [edx + 0x2c]
// 0074747c  5f                   pop edi
// 0074747d  5e                   pop esi
// 0074747e  5b                   pop ebx
// 0074747f  83c430               add esp, 0x30
// 00747482  c20800               ret 8
// library openrbx-client/App\v8kernel\Link.cpp (function ?reset@Link@RBX@@QAEXABVCoordinateFrame@G3D@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Link.cpp
