// roc 2007-03 0076f620  unit: seg_00760000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f620
//
// 0076f620  6a44                 push 0x44
// 0076f622  e8e1eaeaff           call 0x61e108
// 0076f627  33c9                 xor ecx, ecx
// 0076f629  83c404               add esp, 4
// 0076f62c  3bc1                 cmp eax, ecx
// 0076f62e  745f                 je 0x76f68f
// 0076f630  ba20000000           mov edx, 0x20
// 0076f635  884804               mov byte ptr [eax + 4], cl
// 0076f638  894810               mov dword ptr [eax + 0x10], ecx
// 0076f63b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076f63e  895020               mov dword ptr [eax + 0x20], edx
// 0076f641  895024               mov dword ptr [eax + 0x24], edx
// 0076f644  895028               mov dword ptr [eax + 0x28], edx
// 0076f647  89502c               mov dword ptr [eax + 0x2c], edx
// 0076f64a  894830               mov dword ptr [eax + 0x30], ecx
// 0076f64d  894834               mov dword ptr [eax + 0x34], ecx
// 0076f650  884840               mov byte ptr [eax + 0x40], cl
// 0076f653  8a0dd4b18800         mov cl, byte ptr [0x88b1d4]
// 0076f659  ba80000000           mov edx, 0x80
// 0076f65e  c70004000000         mov dword ptr [eax], 4
// 0076f664  c7400818000000       mov dword ptr [eax + 8], 0x18
// 0076f66b  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0076f672  c7401414880000       mov dword ptr [eax + 0x14], 0x8814
// 0076f679  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0076f680  895038               mov dword ptr [eax + 0x38], edx
// 0076f683  89503c               mov dword ptr [eax + 0x3c], edx
// 0076f686  884841               mov byte ptr [eax + 0x41], cl
// 0076f689  a300828b00           mov dword ptr [0x8b8200], eax
// 0076f68e  c3                   ret 
// 0076f68f  890d00828b00         mov dword ptr [0x8b8200], ecx
// 0076f695  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGBA32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
