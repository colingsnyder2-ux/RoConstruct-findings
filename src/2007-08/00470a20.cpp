// roc 2007-08 00470a20  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00470a20
//
// 00470a20  8b442404             mov eax, dword ptr [esp + 4]
// 00470a24  53                   push ebx
// 00470a25  55                   push ebp
// 00470a26  56                   push esi
// 00470a27  8bf1                 mov esi, ecx
// 00470a29  8b6e04               mov ebp, dword ptr [esi + 4]
// 00470a2c  b901000000           mov ecx, 1
// 00470a31  894604               mov dword ptr [esi + 4], eax
// 00470a34  840da0d08b00         test byte ptr [0x8bd0a0], cl
// 00470a3a  57                   push edi
// 00470a3b  7513                 jne 0x470a50
// 00470a3d  090da0d08b00         or dword ptr [0x8bd0a0], ecx
// 00470a43  bb20000000           mov ebx, 0x20
// 00470a48  891d9cd08b00         mov dword ptr [0x8bd09c], ebx
// 00470a4e  eb06                 jmp 0x470a56
// 00470a50  8b1d9cd08b00         mov ebx, dword ptr [0x8bd09c]
// 00470a56  8b4e08               mov ecx, dword ptr [esi + 8]
// 00470a59  8b7e04               mov edi, dword ptr [esi + 4]
// 00470a5c  3bf9                 cmp edi, ecx
// 00470a5e  0f8e8e000000         jle 0x470af2
// 00470a64  85c9                 test ecx, ecx
// 00470a66  7512                 jne 0x470a7a
// 00470a68  55                   push ebp
// 00470a69  8bce                 mov ecx, esi
// 00470a6b  894608               mov dword ptr [esi + 8], eax
// 00470a6e  e83d800900           call 0x508ab0
// 00470a73  5f                   pop edi
// 00470a74  5e                   pop esi
// 00470a75  5d                   pop ebp
// 00470a76  5b                   pop ebx
// 00470a77  c20800               ret 8
// 00470a7a  3bfb                 cmp edi, ebx
// 00470a7c  7d12                 jge 0x470a90
// 00470a7e  55                   push ebp
// 00470a7f  8bce                 mov ecx, esi
// 00470a81  895e08               mov dword ptr [esi + 8], ebx
// 00470a84  e827800900           call 0x508ab0
// 00470a89  5f                   pop edi
// 00470a8a  5e                   pop esi
// 00470a8b  5d                   pop ebp
// 00470a8c  5b                   pop ebx
// 00470a8d  c20800               ret 8
// 00470a90  d905387b7900         fld dword ptr [0x797b38]
// 00470a96  8bc1                 mov eax, ecx
// 00470a98  3d801a0600           cmp eax, 0x61a80
// 00470a9d  d95c2418             fstp dword ptr [esp + 0x18]
// 00470aa1  7608                 jbe 0x470aab
// 00470aa3  d905347b7900         fld dword ptr [0x797b34]
// 00470aa9  eb0d                 jmp 0x470ab8
// 00470aab  3d00fa0000           cmp eax, 0xfa00
// 00470ab0  760a                 jbe 0x470abc
// 00470ab2  d90588797900         fld dword ptr [0x797988]
// 00470ab8  d95c2418             fstp dword ptr [esp + 0x18]
// 00470abc  8bd8                 mov ebx, eax
// 00470abe  895c2414             mov dword ptr [esp + 0x14], ebx
// 00470ac2  db442414             fild dword ptr [esp + 0x14]
// 00470ac6  d84c2418             fmul dword ptr [esp + 0x18]
// 00470aca  e891021c00           call 0x630d60
// 00470acf  2bc3                 sub eax, ebx
// 00470ad1  03c7                 add eax, edi
// 00470ad3  894608               mov dword ptr [esi + 8], eax
// 00470ad6  8b0d9cd08b00         mov ecx, dword ptr [0x8bd09c]
// 00470adc  3bc1                 cmp eax, ecx
// 00470ade  7d03                 jge 0x470ae3
// 00470ae0  894e08               mov dword ptr [esi + 8], ecx
// 00470ae3  55                   push ebp
// 00470ae4  8bce                 mov ecx, esi
// 00470ae6  e8c57f0900           call 0x508ab0
// 00470aeb  5f                   pop edi
// 00470aec  5e                   pop esi
// 00470aed  5d                   pop ebp
// 00470aee  5b                   pop ebx
// 00470aef  c20800               ret 8
// 00470af2  b856555555           mov eax, 0x55555556
// 00470af7  f7e9                 imul ecx
// 00470af9  8bc2                 mov eax, edx
// 00470afb  c1e81f               shr eax, 0x1f
// 00470afe  03c2                 add eax, edx
// 00470b00  3bf8                 cmp edi, eax
// 00470b02  7f19                 jg 0x470b1d
// 00470b04  807c241800           cmp byte ptr [esp + 0x18], 0
// 00470b09  7412                 je 0x470b1d
// 00470b0b  3bfb                 cmp edi, ebx
// 00470b0d  7e0e                 jle 0x470b1d
// 00470b0f  3bfd                 cmp edi, ebp
// 00470b11  7c02                 jl 0x470b15
// 00470b13  8bfd                 mov edi, ebp
// 00470b15  57                   push edi
// 00470b16  8bce                 mov ecx, esi
// 00470b18  e8937f0900           call 0x508ab0
// 00470b1d  5f                   pop edi
// 00470b1e  5e                   pop esi
// 00470b1f  5d                   pop ebp
// 00470b20  5b                   pop ebx
// 00470b21  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?resize@?$Array@E@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
