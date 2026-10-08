// roc 2007-03 004709f0  unit: seg_00470000  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004709f0
//
// 004709f0  8b442404             mov eax, dword ptr [esp + 4]
// 004709f4  53                   push ebx
// 004709f5  55                   push ebp
// 004709f6  56                   push esi
// 004709f7  8bf1                 mov esi, ecx
// 004709f9  8b6e04               mov ebp, dword ptr [esi + 4]
// 004709fc  b901000000           mov ecx, 1
// 00470a01  894604               mov dword ptr [esi + 4], eax
// 00470a04  840d68778b00         test byte ptr [0x8b7768], cl
// 00470a0a  57                   push edi
// 00470a0b  7513                 jne 0x470a20
// 00470a0d  090d68778b00         or dword ptr [0x8b7768], ecx
// 00470a13  bb20000000           mov ebx, 0x20
// 00470a18  891d64778b00         mov dword ptr [0x8b7764], ebx
// 00470a1e  eb06                 jmp 0x470a26
// 00470a20  8b1d64778b00         mov ebx, dword ptr [0x8b7764]
// 00470a26  8b4e08               mov ecx, dword ptr [esi + 8]
// 00470a29  8b7e04               mov edi, dword ptr [esi + 4]
// 00470a2c  3bf9                 cmp edi, ecx
// 00470a2e  0f8e8e000000         jle 0x470ac2
// 00470a34  85c9                 test ecx, ecx
// 00470a36  7512                 jne 0x470a4a
// 00470a38  55                   push ebp
// 00470a39  8bce                 mov ecx, esi
// 00470a3b  894608               mov dword ptr [esi + 8], eax
// 00470a3e  e8bdf9ffff           call 0x470400
// 00470a43  5f                   pop edi
// 00470a44  5e                   pop esi
// 00470a45  5d                   pop ebp
// 00470a46  5b                   pop ebx
// 00470a47  c20800               ret 8
// 00470a4a  3bfb                 cmp edi, ebx
// 00470a4c  7d12                 jge 0x470a60
// 00470a4e  55                   push ebp
// 00470a4f  8bce                 mov ecx, esi
// 00470a51  895e08               mov dword ptr [esi + 8], ebx
// 00470a54  e8a7f9ffff           call 0x470400
// 00470a59  5f                   pop edi
// 00470a5a  5e                   pop esi
// 00470a5b  5d                   pop ebp
// 00470a5c  5b                   pop ebx
// 00470a5d  c20800               ret 8
// 00470a60  d905104c7900         fld dword ptr [0x794c10]
// 00470a66  8bc1                 mov eax, ecx
// 00470a68  3d801a0600           cmp eax, 0x61a80
// 00470a6d  d95c2418             fstp dword ptr [esp + 0x18]
// 00470a71  7608                 jbe 0x470a7b
// 00470a73  d9050c4c7900         fld dword ptr [0x794c0c]
// 00470a79  eb0d                 jmp 0x470a88
// 00470a7b  3d00fa0000           cmp eax, 0xfa00
// 00470a80  760a                 jbe 0x470a8c
// 00470a82  d905084c7900         fld dword ptr [0x794c08]
// 00470a88  d95c2418             fstp dword ptr [esp + 0x18]
// 00470a8c  8bd8                 mov ebx, eax
// 00470a8e  895c2414             mov dword ptr [esp + 0x14], ebx
// 00470a92  db442414             fild dword ptr [esp + 0x14]
// 00470a96  d84c2418             fmul dword ptr [esp + 0x18]
// 00470a9a  e861e71a00           call 0x61f200
// 00470a9f  2bc3                 sub eax, ebx
// 00470aa1  03c7                 add eax, edi
// 00470aa3  894608               mov dword ptr [esi + 8], eax
// 00470aa6  8b0d64778b00         mov ecx, dword ptr [0x8b7764]
// 00470aac  3bc1                 cmp eax, ecx
// 00470aae  7d03                 jge 0x470ab3
// 00470ab0  894e08               mov dword ptr [esi + 8], ecx
// 00470ab3  55                   push ebp
// 00470ab4  8bce                 mov ecx, esi
// 00470ab6  e845f9ffff           call 0x470400
// 00470abb  5f                   pop edi
// 00470abc  5e                   pop esi
// 00470abd  5d                   pop ebp
// 00470abe  5b                   pop ebx
// 00470abf  c20800               ret 8
// 00470ac2  b856555555           mov eax, 0x55555556
// 00470ac7  f7e9                 imul ecx
// 00470ac9  8bc2                 mov eax, edx
// 00470acb  c1e81f               shr eax, 0x1f
// 00470ace  03c2                 add eax, edx
// 00470ad0  3bf8                 cmp edi, eax
// 00470ad2  7f19                 jg 0x470aed
// 00470ad4  807c241800           cmp byte ptr [esp + 0x18], 0
// 00470ad9  7412                 je 0x470aed
// 00470adb  3bfb                 cmp edi, ebx
// 00470add  7e0e                 jle 0x470aed
// 00470adf  3bfd                 cmp edi, ebp
// 00470ae1  7c02                 jl 0x470ae5
// 00470ae3  8bfd                 mov edi, ebp
// 00470ae5  57                   push edi
// 00470ae6  8bce                 mov ecx, esi
// 00470ae8  e813f9ffff           call 0x470400
// 00470aed  5f                   pop edi
// 00470aee  5e                   pop esi
// 00470aef  5d                   pop ebp
// 00470af0  5b                   pop ebx
// 00470af1  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@_N@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp
