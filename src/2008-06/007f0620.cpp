// from server: 100% by auto
// roc 2008-06 007f0620  unit: seg_007f0000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f0620
//
// 007f0620  6a44                 push 0x44
// 007f0622  e8f902ebff           call 0x6a0920
// 007f0627  33c9                 xor ecx, ecx
// 007f0629  83c404               add esp, 4
// 007f062c  3bc1                 cmp eax, ecx
// 007f062e  7461                 je 0x7f0691
// 007f0630  ba10000000           mov edx, 0x10
// 007f0635  884804               mov byte ptr [eax + 4], cl
// 007f0638  894810               mov dword ptr [eax + 0x10], ecx
// 007f063b  89481c               mov dword ptr [eax + 0x1c], ecx
// 007f063e  894820               mov dword ptr [eax + 0x20], ecx
// 007f0641  894830               mov dword ptr [eax + 0x30], ecx
// 007f0644  894834               mov dword ptr [eax + 0x34], ecx
// 007f0647  b930000000           mov ecx, 0x30
// 007f064c  895008               mov dword ptr [eax + 8], edx
// 007f064f  895024               mov dword ptr [eax + 0x24], edx
// 007f0652  895028               mov dword ptr [eax + 0x28], edx
// 007f0655  89502c               mov dword ptr [eax + 0x2c], edx
// 007f0658  8a1534fa9600         mov dl, byte ptr [0x96fa34]
// 007f065e  894838               mov dword ptr [eax + 0x38], ecx
// 007f0661  89483c               mov dword ptr [eax + 0x3c], ecx
// 007f0664  8a0d154c9300         mov cl, byte ptr [0x934c15]
// 007f066a  c70003000000         mov dword ptr [eax], 3
// 007f0670  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 007f0677  c7401454800000       mov dword ptr [eax + 0x14], 0x8054
// 007f067e  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 007f0685  884840               mov byte ptr [eax + 0x40], cl
// 007f0688  885041               mov byte ptr [eax + 0x41], dl
// 007f068b  a33cfa9600           mov dword ptr [0x96fa3c], eax
// 007f0690  c3                   ret 
// 007f0691  890d3cfa9600         mov dword ptr [0x96fa3c], ecx
// 007f0697  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB16@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
