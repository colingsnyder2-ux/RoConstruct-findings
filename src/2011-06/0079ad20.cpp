// roc 2011-06 0079ad20  unit: RBX::D6Link  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0079ad20
//
// 0079ad20  8b542404             mov edx, dword ptr [esp + 4]
// 0079ad24  83ec30               sub esp, 0x30
// 0079ad27  53                   push ebx
// 0079ad28  8bd9                 mov ebx, ecx
// 0079ad2a  56                   push esi
// 0079ad2b  57                   push edi
// 0079ad2c  8d4308               lea eax, [ebx + 8]
// 0079ad2f  8bf8                 mov edi, eax
// 0079ad31  8bf2                 mov esi, edx
// 0079ad33  b909000000           mov ecx, 9
// 0079ad38  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0079ad3a  d94224               fld dword ptr [edx + 0x24]
// 0079ad3d  d95824               fstp dword ptr [eax + 0x24]
// 0079ad40  d94228               fld dword ptr [edx + 0x28]
// 0079ad43  d95828               fstp dword ptr [eax + 0x28]
// 0079ad46  d9422c               fld dword ptr [edx + 0x2c]
// 0079ad49  d9582c               fstp dword ptr [eax + 0x2c]
// 0079ad4c  8b542444             mov edx, dword ptr [esp + 0x44]
// 0079ad50  8d4338               lea eax, [ebx + 0x38]
// 0079ad53  8bf8                 mov edi, eax
// 0079ad55  8bf2                 mov esi, edx
// 0079ad57  b909000000           mov ecx, 9
// 0079ad5c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0079ad5e  d94224               fld dword ptr [edx + 0x24]
// 0079ad61  d95824               fstp dword ptr [eax + 0x24]
// 0079ad64  d94228               fld dword ptr [edx + 0x28]
// 0079ad67  d95828               fstp dword ptr [eax + 0x28]
// 0079ad6a  d9422c               fld dword ptr [edx + 0x2c]
// 0079ad6d  d9582c               fstp dword ptr [eax + 0x2c]
// 0079ad70  8d44240c             lea eax, [esp + 0xc]
// 0079ad74  50                   push eax
// 0079ad75  8bca                 mov ecx, edx
// 0079ad77  e8c478daff           call 0x542640
// 0079ad7c  8d5368               lea edx, [ebx + 0x68]
// 0079ad7f  b909000000           mov ecx, 9
// 0079ad84  8bf0                 mov esi, eax
// 0079ad86  8bfa                 mov edi, edx
// 0079ad88  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0079ad8a  d94024               fld dword ptr [eax + 0x24]
// 0079ad8d  d95a24               fstp dword ptr [edx + 0x24]
// 0079ad90  d94028               fld dword ptr [eax + 0x28]
// 0079ad93  d95a28               fstp dword ptr [edx + 0x28]
// 0079ad96  d9402c               fld dword ptr [eax + 0x2c]
// 0079ad99  d95a2c               fstp dword ptr [edx + 0x2c]
// 0079ad9c  5f                   pop edi
// 0079ad9d  5e                   pop esi
// 0079ad9e  5b                   pop ebx
// 0079ad9f  83c430               add esp, 0x30
// 0079ada2  c20800               ret 8
// library openrbx-client/App\v8kernel\Link.cpp (function ?reset@Link@RBX@@QAEXABVCoordinateFrame@G3D@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Link.cpp
