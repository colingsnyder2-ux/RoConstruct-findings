// from server: 100% by auto
// roc 2007-08 00776af0  unit: seg_00770000  size: 381 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776af0
//
// 00776af0  56                   push esi
// 00776af1  8b3578ed7700         mov esi, dword ptr [0x77ed78]
// 00776af7  6a1e                 push 0x1e
// 00776af9  33c9                 xor ecx, ecx
// 00776afb  6a2b                 push 0x2b
// 00776afd  51                   push ecx
// 00776afe  51                   push ecx
// 00776aff  b819000000           mov eax, 0x19
// 00776b04  6858938c00           push 0x8c9358
// 00776b09  a350938c00           mov dword ptr [0x8c9350], eax
// 00776b0e  890d54938c00         mov dword ptr [0x8c9354], ecx
// 00776b14  ffd6                 call esi
// 00776b16  6a4c                 push 0x4c
// 00776b18  6a3c                 push 0x3c
// 00776b1a  6a21                 push 0x21
// 00776b1c  6a1e                 push 0x1e
// 00776b1e  33c0                 xor eax, eax
// 00776b20  b919000000           mov ecx, 0x19
// 00776b25  6870938c00           push 0x8c9370
// 00776b2a  a368938c00           mov dword ptr [0x8c9368], eax
// 00776b2f  890d6c938c00         mov dword ptr [0x8c936c], ecx
// 00776b35  ffd6                 call esi
// 00776b37  6a1e                 push 0x1e
// 00776b39  6a56                 push 0x56
// 00776b3b  6a00                 push 0
// 00776b3d  6a2b                 push 0x2b
// 00776b3f  b819000000           mov eax, 0x19
// 00776b44  b93f000000           mov ecx, 0x3f
// 00776b49  6888938c00           push 0x8c9388
// 00776b4e  a380938c00           mov dword ptr [0x8c9380], eax
// 00776b53  890d84938c00         mov dword ptr [0x8c9384], ecx
// 00776b59  ffd6                 call esi
// 00776b5b  6a4c                 push 0x4c
// 00776b5d  6a1e                 push 0x1e
// 00776b5f  6a21                 push 0x21
// 00776b61  6a00                 push 0
// 00776b63  b83f000000           mov eax, 0x3f
// 00776b68  b919000000           mov ecx, 0x19
// 00776b6d  68a0938c00           push 0x8c93a0
// 00776b72  a398938c00           mov dword ptr [0x8c9398], eax
// 00776b77  890d9c938c00         mov dword ptr [0x8c939c], ecx
// 00776b7d  ffd6                 call esi
// 00776b7f  6a6a                 push 0x6a
// 00776b81  6a2b                 push 0x2b
// 00776b83  33c9                 xor ecx, ecx
// 00776b85  6a4c                 push 0x4c
// 00776b87  51                   push ecx
// 00776b88  b819000000           mov eax, 0x19
// 00776b8d  68b8938c00           push 0x8c93b8
// 00776b92  a3b0938c00           mov dword ptr [0x8c93b0], eax
// 00776b97  890db4938c00         mov dword ptr [0x8c93b4], ecx
// 00776b9d  ffd6                 call esi
// 00776b9f  6a4c                 push 0x4c
// 00776ba1  6a78                 push 0x78
// 00776ba3  6a21                 push 0x21
// 00776ba5  6a5a                 push 0x5a
// 00776ba7  33c0                 xor eax, eax
// 00776ba9  b919000000           mov ecx, 0x19
// 00776bae  68d0938c00           push 0x8c93d0
// 00776bb3  a3c8938c00           mov dword ptr [0x8c93c8], eax
// 00776bb8  890dcc938c00         mov dword ptr [0x8c93cc], ecx
// 00776bbe  ffd6                 call esi
// 00776bc0  6a6a                 push 0x6a
// 00776bc2  6a56                 push 0x56
// 00776bc4  6a4c                 push 0x4c
// 00776bc6  6a2b                 push 0x2b
// 00776bc8  b819000000           mov eax, 0x19
// 00776bcd  b93f000000           mov ecx, 0x3f
// 00776bd2  68e8938c00           push 0x8c93e8
// 00776bd7  a3e0938c00           mov dword ptr [0x8c93e0], eax
// 00776bdc  890de4938c00         mov dword ptr [0x8c93e4], ecx
// 00776be2  ffd6                 call esi
// 00776be4  6a4c                 push 0x4c
// 00776be6  6a5a                 push 0x5a
// 00776be8  6a21                 push 0x21
// 00776bea  b83f000000           mov eax, 0x3f
// 00776bef  b919000000           mov ecx, 0x19
// 00776bf4  6a3c                 push 0x3c
// 00776bf6  a3f8938c00           mov dword ptr [0x8c93f8], eax
// 00776bfb  890dfc938c00         mov dword ptr [0x8c93fc], ecx
// 00776c01  6800948c00           push 0x8c9400
// 00776c06  ffd6                 call esi
// 00776c08  6a21                 push 0x21
// 00776c0a  6a77                 push 0x77
// 00776c0c  6a00                 push 0
// 00776c0e  b81e000000           mov eax, 0x1e
// 00776c13  6a56                 push 0x56
// 00776c15  8bc8                 mov ecx, eax
// 00776c17  6818948c00           push 0x8c9418
// 00776c1c  a310948c00           mov dword ptr [0x8c9410], eax
// 00776c21  890d14948c00         mov dword ptr [0x8c9414], ecx
// 00776c27  ffd6                 call esi
// 00776c29  6a6d                 push 0x6d
// 00776c2b  6a77                 push 0x77
// 00776c2d  6a4c                 push 0x4c
// 00776c2f  b81e000000           mov eax, 0x1e
// 00776c34  6a56                 push 0x56
// 00776c36  8bc8                 mov ecx, eax
// 00776c38  6830948c00           push 0x8c9430
// 00776c3d  a328948c00           mov dword ptr [0x8c9428], eax
// 00776c42  890d2c948c00         mov dword ptr [0x8c942c], ecx
// 00776c48  ffd6                 call esi
// 00776c4a  6a2b                 push 0x2b
// 00776c4c  6a2b                 push 0x2b
// 00776c4e  6a00                 push 0
// 00776c50  b819000000           mov eax, 0x19
// 00776c55  6a00                 push 0
// 00776c57  8bc8                 mov ecx, eax
// 00776c59  6848948c00           push 0x8c9448
// 00776c5e  a340948c00           mov dword ptr [0x8c9440], eax
// 00776c63  890d44948c00         mov dword ptr [0x8c9444], ecx
// 00776c69  ffd6                 call esi
// 00776c6b  5e                   pop esi
// 00776c6c  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneContext.cpp (function ??__EarrSpritesStyckerWidbey@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneContext.cpp
