// from server: 100% by auto
// roc 2012-06 00b10d30  unit: seg_00b10000  size: 381 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00b10d30
//
// 00b10d30  56                   push esi
// 00b10d31  8b356c3bb200         mov esi, dword ptr [0xb23b6c]
// 00b10d37  6a1e                 push 0x1e
// 00b10d39  33c9                 xor ecx, ecx
// 00b10d3b  6a2b                 push 0x2b
// 00b10d3d  51                   push ecx
// 00b10d3e  51                   push ecx
// 00b10d3f  b819000000           mov eax, 0x19
// 00b10d44  68b8a0e500           push 0xe5a0b8
// 00b10d49  a3b0a0e500           mov dword ptr [0xe5a0b0], eax
// 00b10d4e  890db4a0e500         mov dword ptr [0xe5a0b4], ecx
// 00b10d54  ffd6                 call esi
// 00b10d56  6a4c                 push 0x4c
// 00b10d58  6a3c                 push 0x3c
// 00b10d5a  6a21                 push 0x21
// 00b10d5c  6a1e                 push 0x1e
// 00b10d5e  33c0                 xor eax, eax
// 00b10d60  b919000000           mov ecx, 0x19
// 00b10d65  68d0a0e500           push 0xe5a0d0
// 00b10d6a  a3c8a0e500           mov dword ptr [0xe5a0c8], eax
// 00b10d6f  890dcca0e500         mov dword ptr [0xe5a0cc], ecx
// 00b10d75  ffd6                 call esi
// 00b10d77  6a1e                 push 0x1e
// 00b10d79  6a56                 push 0x56
// 00b10d7b  6a00                 push 0
// 00b10d7d  6a2b                 push 0x2b
// 00b10d7f  b819000000           mov eax, 0x19
// 00b10d84  b93f000000           mov ecx, 0x3f
// 00b10d89  68e8a0e500           push 0xe5a0e8
// 00b10d8e  a3e0a0e500           mov dword ptr [0xe5a0e0], eax
// 00b10d93  890de4a0e500         mov dword ptr [0xe5a0e4], ecx
// 00b10d99  ffd6                 call esi
// 00b10d9b  6a4c                 push 0x4c
// 00b10d9d  6a1e                 push 0x1e
// 00b10d9f  6a21                 push 0x21
// 00b10da1  6a00                 push 0
// 00b10da3  b83f000000           mov eax, 0x3f
// 00b10da8  b919000000           mov ecx, 0x19
// 00b10dad  6800a1e500           push 0xe5a100
// 00b10db2  a3f8a0e500           mov dword ptr [0xe5a0f8], eax
// 00b10db7  890dfca0e500         mov dword ptr [0xe5a0fc], ecx
// 00b10dbd  ffd6                 call esi
// 00b10dbf  6a6a                 push 0x6a
// 00b10dc1  6a2b                 push 0x2b
// 00b10dc3  33c9                 xor ecx, ecx
// 00b10dc5  6a4c                 push 0x4c
// 00b10dc7  51                   push ecx
// 00b10dc8  b819000000           mov eax, 0x19
// 00b10dcd  6818a1e500           push 0xe5a118
// 00b10dd2  a310a1e500           mov dword ptr [0xe5a110], eax
// 00b10dd7  890d14a1e500         mov dword ptr [0xe5a114], ecx
// 00b10ddd  ffd6                 call esi
// 00b10ddf  6a4c                 push 0x4c
// 00b10de1  6a78                 push 0x78
// 00b10de3  6a21                 push 0x21
// 00b10de5  6a5a                 push 0x5a
// 00b10de7  33c0                 xor eax, eax
// 00b10de9  b919000000           mov ecx, 0x19
// 00b10dee  6830a1e500           push 0xe5a130
// 00b10df3  a328a1e500           mov dword ptr [0xe5a128], eax
// 00b10df8  890d2ca1e500         mov dword ptr [0xe5a12c], ecx
// 00b10dfe  ffd6                 call esi
// 00b10e00  6a6a                 push 0x6a
// 00b10e02  6a56                 push 0x56
// 00b10e04  6a4c                 push 0x4c
// 00b10e06  6a2b                 push 0x2b
// 00b10e08  b819000000           mov eax, 0x19
// 00b10e0d  b93f000000           mov ecx, 0x3f
// 00b10e12  6848a1e500           push 0xe5a148
// 00b10e17  a340a1e500           mov dword ptr [0xe5a140], eax
// 00b10e1c  890d44a1e500         mov dword ptr [0xe5a144], ecx
// 00b10e22  ffd6                 call esi
// 00b10e24  6a4c                 push 0x4c
// 00b10e26  6a5a                 push 0x5a
// 00b10e28  6a21                 push 0x21
// 00b10e2a  b83f000000           mov eax, 0x3f
// 00b10e2f  b919000000           mov ecx, 0x19
// 00b10e34  6a3c                 push 0x3c
// 00b10e36  a358a1e500           mov dword ptr [0xe5a158], eax
// 00b10e3b  890d5ca1e500         mov dword ptr [0xe5a15c], ecx
// 00b10e41  6860a1e500           push 0xe5a160
// 00b10e46  ffd6                 call esi
// 00b10e48  6a21                 push 0x21
// 00b10e4a  6a77                 push 0x77
// 00b10e4c  6a00                 push 0
// 00b10e4e  b81e000000           mov eax, 0x1e
// 00b10e53  6a56                 push 0x56
// 00b10e55  8bc8                 mov ecx, eax
// 00b10e57  6878a1e500           push 0xe5a178
// 00b10e5c  a370a1e500           mov dword ptr [0xe5a170], eax
// 00b10e61  890d74a1e500         mov dword ptr [0xe5a174], ecx
// 00b10e67  ffd6                 call esi
// 00b10e69  6a6d                 push 0x6d
// 00b10e6b  6a77                 push 0x77
// 00b10e6d  6a4c                 push 0x4c
// 00b10e6f  b81e000000           mov eax, 0x1e
// 00b10e74  6a56                 push 0x56
// 00b10e76  8bc8                 mov ecx, eax
// 00b10e78  6890a1e500           push 0xe5a190
// 00b10e7d  a388a1e500           mov dword ptr [0xe5a188], eax
// 00b10e82  890d8ca1e500         mov dword ptr [0xe5a18c], ecx
// 00b10e88  ffd6                 call esi
// 00b10e8a  6a2b                 push 0x2b
// 00b10e8c  6a2b                 push 0x2b
// 00b10e8e  6a00                 push 0
// 00b10e90  b819000000           mov eax, 0x19
// 00b10e95  6a00                 push 0
// 00b10e97  8bc8                 mov ecx, eax
// 00b10e99  68a8a1e500           push 0xe5a1a8
// 00b10e9e  a3a0a1e500           mov dword ptr [0xe5a1a0], eax
// 00b10ea3  890da4a1e500         mov dword ptr [0xe5a1a4], ecx
// 00b10ea9  ffd6                 call esi
// 00b10eab  5e                   pop esi
// 00b10eac  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneContext.cpp (function ??__EarrSpritesStyckerWidbey@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneContext.cpp
