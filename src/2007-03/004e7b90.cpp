// roc 2007-03 004e7b90  unit: seg_004e0000  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e7b90
//
// 004e7b90  8b442404             mov eax, dword ptr [esp + 4]
// 004e7b94  53                   push ebx
// 004e7b95  55                   push ebp
// 004e7b96  56                   push esi
// 004e7b97  8bf1                 mov esi, ecx
// 004e7b99  8b6e04               mov ebp, dword ptr [esi + 4]
// 004e7b9c  894604               mov dword ptr [esi + 4], eax
// 004e7b9f  f6057ca08b0001       test byte ptr [0x8ba07c], 1
// 004e7ba6  57                   push edi
// 004e7ba7  7514                 jne 0x4e7bbd
// 004e7ba9  830d7ca08b0001       or dword ptr [0x8ba07c], 1
// 004e7bb0  bb0a000000           mov ebx, 0xa
// 004e7bb5  891d78a08b00         mov dword ptr [0x8ba078], ebx
// 004e7bbb  eb06                 jmp 0x4e7bc3
// 004e7bbd  8b1d78a08b00         mov ebx, dword ptr [0x8ba078]
// 004e7bc3  8b7e04               mov edi, dword ptr [esi + 4]
// 004e7bc6  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e7bc9  3bf9                 cmp edi, ecx
// 004e7bcb  7e76                 jle 0x4e7c43
// 004e7bcd  85c9                 test ecx, ecx
// 004e7bcf  7509                 jne 0x4e7bda
// 004e7bd1  894608               mov dword ptr [esi + 8], eax
// 004e7bd4  55                   push ebp
// 004e7bd5  e98d000000           jmp 0x4e7c67
// 004e7bda  3bfb                 cmp edi, ebx
// 004e7bdc  7d09                 jge 0x4e7be7
// 004e7bde  895e08               mov dword ptr [esi + 8], ebx
// 004e7be1  55                   push ebp
// 004e7be2  e980000000           jmp 0x4e7c67
// 004e7be7  d905104c7900         fld dword ptr [0x794c10]
// 004e7bed  8bc1                 mov eax, ecx
// 004e7bef  03c0                 add eax, eax
// 004e7bf1  d95c2418             fstp dword ptr [esp + 0x18]
// 004e7bf5  03c0                 add eax, eax
// 004e7bf7  03c0                 add eax, eax
// 004e7bf9  3d801a0600           cmp eax, 0x61a80
// 004e7bfe  7608                 jbe 0x4e7c08
// 004e7c00  d9050c4c7900         fld dword ptr [0x794c0c]
// 004e7c06  eb0d                 jmp 0x4e7c15
// 004e7c08  3d00fa0000           cmp eax, 0xfa00
// 004e7c0d  760a                 jbe 0x4e7c19
// 004e7c0f  d905084c7900         fld dword ptr [0x794c08]
// 004e7c15  d95c2418             fstp dword ptr [esp + 0x18]
// 004e7c19  8bd9                 mov ebx, ecx
// 004e7c1b  895c2414             mov dword ptr [esp + 0x14], ebx
// 004e7c1f  db442414             fild dword ptr [esp + 0x14]
// 004e7c23  d84c2418             fmul dword ptr [esp + 0x18]
// 004e7c27  e8d4751300           call 0x61f200
// 004e7c2c  2bc3                 sub eax, ebx
// 004e7c2e  03c7                 add eax, edi
// 004e7c30  894608               mov dword ptr [esi + 8], eax
// 004e7c33  8b0d78a08b00         mov ecx, dword ptr [0x8ba078]
// 004e7c39  3bc1                 cmp eax, ecx
// 004e7c3b  7d03                 jge 0x4e7c40
// 004e7c3d  894e08               mov dword ptr [esi + 8], ecx
// 004e7c40  55                   push ebp
// 004e7c41  eb24                 jmp 0x4e7c67
// 004e7c43  b856555555           mov eax, 0x55555556
// 004e7c48  f7e9                 imul ecx
// 004e7c4a  8bc2                 mov eax, edx
// 004e7c4c  c1e81f               shr eax, 0x1f
// 004e7c4f  03c2                 add eax, edx
// 004e7c51  3bf8                 cmp edi, eax
// 004e7c53  7f19                 jg 0x4e7c6e
// 004e7c55  807c241800           cmp byte ptr [esp + 0x18], 0
// 004e7c5a  7412                 je 0x4e7c6e
// 004e7c5c  3bfb                 cmp edi, ebx
// 004e7c5e  7e0e                 jle 0x4e7c6e
// 004e7c60  3bfd                 cmp edi, ebp
// 004e7c62  7c02                 jl 0x4e7c66
// 004e7c64  8bfd                 mov edi, ebp
// 004e7c66  57                   push edi
// 004e7c67  8bce                 mov ecx, esi
// 004e7c69  e8a2fbffff           call 0x4e7810
// 004e7c6e  3b6e04               cmp ebp, dword ptr [esi + 4]
// 004e7c71  8bc5                 mov eax, ebp
// 004e7c73  7d1a                 jge 0x4e7c8f
// 004e7c75  d9ee                 fldz 
// 004e7c77  8b0e                 mov ecx, dword ptr [esi]
// 004e7c79  8d0cc1               lea ecx, [ecx + eax*8]
// 004e7c7c  85c9                 test ecx, ecx
// 004e7c7e  7405                 je 0x4e7c85
// 004e7c80  d911                 fst dword ptr [ecx]
// 004e7c82  d95104               fst dword ptr [ecx + 4]
// 004e7c85  83c001               add eax, 1
// 004e7c88  3b4604               cmp eax, dword ptr [esi + 4]
// 004e7c8b  7cea                 jl 0x4e7c77
// 004e7c8d  ddd8                 fstp st(0)
// 004e7c8f  5f                   pop edi
// 004e7c90  5e                   pop esi
// 004e7c91  5d                   pop ebp
// 004e7c92  5b                   pop ebx
// 004e7c93  c20800               ret 8
// library rbxgs-render/Mesh.cpp (function ?resize@?$Array@VVector2@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Mesh.cpp
