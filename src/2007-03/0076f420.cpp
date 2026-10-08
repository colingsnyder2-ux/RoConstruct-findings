// roc 2007-03 0076f420  unit: seg_00760000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f420
//
// 0076f420  6a44                 push 0x44
// 0076f422  e8e1eceaff           call 0x61e108
// 0076f427  33c9                 xor ecx, ecx
// 0076f429  83c404               add esp, 4
// 0076f42c  3bc1                 cmp eax, ecx
// 0076f42e  7465                 je 0x76f495
// 0076f430  884804               mov byte ptr [eax + 4], cl
// 0076f433  894810               mov dword ptr [eax + 0x10], ecx
// 0076f436  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076f439  894820               mov dword ptr [eax + 0x20], ecx
// 0076f43c  ba20000000           mov edx, 0x20
// 0076f441  894830               mov dword ptr [eax + 0x30], ecx
// 0076f444  894834               mov dword ptr [eax + 0x34], ecx
// 0076f447  b960000000           mov ecx, 0x60
// 0076f44c  895024               mov dword ptr [eax + 0x24], edx
// 0076f44f  895028               mov dword ptr [eax + 0x28], edx
// 0076f452  89502c               mov dword ptr [eax + 0x2c], edx
// 0076f455  8a15d4b18800         mov dl, byte ptr [0x88b1d4]
// 0076f45b  894838               mov dword ptr [eax + 0x38], ecx
// 0076f45e  89483c               mov dword ptr [eax + 0x3c], ecx
// 0076f461  8a0dd5b18800         mov cl, byte ptr [0x88b1d5]
// 0076f467  c70003000000         mov dword ptr [eax], 3
// 0076f46d  c7400812000000       mov dword ptr [eax + 8], 0x12
// 0076f474  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 0076f47b  c7401415880000       mov dword ptr [eax + 0x14], 0x8815
// 0076f482  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 0076f489  884840               mov byte ptr [eax + 0x40], cl
// 0076f48c  885041               mov byte ptr [eax + 0x41], dl
// 0076f48f  a3e8818b00           mov dword ptr [0x8b81e8], eax
// 0076f494  c3                   ret 
// 0076f495  890de8818b00         mov dword ptr [0x8b81e8], ecx
// 0076f49b  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB32F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
