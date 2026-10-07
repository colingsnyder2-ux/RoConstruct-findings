// roc 2009-06 00886440  unit: seg_00880000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886440
//
// 00886440  6a44                 push 0x44
// 00886442  e8f125e9ff           call 0x718a38
// 00886447  33c9                 xor ecx, ecx
// 00886449  83c404               add esp, 4
// 0088644c  3bc1                 cmp eax, ecx
// 0088644e  7465                 je 0x8864b5
// 00886450  884804               mov byte ptr [eax + 4], cl
// 00886453  894810               mov dword ptr [eax + 0x10], ecx
// 00886456  89481c               mov dword ptr [eax + 0x1c], ecx
// 00886459  894820               mov dword ptr [eax + 0x20], ecx
// 0088645c  ba05000000           mov edx, 5
// 00886461  894830               mov dword ptr [eax + 0x30], ecx
// 00886464  894834               mov dword ptr [eax + 0x34], ecx
// 00886467  b910000000           mov ecx, 0x10
// 0088646c  895024               mov dword ptr [eax + 0x24], edx
// 0088646f  895028               mov dword ptr [eax + 0x28], edx
// 00886472  89502c               mov dword ptr [eax + 0x2c], edx
// 00886475  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 0088647b  894838               mov dword ptr [eax + 0x38], ecx
// 0088647e  89483c               mov dword ptr [eax + 0x3c], ecx
// 00886481  8a0d59c29e00         mov cl, byte ptr [0x9ec259]
// 00886487  c70003000000         mov dword ptr [eax], 3
// 0088648d  c740080d000000       mov dword ptr [eax + 8], 0xd
// 00886494  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0088649b  c7401450800000       mov dword ptr [eax + 0x14], 0x8050
// 008864a2  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 008864a9  884840               mov byte ptr [eax + 0x40], cl
// 008864ac  885041               mov byte ptr [eax + 0x41], dl
// 008864af  a3ecd3a300           mov dword ptr [0xa3d3ec], eax
// 008864b4  c3                   ret 
// 008864b5  890decd3a300         mov dword ptr [0xa3d3ec], ecx
// 008864bb  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB5@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
