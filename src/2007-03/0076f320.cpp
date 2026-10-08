// roc 2007-03 0076f320  unit: seg_00760000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f320
//
// 0076f320  6a44                 push 0x44
// 0076f322  e8e1edeaff           call 0x61e108
// 0076f327  33c9                 xor ecx, ecx
// 0076f329  83c404               add esp, 4
// 0076f32c  3bc1                 cmp eax, ecx
// 0076f32e  7461                 je 0x76f391
// 0076f330  ba10000000           mov edx, 0x10
// 0076f335  884804               mov byte ptr [eax + 4], cl
// 0076f338  894810               mov dword ptr [eax + 0x10], ecx
// 0076f33b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076f33e  894820               mov dword ptr [eax + 0x20], ecx
// 0076f341  894830               mov dword ptr [eax + 0x30], ecx
// 0076f344  894834               mov dword ptr [eax + 0x34], ecx
// 0076f347  b930000000           mov ecx, 0x30
// 0076f34c  895008               mov dword ptr [eax + 8], edx
// 0076f34f  895024               mov dword ptr [eax + 0x24], edx
// 0076f352  895028               mov dword ptr [eax + 0x28], edx
// 0076f355  89502c               mov dword ptr [eax + 0x2c], edx
// 0076f358  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076f35e  894838               mov dword ptr [eax + 0x38], ecx
// 0076f361  89483c               mov dword ptr [eax + 0x3c], ecx
// 0076f364  8a0dd5b18800         mov cl, byte ptr [0x88b1d5]
// 0076f36a  c70003000000         mov dword ptr [eax], 3
// 0076f370  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0076f377  c7401454800000       mov dword ptr [eax + 0x14], 0x8054
// 0076f37e  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 0076f385  884840               mov byte ptr [eax + 0x40], cl
// 0076f388  885041               mov byte ptr [eax + 0x41], dl
// 0076f38b  a3e0818b00           mov dword ptr [0x8b81e0], eax
// 0076f390  c3                   ret 
// 0076f391  890de0818b00         mov dword ptr [0x8b81e0], ecx
// 0076f397  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
