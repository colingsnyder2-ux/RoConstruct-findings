// roc 2008-06 007f99e0  unit: seg_007f0000  size: 381 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f99e0
//
// 007f99e0  56                   push esi
// 007f99e1  8b35102d8000         mov esi, dword ptr [0x802d10]
// 007f99e7  6a1e                 push 0x1e
// 007f99e9  33c9                 xor ecx, ecx
// 007f99eb  6a2b                 push 0x2b
// 007f99ed  51                   push ecx
// 007f99ee  51                   push ecx
// 007f99ef  b819000000           mov eax, 0x19
// 007f99f4  68e0ed9700           push 0x97ede0
// 007f99f9  a3d8ed9700           mov dword ptr [0x97edd8], eax
// 007f99fe  890ddced9700         mov dword ptr [0x97eddc], ecx
// 007f9a04  ffd6                 call esi
// 007f9a06  6a4c                 push 0x4c
// 007f9a08  6a3c                 push 0x3c
// 007f9a0a  6a21                 push 0x21
// 007f9a0c  6a1e                 push 0x1e
// 007f9a0e  33c0                 xor eax, eax
// 007f9a10  b919000000           mov ecx, 0x19
// 007f9a15  68f8ed9700           push 0x97edf8
// 007f9a1a  a3f0ed9700           mov dword ptr [0x97edf0], eax
// 007f9a1f  890df4ed9700         mov dword ptr [0x97edf4], ecx
// 007f9a25  ffd6                 call esi
// 007f9a27  6a1e                 push 0x1e
// 007f9a29  6a56                 push 0x56
// 007f9a2b  6a00                 push 0
// 007f9a2d  6a2b                 push 0x2b
// 007f9a2f  b819000000           mov eax, 0x19
// 007f9a34  b93f000000           mov ecx, 0x3f
// 007f9a39  6810ee9700           push 0x97ee10
// 007f9a3e  a308ee9700           mov dword ptr [0x97ee08], eax
// 007f9a43  890d0cee9700         mov dword ptr [0x97ee0c], ecx
// 007f9a49  ffd6                 call esi
// 007f9a4b  6a4c                 push 0x4c
// 007f9a4d  6a1e                 push 0x1e
// 007f9a4f  6a21                 push 0x21
// 007f9a51  6a00                 push 0
// 007f9a53  b83f000000           mov eax, 0x3f
// 007f9a58  b919000000           mov ecx, 0x19
// 007f9a5d  6828ee9700           push 0x97ee28
// 007f9a62  a320ee9700           mov dword ptr [0x97ee20], eax
// 007f9a67  890d24ee9700         mov dword ptr [0x97ee24], ecx
// 007f9a6d  ffd6                 call esi
// 007f9a6f  6a6a                 push 0x6a
// 007f9a71  6a2b                 push 0x2b
// 007f9a73  33c9                 xor ecx, ecx
// 007f9a75  6a4c                 push 0x4c
// 007f9a77  51                   push ecx
// 007f9a78  b819000000           mov eax, 0x19
// 007f9a7d  6840ee9700           push 0x97ee40
// 007f9a82  a338ee9700           mov dword ptr [0x97ee38], eax
// 007f9a87  890d3cee9700         mov dword ptr [0x97ee3c], ecx
// 007f9a8d  ffd6                 call esi
// 007f9a8f  6a4c                 push 0x4c
// 007f9a91  6a78                 push 0x78
// 007f9a93  6a21                 push 0x21
// 007f9a95  6a5a                 push 0x5a
// 007f9a97  33c0                 xor eax, eax
// 007f9a99  b919000000           mov ecx, 0x19
// 007f9a9e  6858ee9700           push 0x97ee58
// 007f9aa3  a350ee9700           mov dword ptr [0x97ee50], eax
// 007f9aa8  890d54ee9700         mov dword ptr [0x97ee54], ecx
// 007f9aae  ffd6                 call esi
// 007f9ab0  6a6a                 push 0x6a
// 007f9ab2  6a56                 push 0x56
// 007f9ab4  6a4c                 push 0x4c
// 007f9ab6  6a2b                 push 0x2b
// 007f9ab8  b819000000           mov eax, 0x19
// 007f9abd  b93f000000           mov ecx, 0x3f
// 007f9ac2  6870ee9700           push 0x97ee70
// 007f9ac7  a368ee9700           mov dword ptr [0x97ee68], eax
// 007f9acc  890d6cee9700         mov dword ptr [0x97ee6c], ecx
// 007f9ad2  ffd6                 call esi
// 007f9ad4  6a4c                 push 0x4c
// 007f9ad6  6a5a                 push 0x5a
// 007f9ad8  6a21                 push 0x21
// 007f9ada  b83f000000           mov eax, 0x3f
// 007f9adf  b919000000           mov ecx, 0x19
// 007f9ae4  6a3c                 push 0x3c
// 007f9ae6  a380ee9700           mov dword ptr [0x97ee80], eax
// 007f9aeb  890d84ee9700         mov dword ptr [0x97ee84], ecx
// 007f9af1  6888ee9700           push 0x97ee88
// 007f9af6  ffd6                 call esi
// 007f9af8  6a21                 push 0x21
// 007f9afa  6a77                 push 0x77
// 007f9afc  6a00                 push 0
// 007f9afe  b81e000000           mov eax, 0x1e
// 007f9b03  6a56                 push 0x56
// 007f9b05  8bc8                 mov ecx, eax
// 007f9b07  68a0ee9700           push 0x97eea0
// 007f9b0c  a398ee9700           mov dword ptr [0x97ee98], eax
// 007f9b11  890d9cee9700         mov dword ptr [0x97ee9c], ecx
// 007f9b17  ffd6                 call esi
// 007f9b19  6a6d                 push 0x6d
// 007f9b1b  6a77                 push 0x77
// 007f9b1d  6a4c                 push 0x4c
// 007f9b1f  b81e000000           mov eax, 0x1e
// 007f9b24  6a56                 push 0x56
// 007f9b26  8bc8                 mov ecx, eax
// 007f9b28  68b8ee9700           push 0x97eeb8
// 007f9b2d  a3b0ee9700           mov dword ptr [0x97eeb0], eax
// 007f9b32  890db4ee9700         mov dword ptr [0x97eeb4], ecx
// 007f9b38  ffd6                 call esi
// 007f9b3a  6a2b                 push 0x2b
// 007f9b3c  6a2b                 push 0x2b
// 007f9b3e  6a00                 push 0
// 007f9b40  b819000000           mov eax, 0x19
// 007f9b45  6a00                 push 0
// 007f9b47  8bc8                 mov ecx, eax
// 007f9b49  68d0ee9700           push 0x97eed0
// 007f9b4e  a3c8ee9700           mov dword ptr [0x97eec8], eax
// 007f9b53  890dccee9700         mov dword ptr [0x97eecc], ecx
// 007f9b59  ffd6                 call esi
// 007f9b5b  5e                   pop esi
// 007f9b5c  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ??__EarrSpritesStyckerWidbey@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
