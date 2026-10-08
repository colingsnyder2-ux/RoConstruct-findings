// from server: 100% by auto
// roc 2008-06 007f0320  unit: seg_007f0000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0320
//
// 007f0320  6a44                 push 0x44
// 007f0322  e8f905ebff           call 0x6a0920
// 007f0327  33c9                 xor ecx, ecx
// 007f0329  83c404               add esp, 4
// 007f032c  3bc1                 cmp eax, ecx
// 007f032e  7464                 je 0x7f0394
// 007f0330  380d154c9300         cmp byte ptr [0x934c15], cl
// 007f0336  ba10000000           mov edx, 0x10
// 007f033b  89501c               mov dword ptr [eax + 0x1c], edx
// 007f033e  895020               mov dword ptr [eax + 0x20], edx
// 007f0341  ba20000000           mov edx, 0x20
// 007f0346  884804               mov byte ptr [eax + 4], cl
// 007f0349  89480c               mov dword ptr [eax + 0xc], ecx
// 007f034c  894810               mov dword ptr [eax + 0x10], ecx
// 007f034f  894824               mov dword ptr [eax + 0x24], ecx
// 007f0352  894828               mov dword ptr [eax + 0x28], ecx
// 007f0355  89482c               mov dword ptr [eax + 0x2c], ecx
// 007f0358  894830               mov dword ptr [eax + 0x30], ecx
// 007f035b  894834               mov dword ptr [eax + 0x34], ecx
// 007f035e  895038               mov dword ptr [eax + 0x38], edx
// 007f0361  89503c               mov dword ptr [eax + 0x3c], edx
// 007f0364  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007f036a  0f94c1               sete cl
// 007f036d  c70002000000         mov dword ptr [eax], 2
// 007f0373  c740080a000000       mov dword ptr [eax + 8], 0xa
// 007f037a  c7401448800000       mov dword ptr [eax + 0x14], 0x8048
// 007f0381  c740180a190000       mov dword ptr [eax + 0x18], 0x190a
// 007f0388  884840               mov byte ptr [eax + 0x40], cl
// 007f038b  885041               mov byte ptr [eax + 0x41], dl
// 007f038e  a37cfa9600           mov dword ptr [0x96fa7c], eax
// 007f0393  c3                   ret 
// 007f0394  890d7cfa9600         mov dword ptr [0x96fa7c], ecx
// 007f039a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?LA16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
