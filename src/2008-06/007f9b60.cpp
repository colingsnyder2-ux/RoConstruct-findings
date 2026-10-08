// from server: 100% by auto
// roc 2008-06 007f9b60  unit: seg_007f0000  size: 625 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9b60
//
// 007f9b60  56                   push esi
// 007f9b61  8b35102d8000         mov esi, dword ptr [0x802d10]
// 007f9b67  6a3b                 push 0x3b
// 007f9b69  6a5a                 push 0x5a
// 007f9b6b  6a1d                 push 0x1d
// 007f9b6d  6a3d                 push 0x3d
// 007f9b6f  b81e000000           mov eax, 0x1e
// 007f9b74  33c9                 xor ecx, ecx
// 007f9b76  68e8ee9700           push 0x97eee8
// 007f9b7b  a3e0ee9700           mov dword ptr [0x97eee0], eax
// 007f9b80  890de4ee9700         mov dword ptr [0x97eee4], ecx
// 007f9b86  ffd6                 call esi
// 007f9b88  6a3b                 push 0x3b
// 007f9b8a  6a78                 push 0x78
// 007f9b8c  b91e000000           mov ecx, 0x1e
// 007f9b91  51                   push ecx
// 007f9b92  6a5a                 push 0x5a
// 007f9b94  33c0                 xor eax, eax
// 007f9b96  6800ef9700           push 0x97ef00
// 007f9b9b  a3f8ee9700           mov dword ptr [0x97eef8], eax
// 007f9ba0  890dfcee9700         mov dword ptr [0x97eefc], ecx
// 007f9ba6  ffd6                 call esi
// 007f9ba8  b81e000000           mov eax, 0x1e
// 007f9bad  50                   push eax
// 007f9bae  6a78                 push 0x78
// 007f9bb0  6a00                 push 0
// 007f9bb2  6a5b                 push 0x5b
// 007f9bb4  b93b000000           mov ecx, 0x3b
// 007f9bb9  6818ef9700           push 0x97ef18
// 007f9bbe  a310ef9700           mov dword ptr [0x97ef10], eax
// 007f9bc3  890d14ef9700         mov dword ptr [0x97ef14], ecx
// 007f9bc9  ffd6                 call esi
// 007f9bcb  6a1d                 push 0x1d
// 007f9bcd  6a5c                 push 0x5c
// 007f9bcf  6a00                 push 0
// 007f9bd1  6a3e                 push 0x3e
// 007f9bd3  b83c000000           mov eax, 0x3c
// 007f9bd8  b91e000000           mov ecx, 0x1e
// 007f9bdd  6830ef9700           push 0x97ef30
// 007f9be2  a328ef9700           mov dword ptr [0x97ef28], eax
// 007f9be7  890d2cef9700         mov dword ptr [0x97ef2c], ecx
// 007f9bed  ffd6                 call esi
// 007f9bef  6a78                 push 0x78
// 007f9bf1  6a5a                 push 0x5a
// 007f9bf3  6a5a                 push 0x5a
// 007f9bf5  6a3d                 push 0x3d
// 007f9bf7  b81e000000           mov eax, 0x1e
// 007f9bfc  33c9                 xor ecx, ecx
// 007f9bfe  6848ef9700           push 0x97ef48
// 007f9c03  a340ef9700           mov dword ptr [0x97ef40], eax
// 007f9c08  890d44ef9700         mov dword ptr [0x97ef44], ecx
// 007f9c0e  ffd6                 call esi
// 007f9c10  6a78                 push 0x78
// 007f9c12  6a78                 push 0x78
// 007f9c14  6a5b                 push 0x5b
// 007f9c16  6a5a                 push 0x5a
// 007f9c18  33c0                 xor eax, eax
// 007f9c1a  b91e000000           mov ecx, 0x1e
// 007f9c1f  6860ef9700           push 0x97ef60
// 007f9c24  a358ef9700           mov dword ptr [0x97ef58], eax
// 007f9c29  890d5cef9700         mov dword ptr [0x97ef5c], ecx
// 007f9c2f  ffd6                 call esi
// 007f9c31  6a5b                 push 0x5b
// 007f9c33  6a78                 push 0x78
// 007f9c35  6a3d                 push 0x3d
// 007f9c37  6a5b                 push 0x5b
// 007f9c39  b81e000000           mov eax, 0x1e
// 007f9c3e  b93b000000           mov ecx, 0x3b
// 007f9c43  6878ef9700           push 0x97ef78
// 007f9c48  a370ef9700           mov dword ptr [0x97ef70], eax
// 007f9c4d  890d74ef9700         mov dword ptr [0x97ef74], ecx
// 007f9c53  ffd6                 call esi
// 007f9c55  6a5a                 push 0x5a
// 007f9c57  6a5c                 push 0x5c
// 007f9c59  6a3d                 push 0x3d
// 007f9c5b  b83c000000           mov eax, 0x3c
// 007f9c60  b91e000000           mov ecx, 0x1e
// 007f9c65  6a3e                 push 0x3e
// 007f9c67  a388ef9700           mov dword ptr [0x97ef88], eax
// 007f9c6c  890d8cef9700         mov dword ptr [0x97ef8c], ecx
// 007f9c72  6890ef9700           push 0x97ef90
// 007f9c77  ffd6                 call esi
// 007f9c79  6a6f                 push 0x6f
// 007f9c7b  6894000000           push 0x94
// 007f9c80  6a52                 push 0x52
// 007f9c82  b81e000000           mov eax, 0x1e
// 007f9c87  6a78                 push 0x78
// 007f9c89  8bc8                 mov ecx, eax
// 007f9c8b  68a8ef9700           push 0x97efa8
// 007f9c90  a3a0ef9700           mov dword ptr [0x97efa0], eax
// 007f9c95  890da4ef9700         mov dword ptr [0x97efa4], ecx
// 007f9c9b  ffd6                 call esi
// 007f9c9d  6a52                 push 0x52
// 007f9c9f  68a1000000           push 0xa1
// 007f9ca4  6a29                 push 0x29
// 007f9ca6  b818000000           mov eax, 0x18
// 007f9cab  6a78                 push 0x78
// 007f9cad  8bc8                 mov ecx, eax
// 007f9caf  68c0ef9700           push 0x97efc0
// 007f9cb4  a3b8ef9700           mov dword ptr [0x97efb8], eax
// 007f9cb9  890dbcef9700         mov dword ptr [0x97efbc], ecx
// 007f9cbf  ffd6                 call esi
// 007f9cc1  6a29                 push 0x29
// 007f9cc3  68a1000000           push 0xa1
// 007f9cc8  6a00                 push 0
// 007f9cca  b818000000           mov eax, 0x18
// 007f9ccf  6a78                 push 0x78
// 007f9cd1  8bc8                 mov ecx, eax
// 007f9cd3  68d8ef9700           push 0x97efd8
// 007f9cd8  a3d0ef9700           mov dword ptr [0x97efd0], eax
// 007f9cdd  890dd4ef9700         mov dword ptr [0x97efd4], ecx
// 007f9ce3  ffd6                 call esi
// 007f9ce5  6a3d                 push 0x3d
// 007f9ce7  6a1d                 push 0x1d
// 007f9ce9  33c9                 xor ecx, ecx
// 007f9ceb  6a1d                 push 0x1d
// 007f9ced  51                   push ecx
// 007f9cee  33c0                 xor eax, eax
// 007f9cf0  68f0ef9700           push 0x97eff0
// 007f9cf5  a3e8ef9700           mov dword ptr [0x97efe8], eax
// 007f9cfa  890decef9700         mov dword ptr [0x97efec], ecx
// 007f9d00  ffd6                 call esi
// 007f9d02  6a3d                 push 0x3d
// 007f9d04  6a3d                 push 0x3d
// 007f9d06  6a20                 push 0x20
// 007f9d08  6a1d                 push 0x1d
// 007f9d0a  33c0                 xor eax, eax
// 007f9d0c  33c9                 xor ecx, ecx
// 007f9d0e  6808f09700           push 0x97f008
// 007f9d13  a300f09700           mov dword ptr [0x97f000], eax
// 007f9d18  890d04f09700         mov dword ptr [0x97f004], ecx
// 007f9d1e  ffd6                 call esi
// 007f9d20  6a20                 push 0x20
// 007f9d22  6a3d                 push 0x3d
// 007f9d24  33c9                 xor ecx, ecx
// 007f9d26  51                   push ecx
// 007f9d27  6a20                 push 0x20
// 007f9d29  33c0                 xor eax, eax
// 007f9d2b  6820f09700           push 0x97f020
// 007f9d30  a318f09700           mov dword ptr [0x97f018], eax
// 007f9d35  890d1cf09700         mov dword ptr [0x97f01c], ecx
// 007f9d3b  ffd6                 call esi
// 007f9d3d  6a1d                 push 0x1d
// 007f9d3f  33c9                 xor ecx, ecx
// 007f9d41  6a20                 push 0x20
// 007f9d43  51                   push ecx
// 007f9d44  51                   push ecx
// 007f9d45  33c0                 xor eax, eax
// 007f9d47  6838f09700           push 0x97f038
// 007f9d4c  a330f09700           mov dword ptr [0x97f030], eax
// 007f9d51  890d34f09700         mov dword ptr [0x97f034], ecx
// 007f9d57  ffd6                 call esi
// 007f9d59  6a7a                 push 0x7a
// 007f9d5b  6a1d                 push 0x1d
// 007f9d5d  33c9                 xor ecx, ecx
// 007f9d5f  6a5a                 push 0x5a
// 007f9d61  51                   push ecx
// 007f9d62  33c0                 xor eax, eax
// 007f9d64  6850f09700           push 0x97f050
// 007f9d69  a348f09700           mov dword ptr [0x97f048], eax
// 007f9d6e  890d4cf09700         mov dword ptr [0x97f04c], ecx
// 007f9d74  ffd6                 call esi
// 007f9d76  6a7a                 push 0x7a
// 007f9d78  6a3d                 push 0x3d
// 007f9d7a  6a5d                 push 0x5d
// 007f9d7c  6a1d                 push 0x1d
// 007f9d7e  33c0                 xor eax, eax
// 007f9d80  33c9                 xor ecx, ecx
// 007f9d82  6868f09700           push 0x97f068
// 007f9d87  a360f09700           mov dword ptr [0x97f060], eax
// 007f9d8c  890d64f09700         mov dword ptr [0x97f064], ecx
// 007f9d92  ffd6                 call esi
// 007f9d94  6a5d                 push 0x5d
// 007f9d96  6a3d                 push 0x3d
// 007f9d98  6a3d                 push 0x3d
// 007f9d9a  6a20                 push 0x20
// 007f9d9c  33c0                 xor eax, eax
// 007f9d9e  33c9                 xor ecx, ecx
// 007f9da0  6880f09700           push 0x97f080
// 007f9da5  a378f09700           mov dword ptr [0x97f078], eax
// 007f9daa  890d7cf09700         mov dword ptr [0x97f07c], ecx
// 007f9db0  ffd6                 call esi
// 007f9db2  6a5a                 push 0x5a
// 007f9db4  6a20                 push 0x20
// 007f9db6  33c9                 xor ecx, ecx
// 007f9db8  6a3d                 push 0x3d
// 007f9dba  51                   push ecx
// 007f9dbb  33c0                 xor eax, eax
// 007f9dbd  6898f09700           push 0x97f098
// 007f9dc2  a390f09700           mov dword ptr [0x97f090], eax
// 007f9dc7  890d94f09700         mov dword ptr [0x97f094], ecx
// 007f9dcd  ffd6                 call esi
// 007f9dcf  5e                   pop esi
// 007f9dd0  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ??__EarrSpritesStyckerVisualStudio2005@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
