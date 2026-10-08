// from server: 100% by auto
// roc 2009-06 008866c0  unit: seg_00880000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008866c0
//
// 008866c0  6a44                 push 0x44
// 008866c2  e87123e9ff           call 0x718a38
// 008866c7  33c9                 xor ecx, ecx
// 008866c9  83c404               add esp, 4
// 008866cc  3bc1                 cmp eax, ecx
// 008866ce  7465                 je 0x886735
// 008866d0  884804               mov byte ptr [eax + 4], cl
// 008866d3  894810               mov dword ptr [eax + 0x10], ecx
// 008866d6  89481c               mov dword ptr [eax + 0x1c], ecx
// 008866d9  894820               mov dword ptr [eax + 0x20], ecx
// 008866dc  ba20000000           mov edx, 0x20
// 008866e1  894830               mov dword ptr [eax + 0x30], ecx
// 008866e4  894834               mov dword ptr [eax + 0x34], ecx
// 008866e7  b960000000           mov ecx, 0x60
// 008866ec  895024               mov dword ptr [eax + 0x24], edx
// 008866ef  895028               mov dword ptr [eax + 0x28], edx
// 008866f2  89502c               mov dword ptr [eax + 0x2c], edx
// 008866f5  8a1558c29e00         mov dl, byte ptr [0x9ec258]
// 008866fb  894838               mov dword ptr [eax + 0x38], ecx
// 008866fe  89483c               mov dword ptr [eax + 0x3c], ecx
// 00886701  8a0d59c29e00         mov cl, byte ptr [0x9ec259]
// 00886707  c70003000000         mov dword ptr [eax], 3
// 0088670d  c7400812000000       mov dword ptr [eax + 8], 0x12
// 00886714  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0088671b  c7401415880000       mov dword ptr [eax + 0x14], 0x8815
// 00886722  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 00886729  884840               mov byte ptr [eax + 0x40], cl
// 0088672c  885041               mov byte ptr [eax + 0x41], dl
// 0088672f  a3a4d3a300           mov dword ptr [0xa3d3a4], eax
// 00886734  c3                   ret 
// 00886735  890da4d3a300         mov dword ptr [0xa3d3a4], ecx
// 0088673b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
