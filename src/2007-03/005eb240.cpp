// roc 2007-03 005eb240  unit: seg_005e0000  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005eb240
//
// 005eb240  53                   push ebx
// 005eb241  55                   push ebp
// 005eb242  56                   push esi
// 005eb243  8b742410             mov esi, dword ptr [esp + 0x10]
// 005eb247  85f6                 test esi, esi
// 005eb249  8be9                 mov ebp, ecx
// 005eb24b  8d4528               lea eax, [ebp + 0x28]
// 005eb24e  7403                 je 0x5eb253
// 005eb250  8d4558               lea eax, [ebp + 0x58]
// 005eb253  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005eb257  50                   push eax
// 005eb258  8bcb                 mov ecx, ebx
// 005eb25a  e8717fe8ff           call 0x4731d0
// 005eb25f  84c0                 test al, al
// 005eb261  745b                 je 0x5eb2be
// 005eb263  85f6                 test esi, esi
// 005eb265  57                   push edi
// 005eb266  b909000000           mov ecx, 9
// 005eb26b  8bf3                 mov esi, ebx
// 005eb26d  8d4528               lea eax, [ebp + 0x28]
// 005eb270  7403                 je 0x5eb275
// 005eb272  8d4558               lea eax, [ebp + 0x58]
// 005eb275  8bf8                 mov edi, eax
// 005eb277  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005eb279  d94324               fld dword ptr [ebx + 0x24]
// 005eb27c  d95824               fstp dword ptr [eax + 0x24]
// 005eb27f  d94328               fld dword ptr [ebx + 0x28]
// 005eb282  d95828               fstp dword ptr [eax + 0x28]
// 005eb285  d9432c               fld dword ptr [ebx + 0x2c]
// 005eb288  d9582c               fstp dword ptr [eax + 0x2c]
// 005eb28b  837d0400             cmp dword ptr [ebp + 4], 0
// 005eb28f  5f                   pop edi
// 005eb290  742c                 je 0x5eb2be
// 005eb292  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005eb295  8b01                 mov eax, dword ptr [ecx]
// 005eb297  8b5004               mov edx, dword ptr [eax + 4]
// 005eb29a  ffd2                 call edx
// 005eb29c  83f808               cmp eax, 8
// 005eb29f  8b4504               mov eax, dword ptr [ebp + 4]
// 005eb2a2  7503                 jne 0x5eb2a7
// 005eb2a4  8b4004               mov eax, dword ptr [eax + 4]
// 005eb2a7  8b700c               mov esi, dword ptr [eax + 0xc]
// 005eb2aa  85f6                 test esi, esi
// 005eb2ac  7410                 je 0x5eb2be
// 005eb2ae  55                   push ebp
// 005eb2af  8bce                 mov ecx, esi
// 005eb2b1  e8aa2cfcff           call 0x5adf60
// 005eb2b6  55                   push ebp
// 005eb2b7  8bce                 mov ecx, esi
// 005eb2b9  e80228fcff           call 0x5adac0
// 005eb2be  5e                   pop esi
// 005eb2bf  5d                   pop ebp
// 005eb2c0  5b                   pop ebx
// 005eb2c1  c20800               ret 8
// library openrbx-client/App\v8world\Joint.cpp (function ?setJointCoord@Joint@RBX@@QAEXHABVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Joint.cpp
