// roc 2007-08 0060a0a0  unit: RBX::RotatePJoint  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060a0a0
//
// 0060a0a0  53                   push ebx
// 0060a0a1  55                   push ebp
// 0060a0a2  56                   push esi
// 0060a0a3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0060a0a7  85f6                 test esi, esi
// 0060a0a9  8be9                 mov ebp, ecx
// 0060a0ab  8d4528               lea eax, [ebp + 0x28]
// 0060a0ae  7403                 je 0x60a0b3
// 0060a0b0  8d4558               lea eax, [ebp + 0x58]
// 0060a0b3  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0060a0b7  50                   push eax
// 0060a0b8  8bcb                 mov ecx, ebx
// 0060a0ba  e82190e6ff           call 0x4730e0
// 0060a0bf  84c0                 test al, al
// 0060a0c1  745b                 je 0x60a11e
// 0060a0c3  85f6                 test esi, esi
// 0060a0c5  57                   push edi
// 0060a0c6  b909000000           mov ecx, 9
// 0060a0cb  8bf3                 mov esi, ebx
// 0060a0cd  8d4528               lea eax, [ebp + 0x28]
// 0060a0d0  7403                 je 0x60a0d5
// 0060a0d2  8d4558               lea eax, [ebp + 0x58]
// 0060a0d5  8bf8                 mov edi, eax
// 0060a0d7  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0060a0d9  d94324               fld dword ptr [ebx + 0x24]
// 0060a0dc  d95824               fstp dword ptr [eax + 0x24]
// 0060a0df  d94328               fld dword ptr [ebx + 0x28]
// 0060a0e2  d95828               fstp dword ptr [eax + 0x28]
// 0060a0e5  d9432c               fld dword ptr [ebx + 0x2c]
// 0060a0e8  d9582c               fstp dword ptr [eax + 0x2c]
// 0060a0eb  837d0400             cmp dword ptr [ebp + 4], 0
// 0060a0ef  5f                   pop edi
// 0060a0f0  742c                 je 0x60a11e
// 0060a0f2  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0060a0f5  8b01                 mov eax, dword ptr [ecx]
// 0060a0f7  8b5004               mov edx, dword ptr [eax + 4]
// 0060a0fa  ffd2                 call edx
// 0060a0fc  83f808               cmp eax, 8
// 0060a0ff  8b4504               mov eax, dword ptr [ebp + 4]
// 0060a102  7503                 jne 0x60a107
// 0060a104  8b4004               mov eax, dword ptr [eax + 4]
// 0060a107  8b700c               mov esi, dword ptr [eax + 0xc]
// 0060a10a  85f6                 test esi, esi
// 0060a10c  7410                 je 0x60a11e
// 0060a10e  55                   push ebp
// 0060a10f  8bce                 mov ecx, esi
// 0060a111  e88a02faff           call 0x5aa3a0
// 0060a116  55                   push ebp
// 0060a117  8bce                 mov ecx, esi
// 0060a119  e8e2fdf9ff           call 0x5a9f00
// 0060a11e  5e                   pop esi
// 0060a11f  5d                   pop ebp
// 0060a120  5b                   pop ebx
// 0060a121  c20800               ret 8
// library openrbx-client/App\v8world\Joint.cpp (function ?setJointCoord@Joint@RBX@@QAEXHABVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Joint.cpp
