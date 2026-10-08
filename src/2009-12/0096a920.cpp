// roc 2009-12 0096a920  unit: seg_00960000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096a920
//
// 0096a920  6a44                 push 0x44
// 0096a922  e8398fe8ff           call 0x7f3860
// 0096a927  33c9                 xor ecx, ecx
// 0096a929  83c404               add esp, 4
// 0096a92c  3bc1                 cmp eax, ecx
// 0096a92e  7464                 je 0x96a994
// 0096a930  380d4924b100         cmp byte ptr [0xb12449], cl
// 0096a936  ba10000000           mov edx, 0x10
// 0096a93b  89501c               mov dword ptr [eax + 0x1c], edx
// 0096a93e  895020               mov dword ptr [eax + 0x20], edx
// 0096a941  ba20000000           mov edx, 0x20
// 0096a946  884804               mov byte ptr [eax + 4], cl
// 0096a949  89480c               mov dword ptr [eax + 0xc], ecx
// 0096a94c  894810               mov dword ptr [eax + 0x10], ecx
// 0096a94f  894824               mov dword ptr [eax + 0x24], ecx
// 0096a952  894828               mov dword ptr [eax + 0x28], ecx
// 0096a955  89482c               mov dword ptr [eax + 0x2c], ecx
// 0096a958  894830               mov dword ptr [eax + 0x30], ecx
// 0096a95b  894834               mov dword ptr [eax + 0x34], ecx
// 0096a95e  895038               mov dword ptr [eax + 0x38], edx
// 0096a961  89503c               mov dword ptr [eax + 0x3c], edx
// 0096a964  8a154824b100         mov dl, byte ptr [0xb12448]
// 0096a96a  0f94c1               sete cl
// 0096a96d  c70002000000         mov dword ptr [eax], 2
// 0096a973  c740080b000000       mov dword ptr [eax + 8], 0xb
// 0096a97a  c740141f880000       mov dword ptr [eax + 0x14], 0x881f
// 0096a981  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 0096a988  884840               mov byte ptr [eax + 0x40], cl
// 0096a98b  885041               mov byte ptr [eax + 0x41], dl
// 0096a98e  a380dbb700           mov dword ptr [0xb7db80], eax
// 0096a993  c3                   ret 
// 0096a994  890d80dbb700         mov dword ptr [0xb7db80], ecx
// 0096a99a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA16F@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
