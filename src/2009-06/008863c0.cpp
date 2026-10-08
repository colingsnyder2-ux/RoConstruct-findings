// from server: 100% by auto
// roc 2009-06 008863c0  unit: seg_00880000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008863c0
//
// 008863c0  6a44                 push 0x44
// 008863c2  e87126e9ff           call 0x718a38
// 008863c7  33c9                 xor ecx, ecx
// 008863c9  83c404               add esp, 4
// 008863cc  3bc1                 cmp eax, ecx
// 008863ce  7464                 je 0x886434
// 008863d0  380d59c29e00         cmp byte ptr [0x9ec259], cl
// 008863d6  ba20000000           mov edx, 0x20
// 008863db  89501c               mov dword ptr [eax + 0x1c], edx
// 008863de  895020               mov dword ptr [eax + 0x20], edx
// 008863e1  ba40000000           mov edx, 0x40
// 008863e6  884804               mov byte ptr [eax + 4], cl
// 008863e9  89480c               mov dword ptr [eax + 0xc], ecx
// 008863ec  894810               mov dword ptr [eax + 0x10], ecx
// 008863ef  894824               mov dword ptr [eax + 0x24], ecx
// 008863f2  894828               mov dword ptr [eax + 0x28], ecx
// 008863f5  89482c               mov dword ptr [eax + 0x2c], ecx
// 008863f8  894830               mov dword ptr [eax + 0x30], ecx
// 008863fb  894834               mov dword ptr [eax + 0x34], ecx
// 008863fe  895038               mov dword ptr [eax + 0x38], edx
// 00886401  89503c               mov dword ptr [eax + 0x3c], edx
// 00886404  8a1558c29e00         mov dl, byte ptr [0x9ec258]
// 0088640a  0f94c1               sete cl
// 0088640d  c70002000000         mov dword ptr [eax], 2
// 00886413  c740080c000000       mov dword ptr [eax + 8], 0xc
// 0088641a  c7401419880000       mov dword ptr [eax + 0x14], 0x8819
// 00886421  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 00886428  884840               mov byte ptr [eax + 0x40], cl
// 0088642b  885041               mov byte ptr [eax + 0x41], dl
// 0088642e  a3b4d3a300           mov dword ptr [0xa3d3b4], eax
// 00886433  c3                   ret 
// 00886434  890db4d3a300         mov dword ptr [0xa3d3b4], ecx
// 0088643a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
