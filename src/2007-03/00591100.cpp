// roc 2007-03 00591100  unit: seg_00590000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00591100
//
// 00591100  8b542404             mov edx, dword ptr [esp + 4]
// 00591104  53                   push ebx
// 00591105  8bd9                 mov ebx, ecx
// 00591107  56                   push esi
// 00591108  8d8334010000         lea eax, [ebx + 0x134]
// 0059110e  57                   push edi
// 0059110f  8bf2                 mov esi, edx
// 00591111  8bf8                 mov edi, eax
// 00591113  b909000000           mov ecx, 9
// 00591118  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0059111a  d94224               fld dword ptr [edx + 0x24]
// 0059111d  d95824               fstp dword ptr [eax + 0x24]
// 00591120  d94228               fld dword ptr [edx + 0x28]
// 00591123  d95828               fstp dword ptr [eax + 0x28]
// 00591126  d9422c               fld dword ptr [edx + 0x2c]
// 00591129  d9582c               fstp dword ptr [eax + 0x2c]
// 0059112c  8bcb                 mov ecx, ebx
// 0059112e  e84df8ffff           call 0x590980
// 00591133  5f                   pop edi
// 00591134  5e                   pop esi
// 00591135  5b                   pop ebx
// 00591136  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?setCameraCoordinateFrameNoLerp@Camera@RBX@@QAEXABVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
