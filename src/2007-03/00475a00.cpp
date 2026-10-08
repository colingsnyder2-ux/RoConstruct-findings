// roc 2007-03 00475a00  unit: seg_00470000  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475a00
//
// 00475a00  8b442404             mov eax, dword ptr [esp + 4]
// 00475a04  53                   push ebx
// 00475a05  55                   push ebp
// 00475a06  56                   push esi
// 00475a07  8bf1                 mov esi, ecx
// 00475a09  8b6e04               mov ebp, dword ptr [esi + 4]
// 00475a0c  b901000000           mov ecx, 1
// 00475a11  894604               mov dword ptr [esi + 4], eax
// 00475a14  840d0c788b00         test byte ptr [0x8b780c], cl
// 00475a1a  57                   push edi
// 00475a1b  7513                 jne 0x475a30
// 00475a1d  090d0c788b00         or dword ptr [0x8b780c], ecx
// 00475a23  bb10000000           mov ebx, 0x10
// 00475a28  891d08788b00         mov dword ptr [0x8b7808], ebx
// 00475a2e  eb06                 jmp 0x475a36
// 00475a30  8b1d08788b00         mov ebx, dword ptr [0x8b7808]
// 00475a36  8b4e08               mov ecx, dword ptr [esi + 8]
// 00475a39  8b7e04               mov edi, dword ptr [esi + 4]
// 00475a3c  3bf9                 cmp edi, ecx
// 00475a3e  0f8e90000000         jle 0x475ad4
// 00475a44  85c9                 test ecx, ecx
// 00475a46  7512                 jne 0x475a5a
// 00475a48  55                   push ebp
// 00475a49  8bce                 mov ecx, esi
// 00475a4b  894608               mov dword ptr [esi + 8], eax
// 00475a4e  e88df6ffff           call 0x4750e0
// 00475a53  5f                   pop edi
// 00475a54  5e                   pop esi
// 00475a55  5d                   pop ebp
// 00475a56  5b                   pop ebx
// 00475a57  c20800               ret 8
// 00475a5a  3bfb                 cmp edi, ebx
// 00475a5c  7d12                 jge 0x475a70
// 00475a5e  55                   push ebp
// 00475a5f  8bce                 mov ecx, esi
// 00475a61  895e08               mov dword ptr [esi + 8], ebx
// 00475a64  e877f6ffff           call 0x4750e0
// 00475a69  5f                   pop edi
// 00475a6a  5e                   pop esi
// 00475a6b  5d                   pop ebp
// 00475a6c  5b                   pop ebx
// 00475a6d  c20800               ret 8
// 00475a70  d905104c7900         fld dword ptr [0x794c10]
// 00475a76  8bc1                 mov eax, ecx
// 00475a78  03c0                 add eax, eax
// 00475a7a  d95c2418             fstp dword ptr [esp + 0x18]
// 00475a7e  3d801a0600           cmp eax, 0x61a80
// 00475a83  7608                 jbe 0x475a8d
// 00475a85  d9050c4c7900         fld dword ptr [0x794c0c]
// 00475a8b  eb0d                 jmp 0x475a9a
// 00475a8d  3d00fa0000           cmp eax, 0xfa00
// 00475a92  760a                 jbe 0x475a9e
// 00475a94  d905084c7900         fld dword ptr [0x794c08]
// 00475a9a  d95c2418             fstp dword ptr [esp + 0x18]
// 00475a9e  8bd9                 mov ebx, ecx
// 00475aa0  895c2414             mov dword ptr [esp + 0x14], ebx
// 00475aa4  db442414             fild dword ptr [esp + 0x14]
// 00475aa8  d84c2418             fmul dword ptr [esp + 0x18]
// 00475aac  e84f971a00           call 0x61f200
// 00475ab1  2bc3                 sub eax, ebx
// 00475ab3  03c7                 add eax, edi
// 00475ab5  894608               mov dword ptr [esi + 8], eax
// 00475ab8  8b0d08788b00         mov ecx, dword ptr [0x8b7808]
// 00475abe  3bc1                 cmp eax, ecx
// 00475ac0  7d03                 jge 0x475ac5
// 00475ac2  894e08               mov dword ptr [esi + 8], ecx
// 00475ac5  55                   push ebp
// 00475ac6  8bce                 mov ecx, esi
// 00475ac8  e813f6ffff           call 0x4750e0
// 00475acd  5f                   pop edi
// 00475ace  5e                   pop esi
// 00475acf  5d                   pop ebp
// 00475ad0  5b                   pop ebx
// 00475ad1  c20800               ret 8
// 00475ad4  b856555555           mov eax, 0x55555556
// 00475ad9  f7e9                 imul ecx
// 00475adb  8bc2                 mov eax, edx
// 00475add  c1e81f               shr eax, 0x1f
// 00475ae0  03c2                 add eax, edx
// 00475ae2  3bf8                 cmp edi, eax
// 00475ae4  7f19                 jg 0x475aff
// 00475ae6  807c241800           cmp byte ptr [esp + 0x18], 0
// 00475aeb  7412                 je 0x475aff
// 00475aed  3bfb                 cmp edi, ebx
// 00475aef  7e0e                 jle 0x475aff
// 00475af1  3bfd                 cmp edi, ebp
// 00475af3  7c02                 jl 0x475af7
// 00475af5  8bfd                 mov edi, ebp
// 00475af7  57                   push edi
// 00475af8  8bce                 mov ecx, esi
// 00475afa  e8e1f5ffff           call 0x4750e0
// 00475aff  5f                   pop edi
// 00475b00  5e                   pop esi
// 00475b01  5d                   pop ebp
// 00475b02  5b                   pop ebx
// 00475b03  c20800               ret 8
// library rbxgs-render/Chunk.cpp (function ?resize@?$Array@G@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Chunk.cpp
