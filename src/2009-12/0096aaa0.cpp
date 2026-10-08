// roc 2009-12 0096aaa0  unit: seg_00960000  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096aaa0
//
// 0096aaa0  6a44                 push 0x44
// 0096aaa2  e8b98de8ff           call 0x7f3860
// 0096aaa7  33c9                 xor ecx, ecx
// 0096aaa9  83c404               add esp, 4
// 0096aaac  3bc1                 cmp eax, ecx
// 0096aaae  7466                 je 0x96ab16
// 0096aab0  ba01000000           mov edx, 1
// 0096aab5  884804               mov byte ptr [eax + 4], cl
// 0096aab8  89500c               mov dword ptr [eax + 0xc], edx
// 0096aabb  894810               mov dword ptr [eax + 0x10], ecx
// 0096aabe  89481c               mov dword ptr [eax + 0x1c], ecx
// 0096aac1  895020               mov dword ptr [eax + 0x20], edx
// 0096aac4  ba05000000           mov edx, 5
// 0096aac9  894830               mov dword ptr [eax + 0x30], ecx
// 0096aacc  894834               mov dword ptr [eax + 0x34], ecx
// 0096aacf  b910000000           mov ecx, 0x10
// 0096aad4  895024               mov dword ptr [eax + 0x24], edx
// 0096aad7  895028               mov dword ptr [eax + 0x28], edx
// 0096aada  89502c               mov dword ptr [eax + 0x2c], edx
// 0096aadd  8a1544dbb700         mov dl, byte ptr [0xb7db44]
// 0096aae3  894838               mov dword ptr [eax + 0x38], ecx
// 0096aae6  89483c               mov dword ptr [eax + 0x3c], ecx
// 0096aae9  8a0d4924b100         mov cl, byte ptr [0xb12449]
// 0096aaef  c70004000000         mov dword ptr [eax], 4
// 0096aaf5  c740080e000000       mov dword ptr [eax + 8], 0xe
// 0096aafc  c7401457800000       mov dword ptr [eax + 0x14], 0x8057
// 0096ab03  c7401808190000       mov dword ptr [eax + 0x18], 0x1908
// 0096ab0a  884840               mov byte ptr [eax + 0x40], cl
// 0096ab0d  885041               mov byte ptr [eax + 0x41], dl
// 0096ab10  a3bcdbb700           mov dword ptr [0xb7dbbc], eax
// 0096ab15  c3                   ret 
// 0096ab16  890dbcdbb700         mov dword ptr [0xb7dbbc], ecx
// 0096ab1c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB5A1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
