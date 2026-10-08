// roc 2007-03 0076f920  unit: seg_00760000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076f920
//
// 0076f920  6a44                 push 0x44
// 0076f922  e8e1e7eaff           call 0x61e108
// 0076f927  33c9                 xor ecx, ecx
// 0076f929  83c404               add esp, 4
// 0076f92c  3bc1                 cmp eax, ecx
// 0076f92e  7463                 je 0x76f993
// 0076f930  380dd5b18800         cmp byte ptr [0x88b1d5], cl
// 0076f936  ba18000000           mov edx, 0x18
// 0076f93b  884804               mov byte ptr [eax + 4], cl
// 0076f93e  89480c               mov dword ptr [eax + 0xc], ecx
// 0076f941  894810               mov dword ptr [eax + 0x10], ecx
// 0076f944  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076f947  894820               mov dword ptr [eax + 0x20], ecx
// 0076f94a  894824               mov dword ptr [eax + 0x24], ecx
// 0076f94d  894828               mov dword ptr [eax + 0x28], ecx
// 0076f950  89482c               mov dword ptr [eax + 0x2c], ecx
// 0076f953  895030               mov dword ptr [eax + 0x30], edx
// 0076f956  894834               mov dword ptr [eax + 0x34], ecx
// 0076f959  895038               mov dword ptr [eax + 0x38], edx
// 0076f95c  8a15d8818b00         mov dl, byte ptr [0x8b81d8]
// 0076f962  0f94c1               sete cl
// 0076f965  c70001000000         mov dword ptr [eax], 1
// 0076f96b  c740082a000000       mov dword ptr [eax + 8], 0x2a
// 0076f972  c74014a6810000       mov dword ptr [eax + 0x14], 0x81a6
// 0076f979  c7401802190000       mov dword ptr [eax + 0x18], 0x1902
// 0076f980  c7403c20000000       mov dword ptr [eax + 0x3c], 0x20
// 0076f987  884840               mov byte ptr [eax + 0x40], cl
// 0076f98a  885041               mov byte ptr [eax + 0x41], dl
// 0076f98d  a310828b00           mov dword ptr [0x8b8210], eax
// 0076f992  c3                   ret 
// 0076f993  890d10828b00         mov dword ptr [0x8b8210], ecx
// 0076f999  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??__E?DEPTH24@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
