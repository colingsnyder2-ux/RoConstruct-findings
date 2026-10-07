// roc 2009-06 00886340  unit: seg_00880000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886340
//
// 00886340  6a44                 push 0x44
// 00886342  e8f126e9ff           call 0x718a38
// 00886347  33c9                 xor ecx, ecx
// 00886349  83c404               add esp, 4
// 0088634c  3bc1                 cmp eax, ecx
// 0088634e  7464                 je 0x8863b4
// 00886350  380d59c29e00         cmp byte ptr [0x9ec259], cl
// 00886356  ba10000000           mov edx, 0x10
// 0088635b  89501c               mov dword ptr [eax + 0x1c], edx
// 0088635e  895020               mov dword ptr [eax + 0x20], edx
// 00886361  ba20000000           mov edx, 0x20
// 00886366  884804               mov byte ptr [eax + 4], cl
// 00886369  89480c               mov dword ptr [eax + 0xc], ecx
// 0088636c  894810               mov dword ptr [eax + 0x10], ecx
// 0088636f  894824               mov dword ptr [eax + 0x24], ecx
// 00886372  894828               mov dword ptr [eax + 0x28], ecx
// 00886375  89482c               mov dword ptr [eax + 0x2c], ecx
// 00886378  894830               mov dword ptr [eax + 0x30], ecx
// 0088637b  894834               mov dword ptr [eax + 0x34], ecx
// 0088637e  895038               mov dword ptr [eax + 0x38], edx
// 00886381  89503c               mov dword ptr [eax + 0x3c], edx
// 00886384  8a1558c29e00         mov dl, byte ptr [0x9ec258]
// 0088638a  0f94c1               sete cl
// 0088638d  c70002000000         mov dword ptr [eax], 2
// 00886393  c740080b000000       mov dword ptr [eax + 8], 0xb
// 0088639a  c740141f880000       mov dword ptr [eax + 0x14], 0x881f
// 008863a1  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 008863a8  884840               mov byte ptr [eax + 0x40], cl
// 008863ab  885041               mov byte ptr [eax + 0x41], dl
// 008863ae  a3d0d3a300           mov dword ptr [0xa3d3d0], eax
// 008863b3  c3                   ret 
// 008863b4  890dd0d3a300         mov dword ptr [0xa3d3d0], ecx
// 008863ba  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
