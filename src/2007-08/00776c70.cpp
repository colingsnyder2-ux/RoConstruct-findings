// from server: 100% by auto
// roc 2007-08 00776c70  unit: seg_00770000  size: 625 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776c70
//
// 00776c70  56                   push esi
// 00776c71  8b3578ed7700         mov esi, dword ptr [0x77ed78]
// 00776c77  6a3b                 push 0x3b
// 00776c79  6a5a                 push 0x5a
// 00776c7b  6a1d                 push 0x1d
// 00776c7d  6a3d                 push 0x3d
// 00776c7f  b81e000000           mov eax, 0x1e
// 00776c84  33c9                 xor ecx, ecx
// 00776c86  6860948c00           push 0x8c9460
// 00776c8b  a358948c00           mov dword ptr [0x8c9458], eax
// 00776c90  890d5c948c00         mov dword ptr [0x8c945c], ecx
// 00776c96  ffd6                 call esi
// 00776c98  6a3b                 push 0x3b
// 00776c9a  6a78                 push 0x78
// 00776c9c  b91e000000           mov ecx, 0x1e
// 00776ca1  51                   push ecx
// 00776ca2  6a5a                 push 0x5a
// 00776ca4  33c0                 xor eax, eax
// 00776ca6  6878948c00           push 0x8c9478
// 00776cab  a370948c00           mov dword ptr [0x8c9470], eax
// 00776cb0  890d74948c00         mov dword ptr [0x8c9474], ecx
// 00776cb6  ffd6                 call esi
// 00776cb8  b81e000000           mov eax, 0x1e
// 00776cbd  50                   push eax
// 00776cbe  6a78                 push 0x78
// 00776cc0  6a00                 push 0
// 00776cc2  6a5b                 push 0x5b
// 00776cc4  b93b000000           mov ecx, 0x3b
// 00776cc9  6890948c00           push 0x8c9490
// 00776cce  a388948c00           mov dword ptr [0x8c9488], eax
// 00776cd3  890d8c948c00         mov dword ptr [0x8c948c], ecx
// 00776cd9  ffd6                 call esi
// 00776cdb  6a1d                 push 0x1d
// 00776cdd  6a5c                 push 0x5c
// 00776cdf  6a00                 push 0
// 00776ce1  6a3e                 push 0x3e
// 00776ce3  b83c000000           mov eax, 0x3c
// 00776ce8  b91e000000           mov ecx, 0x1e
// 00776ced  68a8948c00           push 0x8c94a8
// 00776cf2  a3a0948c00           mov dword ptr [0x8c94a0], eax
// 00776cf7  890da4948c00         mov dword ptr [0x8c94a4], ecx
// 00776cfd  ffd6                 call esi
// 00776cff  6a78                 push 0x78
// 00776d01  6a5a                 push 0x5a
// 00776d03  6a5a                 push 0x5a
// 00776d05  6a3d                 push 0x3d
// 00776d07  b81e000000           mov eax, 0x1e
// 00776d0c  33c9                 xor ecx, ecx
// 00776d0e  68c0948c00           push 0x8c94c0
// 00776d13  a3b8948c00           mov dword ptr [0x8c94b8], eax
// 00776d18  890dbc948c00         mov dword ptr [0x8c94bc], ecx
// 00776d1e  ffd6                 call esi
// 00776d20  6a78                 push 0x78
// 00776d22  6a78                 push 0x78
// 00776d24  6a5b                 push 0x5b
// 00776d26  6a5a                 push 0x5a
// 00776d28  33c0                 xor eax, eax
// 00776d2a  b91e000000           mov ecx, 0x1e
// 00776d2f  68d8948c00           push 0x8c94d8
// 00776d34  a3d0948c00           mov dword ptr [0x8c94d0], eax
// 00776d39  890dd4948c00         mov dword ptr [0x8c94d4], ecx
// 00776d3f  ffd6                 call esi
// 00776d41  6a5b                 push 0x5b
// 00776d43  6a78                 push 0x78
// 00776d45  6a3d                 push 0x3d
// 00776d47  6a5b                 push 0x5b
// 00776d49  b81e000000           mov eax, 0x1e
// 00776d4e  b93b000000           mov ecx, 0x3b
// 00776d53  68f0948c00           push 0x8c94f0
// 00776d58  a3e8948c00           mov dword ptr [0x8c94e8], eax
// 00776d5d  890dec948c00         mov dword ptr [0x8c94ec], ecx
// 00776d63  ffd6                 call esi
// 00776d65  6a5a                 push 0x5a
// 00776d67  6a5c                 push 0x5c
// 00776d69  6a3d                 push 0x3d
// 00776d6b  b83c000000           mov eax, 0x3c
// 00776d70  b91e000000           mov ecx, 0x1e
// 00776d75  6a3e                 push 0x3e
// 00776d77  a300958c00           mov dword ptr [0x8c9500], eax
// 00776d7c  890d04958c00         mov dword ptr [0x8c9504], ecx
// 00776d82  6808958c00           push 0x8c9508
// 00776d87  ffd6                 call esi
// 00776d89  6a6f                 push 0x6f
// 00776d8b  6894000000           push 0x94
// 00776d90  6a52                 push 0x52
// 00776d92  b81e000000           mov eax, 0x1e
// 00776d97  6a78                 push 0x78
// 00776d99  8bc8                 mov ecx, eax
// 00776d9b  6820958c00           push 0x8c9520
// 00776da0  a318958c00           mov dword ptr [0x8c9518], eax
// 00776da5  890d1c958c00         mov dword ptr [0x8c951c], ecx
// 00776dab  ffd6                 call esi
// 00776dad  6a52                 push 0x52
// 00776daf  68a1000000           push 0xa1
// 00776db4  6a29                 push 0x29
// 00776db6  b818000000           mov eax, 0x18
// 00776dbb  6a78                 push 0x78
// 00776dbd  8bc8                 mov ecx, eax
// 00776dbf  6838958c00           push 0x8c9538
// 00776dc4  a330958c00           mov dword ptr [0x8c9530], eax
// 00776dc9  890d34958c00         mov dword ptr [0x8c9534], ecx
// 00776dcf  ffd6                 call esi
// 00776dd1  6a29                 push 0x29
// 00776dd3  68a1000000           push 0xa1
// 00776dd8  6a00                 push 0
// 00776dda  b818000000           mov eax, 0x18
// 00776ddf  6a78                 push 0x78
// 00776de1  8bc8                 mov ecx, eax
// 00776de3  6850958c00           push 0x8c9550
// 00776de8  a348958c00           mov dword ptr [0x8c9548], eax
// 00776ded  890d4c958c00         mov dword ptr [0x8c954c], ecx
// 00776df3  ffd6                 call esi
// 00776df5  6a3d                 push 0x3d
// 00776df7  6a1d                 push 0x1d
// 00776df9  33c9                 xor ecx, ecx
// 00776dfb  6a1d                 push 0x1d
// 00776dfd  51                   push ecx
// 00776dfe  33c0                 xor eax, eax
// 00776e00  6868958c00           push 0x8c9568
// 00776e05  a360958c00           mov dword ptr [0x8c9560], eax
// 00776e0a  890d64958c00         mov dword ptr [0x8c9564], ecx
// 00776e10  ffd6                 call esi
// 00776e12  6a3d                 push 0x3d
// 00776e14  6a3d                 push 0x3d
// 00776e16  6a20                 push 0x20
// 00776e18  6a1d                 push 0x1d
// 00776e1a  33c0                 xor eax, eax
// 00776e1c  33c9                 xor ecx, ecx
// 00776e1e  6880958c00           push 0x8c9580
// 00776e23  a378958c00           mov dword ptr [0x8c9578], eax
// 00776e28  890d7c958c00         mov dword ptr [0x8c957c], ecx
// 00776e2e  ffd6                 call esi
// 00776e30  6a20                 push 0x20
// 00776e32  6a3d                 push 0x3d
// 00776e34  33c9                 xor ecx, ecx
// 00776e36  51                   push ecx
// 00776e37  6a20                 push 0x20
// 00776e39  33c0                 xor eax, eax
// 00776e3b  6898958c00           push 0x8c9598
// 00776e40  a390958c00           mov dword ptr [0x8c9590], eax
// 00776e45  890d94958c00         mov dword ptr [0x8c9594], ecx
// 00776e4b  ffd6                 call esi
// 00776e4d  6a1d                 push 0x1d
// 00776e4f  33c9                 xor ecx, ecx
// 00776e51  6a20                 push 0x20
// 00776e53  51                   push ecx
// 00776e54  51                   push ecx
// 00776e55  33c0                 xor eax, eax
// 00776e57  68b0958c00           push 0x8c95b0
// 00776e5c  a3a8958c00           mov dword ptr [0x8c95a8], eax
// 00776e61  890dac958c00         mov dword ptr [0x8c95ac], ecx
// 00776e67  ffd6                 call esi
// 00776e69  6a7a                 push 0x7a
// 00776e6b  6a1d                 push 0x1d
// 00776e6d  33c9                 xor ecx, ecx
// 00776e6f  6a5a                 push 0x5a
// 00776e71  51                   push ecx
// 00776e72  33c0                 xor eax, eax
// 00776e74  68c8958c00           push 0x8c95c8
// 00776e79  a3c0958c00           mov dword ptr [0x8c95c0], eax
// 00776e7e  890dc4958c00         mov dword ptr [0x8c95c4], ecx
// 00776e84  ffd6                 call esi
// 00776e86  6a7a                 push 0x7a
// 00776e88  6a3d                 push 0x3d
// 00776e8a  6a5d                 push 0x5d
// 00776e8c  6a1d                 push 0x1d
// 00776e8e  33c0                 xor eax, eax
// 00776e90  33c9                 xor ecx, ecx
// 00776e92  68e0958c00           push 0x8c95e0
// 00776e97  a3d8958c00           mov dword ptr [0x8c95d8], eax
// 00776e9c  890ddc958c00         mov dword ptr [0x8c95dc], ecx
// 00776ea2  ffd6                 call esi
// 00776ea4  6a5d                 push 0x5d
// 00776ea6  6a3d                 push 0x3d
// 00776ea8  6a3d                 push 0x3d
// 00776eaa  6a20                 push 0x20
// 00776eac  33c0                 xor eax, eax
// 00776eae  33c9                 xor ecx, ecx
// 00776eb0  68f8958c00           push 0x8c95f8
// 00776eb5  a3f0958c00           mov dword ptr [0x8c95f0], eax
// 00776eba  890df4958c00         mov dword ptr [0x8c95f4], ecx
// 00776ec0  ffd6                 call esi
// 00776ec2  6a5a                 push 0x5a
// 00776ec4  6a20                 push 0x20
// 00776ec6  33c9                 xor ecx, ecx
// 00776ec8  6a3d                 push 0x3d
// 00776eca  51                   push ecx
// 00776ecb  33c0                 xor eax, eax
// 00776ecd  6810968c00           push 0x8c9610
// 00776ed2  a308968c00           mov dword ptr [0x8c9608], eax
// 00776ed7  890d0c968c00         mov dword ptr [0x8c960c], ecx
// 00776edd  ffd6                 call esi
// 00776edf  5e                   pop esi
// 00776ee0  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneContext.cpp (function ??__EarrSpritesStyckerVisualStudio2005@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneContext.cpp
