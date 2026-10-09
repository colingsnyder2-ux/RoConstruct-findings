// roc 2007-03 005a2dc0  unit: seg_005a0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a2dc0
//
// 005a2dc0  b801000000           mov eax, 1
// 005a2dc5  840518f08b00         test byte ptr [0x8bf018], al
// 005a2dcb  752a                 jne 0x5a2df7
// 005a2dcd  d90578537b00         fld dword ptr [0x7b5378]
// 005a2dd3  090518f08b00         or dword ptr [0x8bf018], eax
// 005a2dd9  d91d0cf08b00         fstp dword ptr [0x8bf00c]
// 005a2ddf  d90574537b00         fld dword ptr [0x7b5374]
// 005a2de5  d91d10f08b00         fstp dword ptr [0x8bf010]
// 005a2deb  d90570537b00         fld dword ptr [0x7b5370]
// 005a2df1  d91d14f08b00         fstp dword ptr [0x8bf014]
// 005a2df7  b80cf08b00           mov eax, 0x8bf00c
// 005a2dfc  c3                   ret 
// library openrbx-client/App\humanoid\Humanoid.cpp (function ?lightGreen@Color@RBX@@SAABVColor3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
