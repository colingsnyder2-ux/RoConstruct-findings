// roc 2009-06 00886940  unit: seg_00880000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00886940
//
// 00886940  6a44                 push 0x44
// 00886942  e8f120e9ff           call 0x718a38
// 00886947  33c9                 xor ecx, ecx
// 00886949  83c404               add esp, 4
// 0088694c  3bc1                 cmp eax, ecx
// 0088694e  7461                 je 0x8869b1
// 00886950  894810               mov dword ptr [eax + 0x10], ecx
// 00886953  89481c               mov dword ptr [eax + 0x1c], ecx
// 00886956  894820               mov dword ptr [eax + 0x20], ecx
// 00886959  894824               mov dword ptr [eax + 0x24], ecx
// 0088695c  894828               mov dword ptr [eax + 0x28], ecx
// 0088695f  89482c               mov dword ptr [eax + 0x2c], ecx
// 00886962  894830               mov dword ptr [eax + 0x30], ecx
// 00886965  894834               mov dword ptr [eax + 0x34], ecx
// 00886968  ba01000000           mov edx, 1
// 0088696d  b940000000           mov ecx, 0x40
// 00886972  885004               mov byte ptr [eax + 4], dl
// 00886975  89500c               mov dword ptr [eax + 0xc], edx
// 00886978  8a1594d3a300         mov dl, byte ptr [0xa3d394]
// 0088697e  894838               mov dword ptr [eax + 0x38], ecx
// 00886981  89483c               mov dword ptr [eax + 0x3c], ecx
// 00886984  8a0d59c29e00         mov cl, byte ptr [0x9ec259]
// 0088698a  c70003000000         mov dword ptr [eax], 3
// 00886990  c7400825000000       mov dword ptr [eax + 8], 0x25
// 00886997  c74014f0830000       mov dword ptr [eax + 0x14], 0x83f0
// 0088699e  c7401807190000       mov dword ptr [eax + 0x18], 0x1907
// 008869a5  884840               mov byte ptr [eax + 0x40], cl
// 008869a8  885041               mov byte ptr [eax + 0x41], dl
// 008869ab  a3b8d3a300           mov dword ptr [0xa3d3b8], eax
// 008869b0  c3                   ret 
// 008869b1  890db8d3a300         mov dword ptr [0xa3d3b8], ecx
// 008869b7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureFormat.cpp (function ??__E?RGB_DXT1@TextureFormat@G3D@@2PBV12@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureFormat.cpp
