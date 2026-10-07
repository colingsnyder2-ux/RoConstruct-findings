// roc 2012-06 00b10eb0  unit: seg_00b10000  size: 625 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b10eb0
//
// 00b10eb0  56                   push esi
// 00b10eb1  8b356c3bb200         mov esi, dword ptr [0xb23b6c]
// 00b10eb7  6a3b                 push 0x3b
// 00b10eb9  6a5a                 push 0x5a
// 00b10ebb  6a1d                 push 0x1d
// 00b10ebd  6a3d                 push 0x3d
// 00b10ebf  b81e000000           mov eax, 0x1e
// 00b10ec4  33c9                 xor ecx, ecx
// 00b10ec6  68c0a1e500           push 0xe5a1c0
// 00b10ecb  a3b8a1e500           mov dword ptr [0xe5a1b8], eax
// 00b10ed0  890dbca1e500         mov dword ptr [0xe5a1bc], ecx
// 00b10ed6  ffd6                 call esi
// 00b10ed8  6a3b                 push 0x3b
// 00b10eda  6a78                 push 0x78
// 00b10edc  b91e000000           mov ecx, 0x1e
// 00b10ee1  51                   push ecx
// 00b10ee2  6a5a                 push 0x5a
// 00b10ee4  33c0                 xor eax, eax
// 00b10ee6  68d8a1e500           push 0xe5a1d8
// 00b10eeb  a3d0a1e500           mov dword ptr [0xe5a1d0], eax
// 00b10ef0  890dd4a1e500         mov dword ptr [0xe5a1d4], ecx
// 00b10ef6  ffd6                 call esi
// 00b10ef8  b81e000000           mov eax, 0x1e
// 00b10efd  50                   push eax
// 00b10efe  6a78                 push 0x78
// 00b10f00  6a00                 push 0
// 00b10f02  6a5b                 push 0x5b
// 00b10f04  b93b000000           mov ecx, 0x3b
// 00b10f09  68f0a1e500           push 0xe5a1f0
// 00b10f0e  a3e8a1e500           mov dword ptr [0xe5a1e8], eax
// 00b10f13  890deca1e500         mov dword ptr [0xe5a1ec], ecx
// 00b10f19  ffd6                 call esi
// 00b10f1b  6a1d                 push 0x1d
// 00b10f1d  6a5c                 push 0x5c
// 00b10f1f  6a00                 push 0
// 00b10f21  6a3e                 push 0x3e
// 00b10f23  b83c000000           mov eax, 0x3c
// 00b10f28  b91e000000           mov ecx, 0x1e
// 00b10f2d  6808a2e500           push 0xe5a208
// 00b10f32  a300a2e500           mov dword ptr [0xe5a200], eax
// 00b10f37  890d04a2e500         mov dword ptr [0xe5a204], ecx
// 00b10f3d  ffd6                 call esi
// 00b10f3f  6a78                 push 0x78
// 00b10f41  6a5a                 push 0x5a
// 00b10f43  6a5a                 push 0x5a
// 00b10f45  6a3d                 push 0x3d
// 00b10f47  b81e000000           mov eax, 0x1e
// 00b10f4c  33c9                 xor ecx, ecx
// 00b10f4e  6820a2e500           push 0xe5a220
// 00b10f53  a318a2e500           mov dword ptr [0xe5a218], eax
// 00b10f58  890d1ca2e500         mov dword ptr [0xe5a21c], ecx
// 00b10f5e  ffd6                 call esi
// 00b10f60  6a78                 push 0x78
// 00b10f62  6a78                 push 0x78
// 00b10f64  6a5b                 push 0x5b
// 00b10f66  6a5a                 push 0x5a
// 00b10f68  33c0                 xor eax, eax
// 00b10f6a  b91e000000           mov ecx, 0x1e
// 00b10f6f  6838a2e500           push 0xe5a238
// 00b10f74  a330a2e500           mov dword ptr [0xe5a230], eax
// 00b10f79  890d34a2e500         mov dword ptr [0xe5a234], ecx
// 00b10f7f  ffd6                 call esi
// 00b10f81  6a5b                 push 0x5b
// 00b10f83  6a78                 push 0x78
// 00b10f85  6a3d                 push 0x3d
// 00b10f87  6a5b                 push 0x5b
// 00b10f89  b81e000000           mov eax, 0x1e
// 00b10f8e  b93b000000           mov ecx, 0x3b
// 00b10f93  6850a2e500           push 0xe5a250
// 00b10f98  a348a2e500           mov dword ptr [0xe5a248], eax
// 00b10f9d  890d4ca2e500         mov dword ptr [0xe5a24c], ecx
// 00b10fa3  ffd6                 call esi
// 00b10fa5  6a5a                 push 0x5a
// 00b10fa7  6a5c                 push 0x5c
// 00b10fa9  6a3d                 push 0x3d
// 00b10fab  b83c000000           mov eax, 0x3c
// 00b10fb0  b91e000000           mov ecx, 0x1e
// 00b10fb5  6a3e                 push 0x3e
// 00b10fb7  a360a2e500           mov dword ptr [0xe5a260], eax
// 00b10fbc  890d64a2e500         mov dword ptr [0xe5a264], ecx
// 00b10fc2  6868a2e500           push 0xe5a268
// 00b10fc7  ffd6                 call esi
// 00b10fc9  6a6f                 push 0x6f
// 00b10fcb  6894000000           push 0x94
// 00b10fd0  6a52                 push 0x52
// 00b10fd2  b81e000000           mov eax, 0x1e
// 00b10fd7  6a78                 push 0x78
// 00b10fd9  8bc8                 mov ecx, eax
// 00b10fdb  6880a2e500           push 0xe5a280
// 00b10fe0  a378a2e500           mov dword ptr [0xe5a278], eax
// 00b10fe5  890d7ca2e500         mov dword ptr [0xe5a27c], ecx
// 00b10feb  ffd6                 call esi
// 00b10fed  6a52                 push 0x52
// 00b10fef  68a1000000           push 0xa1
// 00b10ff4  6a29                 push 0x29
// 00b10ff6  b818000000           mov eax, 0x18
// 00b10ffb  6a78                 push 0x78
// 00b10ffd  8bc8                 mov ecx, eax
// 00b10fff  6898a2e500           push 0xe5a298
// 00b11004  a390a2e500           mov dword ptr [0xe5a290], eax
// 00b11009  890d94a2e500         mov dword ptr [0xe5a294], ecx
// 00b1100f  ffd6                 call esi
// 00b11011  6a29                 push 0x29
// 00b11013  68a1000000           push 0xa1
// 00b11018  6a00                 push 0
// 00b1101a  b818000000           mov eax, 0x18
// 00b1101f  6a78                 push 0x78
// 00b11021  8bc8                 mov ecx, eax
// 00b11023  68b0a2e500           push 0xe5a2b0
// 00b11028  a3a8a2e500           mov dword ptr [0xe5a2a8], eax
// 00b1102d  890daca2e500         mov dword ptr [0xe5a2ac], ecx
// 00b11033  ffd6                 call esi
// 00b11035  6a3d                 push 0x3d
// 00b11037  6a1d                 push 0x1d
// 00b11039  33c9                 xor ecx, ecx
// 00b1103b  6a1d                 push 0x1d
// 00b1103d  51                   push ecx
// 00b1103e  33c0                 xor eax, eax
// 00b11040  68c8a2e500           push 0xe5a2c8
// 00b11045  a3c0a2e500           mov dword ptr [0xe5a2c0], eax
// 00b1104a  890dc4a2e500         mov dword ptr [0xe5a2c4], ecx
// 00b11050  ffd6                 call esi
// 00b11052  6a3d                 push 0x3d
// 00b11054  6a3d                 push 0x3d
// 00b11056  6a20                 push 0x20
// 00b11058  6a1d                 push 0x1d
// 00b1105a  33c0                 xor eax, eax
// 00b1105c  33c9                 xor ecx, ecx
// 00b1105e  68e0a2e500           push 0xe5a2e0
// 00b11063  a3d8a2e500           mov dword ptr [0xe5a2d8], eax
// 00b11068  890ddca2e500         mov dword ptr [0xe5a2dc], ecx
// 00b1106e  ffd6                 call esi
// 00b11070  6a20                 push 0x20
// 00b11072  6a3d                 push 0x3d
// 00b11074  33c9                 xor ecx, ecx
// 00b11076  51                   push ecx
// 00b11077  6a20                 push 0x20
// 00b11079  33c0                 xor eax, eax
// 00b1107b  68f8a2e500           push 0xe5a2f8
// 00b11080  a3f0a2e500           mov dword ptr [0xe5a2f0], eax
// 00b11085  890df4a2e500         mov dword ptr [0xe5a2f4], ecx
// 00b1108b  ffd6                 call esi
// 00b1108d  6a1d                 push 0x1d
// 00b1108f  33c9                 xor ecx, ecx
// 00b11091  6a20                 push 0x20
// 00b11093  51                   push ecx
// 00b11094  51                   push ecx
// 00b11095  33c0                 xor eax, eax
// 00b11097  6810a3e500           push 0xe5a310
// 00b1109c  a308a3e500           mov dword ptr [0xe5a308], eax
// 00b110a1  890d0ca3e500         mov dword ptr [0xe5a30c], ecx
// 00b110a7  ffd6                 call esi
// 00b110a9  6a7a                 push 0x7a
// 00b110ab  6a1d                 push 0x1d
// 00b110ad  33c9                 xor ecx, ecx
// 00b110af  6a5a                 push 0x5a
// 00b110b1  51                   push ecx
// 00b110b2  33c0                 xor eax, eax
// 00b110b4  6828a3e500           push 0xe5a328
// 00b110b9  a320a3e500           mov dword ptr [0xe5a320], eax
// 00b110be  890d24a3e500         mov dword ptr [0xe5a324], ecx
// 00b110c4  ffd6                 call esi
// 00b110c6  6a7a                 push 0x7a
// 00b110c8  6a3d                 push 0x3d
// 00b110ca  6a5d                 push 0x5d
// 00b110cc  6a1d                 push 0x1d
// 00b110ce  33c0                 xor eax, eax
// 00b110d0  33c9                 xor ecx, ecx
// 00b110d2  6840a3e500           push 0xe5a340
// 00b110d7  a338a3e500           mov dword ptr [0xe5a338], eax
// 00b110dc  890d3ca3e500         mov dword ptr [0xe5a33c], ecx
// 00b110e2  ffd6                 call esi
// 00b110e4  6a5d                 push 0x5d
// 00b110e6  6a3d                 push 0x3d
// 00b110e8  6a3d                 push 0x3d
// 00b110ea  6a20                 push 0x20
// 00b110ec  33c0                 xor eax, eax
// 00b110ee  33c9                 xor ecx, ecx
// 00b110f0  6858a3e500           push 0xe5a358
// 00b110f5  a350a3e500           mov dword ptr [0xe5a350], eax
// 00b110fa  890d54a3e500         mov dword ptr [0xe5a354], ecx
// 00b11100  ffd6                 call esi
// 00b11102  6a5a                 push 0x5a
// 00b11104  6a20                 push 0x20
// 00b11106  33c9                 xor ecx, ecx
// 00b11108  6a3d                 push 0x3d
// 00b1110a  51                   push ecx
// 00b1110b  33c0                 xor eax, eax
// 00b1110d  6870a3e500           push 0xe5a370
// 00b11112  a368a3e500           mov dword ptr [0xe5a368], eax
// 00b11117  890d6ca3e500         mov dword ptr [0xe5a36c], ecx
// 00b1111d  ffd6                 call esi
// 00b1111f  5e                   pop esi
// 00b11120  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneContext.cpp (function ??__EarrSpritesStyckerVisualStudio2005@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneContext.cpp
