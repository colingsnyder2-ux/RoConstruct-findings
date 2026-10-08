// roc 2007-03 004f9f90  unit: seg_004f0000  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f9f90
//
// 004f9f90  8b442404             mov eax, dword ptr [esp + 4]
// 004f9f94  53                   push ebx
// 004f9f95  55                   push ebp
// 004f9f96  56                   push esi
// 004f9f97  8bf1                 mov esi, ecx
// 004f9f99  8b5e04               mov ebx, dword ptr [esi + 4]
// 004f9f9c  894604               mov dword ptr [esi + 4], eax
// 004f9f9f  f60568ae8b0001       test byte ptr [0x8bae68], 1
// 004f9fa6  57                   push edi
// 004f9fa7  7514                 jne 0x4f9fbd
// 004f9fa9  830d68ae8b0001       or dword ptr [0x8bae68], 1
// 004f9fb0  bd0a000000           mov ebp, 0xa
// 004f9fb5  892d64ae8b00         mov dword ptr [0x8bae64], ebp
// 004f9fbb  eb06                 jmp 0x4f9fc3
// 004f9fbd  8b2d64ae8b00         mov ebp, dword ptr [0x8bae64]
// 004f9fc3  8b7e04               mov edi, dword ptr [esi + 4]
// 004f9fc6  8b4e08               mov ecx, dword ptr [esi + 8]
// 004f9fc9  3bf9                 cmp edi, ecx
// 004f9fcb  7e71                 jle 0x4fa03e
// 004f9fcd  85c9                 test ecx, ecx
// 004f9fcf  7509                 jne 0x4f9fda
// 004f9fd1  894608               mov dword ptr [esi + 8], eax
// 004f9fd4  53                   push ebx
// 004f9fd5  e988000000           jmp 0x4fa062
// 004f9fda  3bfd                 cmp edi, ebp
// 004f9fdc  7d06                 jge 0x4f9fe4
// 004f9fde  896e08               mov dword ptr [esi + 8], ebp
// 004f9fe1  53                   push ebx
// 004f9fe2  eb7e                 jmp 0x4fa062
// 004f9fe4  d905104c7900         fld dword ptr [0x794c10]
// 004f9fea  8bc1                 mov eax, ecx
// 004f9fec  03c0                 add eax, eax
// 004f9fee  d95c2418             fstp dword ptr [esp + 0x18]
// 004f9ff2  03c0                 add eax, eax
// 004f9ff4  3d801a0600           cmp eax, 0x61a80
// 004f9ff9  7608                 jbe 0x4fa003
// 004f9ffb  d9050c4c7900         fld dword ptr [0x794c0c]
// 004fa001  eb0d                 jmp 0x4fa010
// 004fa003  3d00fa0000           cmp eax, 0xfa00
// 004fa008  760a                 jbe 0x4fa014
// 004fa00a  d905084c7900         fld dword ptr [0x794c08]
// 004fa010  d95c2418             fstp dword ptr [esp + 0x18]
// 004fa014  8be9                 mov ebp, ecx
// 004fa016  896c2414             mov dword ptr [esp + 0x14], ebp
// 004fa01a  db442414             fild dword ptr [esp + 0x14]
// 004fa01e  d84c2418             fmul dword ptr [esp + 0x18]
// 004fa022  e8d9511200           call 0x61f200
// 004fa027  2bc5                 sub eax, ebp
// 004fa029  03c7                 add eax, edi
// 004fa02b  894608               mov dword ptr [esi + 8], eax
// 004fa02e  8b0d64ae8b00         mov ecx, dword ptr [0x8bae64]
// 004fa034  3bc1                 cmp eax, ecx
// 004fa036  7d03                 jge 0x4fa03b
// 004fa038  894e08               mov dword ptr [esi + 8], ecx
// 004fa03b  53                   push ebx
// 004fa03c  eb24                 jmp 0x4fa062
// 004fa03e  b856555555           mov eax, 0x55555556
// 004fa043  f7e9                 imul ecx
// 004fa045  8bc2                 mov eax, edx
// 004fa047  c1e81f               shr eax, 0x1f
// 004fa04a  03c2                 add eax, edx
// 004fa04c  3bf8                 cmp edi, eax
// 004fa04e  7f19                 jg 0x4fa069
// 004fa050  807c241800           cmp byte ptr [esp + 0x18], 0
// 004fa055  7412                 je 0x4fa069
// 004fa057  3bfd                 cmp edi, ebp
// 004fa059  7e0e                 jle 0x4fa069
// 004fa05b  3bfb                 cmp edi, ebx
// 004fa05d  7c02                 jl 0x4fa061
// 004fa05f  8bfb                 mov edi, ebx
// 004fa061  57                   push edi
// 004fa062  8bce                 mov ecx, esi
// 004fa064  e867da0c00           call 0x5c7ad0
// 004fa069  3b5e04               cmp ebx, dword ptr [esi + 4]
// 004fa06c  8bcb                 mov ecx, ebx
// 004fa06e  7d20                 jge 0x4fa090
// 004fa070  8b16                 mov edx, dword ptr [esi]
// 004fa072  8d048a               lea eax, [edx + ecx*4]
// 004fa075  85c0                 test eax, eax
// 004fa077  740f                 je 0x4fa088
// 004fa079  c60000               mov byte ptr [eax], 0
// 004fa07c  c6400100             mov byte ptr [eax + 1], 0
// 004fa080  c6400200             mov byte ptr [eax + 2], 0
// 004fa084  c6400300             mov byte ptr [eax + 3], 0
// 004fa088  83c101               add ecx, 1
// 004fa08b  3b4e04               cmp ecx, dword ptr [esi + 4]
// 004fa08e  7ce0                 jl 0x4fa070
// 004fa090  5f                   pop edi
// 004fa091  5e                   pop esi
// 004fa092  5d                   pop ebp
// 004fa093  5b                   pop ebx
// 004fa094  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\GImage_bmp.cpp (function ?resize@?$Array@VColor4uint8@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/GImage_bmp.cpp
