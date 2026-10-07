// roc 2007-08 0076e1e0  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076e1e0
//
// 0076e1e0  6a44                 push 0x44
// 0076e1e2  e80f1decff           call 0x62fef6
// 0076e1e7  33c9                 xor ecx, ecx
// 0076e1e9  83c404               add esp, 4
// 0076e1ec  3bc1                 cmp eax, ecx
// 0076e1ee  745f                 je 0x76e24f
// 0076e1f0  ba08000000           mov edx, 8
// 0076e1f5  884804               mov byte ptr [eax + 4], cl
// 0076e1f8  894810               mov dword ptr [eax + 0x10], ecx
// 0076e1fb  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076e1fe  895020               mov dword ptr [eax + 0x20], edx
// 0076e201  895024               mov dword ptr [eax + 0x24], edx
// 0076e204  895028               mov dword ptr [eax + 0x28], edx
// 0076e207  89502c               mov dword ptr [eax + 0x2c], edx
// 0076e20a  894830               mov dword ptr [eax + 0x30], ecx
// 0076e20d  894834               mov dword ptr [eax + 0x34], ecx
// 0076e210  884840               mov byte ptr [eax + 0x40], cl
// 0076e213  8a0d20db8b00         mov cl, byte ptr [0x8bdb20]
// 0076e219  ba20000000           mov edx, 0x20
// 0076e21e  c70004000000         mov dword ptr [eax], 4
// 0076e224  c7400815000000       mov dword ptr [eax + 8], 0x15
// 0076e22b  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0076e232  c7401458800000       mov dword ptr [eax + 0x14], 0x8058
// 0076e239  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0076e240  895038               mov dword ptr [eax + 0x38], edx
// 0076e243  89503c               mov dword ptr [eax + 0x3c], edx
// 0076e246  884841               mov byte ptr [eax + 0x41], cl
// 0076e249  a394db8b00           mov dword ptr [0x8bdb94], eax
// 0076e24e  c3                   ret 
// 0076e24f  890d94db8b00         mov dword ptr [0x8bdb94], ecx
// 0076e255  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA8@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
