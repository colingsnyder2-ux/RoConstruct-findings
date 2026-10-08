// roc 2007-03 0047b5a0  unit: seg_00470000  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047b5a0
//
// 0047b5a0  8b442404             mov eax, dword ptr [esp + 4]
// 0047b5a4  53                   push ebx
// 0047b5a5  55                   push ebp
// 0047b5a6  56                   push esi
// 0047b5a7  8bf1                 mov esi, ecx
// 0047b5a9  8b6e04               mov ebp, dword ptr [esi + 4]
// 0047b5ac  b901000000           mov ecx, 1
// 0047b5b1  894604               mov dword ptr [esi + 4], eax
// 0047b5b4  840d647f8b00         test byte ptr [0x8b7f64], cl
// 0047b5ba  57                   push edi
// 0047b5bb  7513                 jne 0x47b5d0
// 0047b5bd  090d647f8b00         or dword ptr [0x8b7f64], ecx
// 0047b5c3  bb0a000000           mov ebx, 0xa
// 0047b5c8  891d607f8b00         mov dword ptr [0x8b7f60], ebx
// 0047b5ce  eb06                 jmp 0x47b5d6
// 0047b5d0  8b1d607f8b00         mov ebx, dword ptr [0x8b7f60]
// 0047b5d6  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047b5d9  8b7e04               mov edi, dword ptr [esi + 4]
// 0047b5dc  3bf9                 cmp edi, ecx
// 0047b5de  0f8e92000000         jle 0x47b676
// 0047b5e4  85c9                 test ecx, ecx
// 0047b5e6  7512                 jne 0x47b5fa
// 0047b5e8  55                   push ebp
// 0047b5e9  8bce                 mov ecx, esi
// 0047b5eb  894608               mov dword ptr [esi + 8], eax
// 0047b5ee  e8ddc41400           call 0x5c7ad0
// 0047b5f3  5f                   pop edi
// 0047b5f4  5e                   pop esi
// 0047b5f5  5d                   pop ebp
// 0047b5f6  5b                   pop ebx
// 0047b5f7  c20800               ret 8
// 0047b5fa  3bfb                 cmp edi, ebx
// 0047b5fc  7d12                 jge 0x47b610
// 0047b5fe  55                   push ebp
// 0047b5ff  8bce                 mov ecx, esi
// 0047b601  895e08               mov dword ptr [esi + 8], ebx
// 0047b604  e8c7c41400           call 0x5c7ad0
// 0047b609  5f                   pop edi
// 0047b60a  5e                   pop esi
// 0047b60b  5d                   pop ebp
// 0047b60c  5b                   pop ebx
// 0047b60d  c20800               ret 8
// 0047b610  d905104c7900         fld dword ptr [0x794c10]
// 0047b616  8bc1                 mov eax, ecx
// 0047b618  03c0                 add eax, eax
// 0047b61a  d95c2418             fstp dword ptr [esp + 0x18]
// 0047b61e  03c0                 add eax, eax
// 0047b620  3d801a0600           cmp eax, 0x61a80
// 0047b625  7608                 jbe 0x47b62f
// 0047b627  d9050c4c7900         fld dword ptr [0x794c0c]
// 0047b62d  eb0d                 jmp 0x47b63c
// 0047b62f  3d00fa0000           cmp eax, 0xfa00
// 0047b634  760a                 jbe 0x47b640
// 0047b636  d905084c7900         fld dword ptr [0x794c08]
// 0047b63c  d95c2418             fstp dword ptr [esp + 0x18]
// 0047b640  8bd9                 mov ebx, ecx
// 0047b642  895c2414             mov dword ptr [esp + 0x14], ebx
// 0047b646  db442414             fild dword ptr [esp + 0x14]
// 0047b64a  d84c2418             fmul dword ptr [esp + 0x18]
// 0047b64e  e8ad3b1a00           call 0x61f200
// 0047b653  2bc3                 sub eax, ebx
// 0047b655  03c7                 add eax, edi
// 0047b657  894608               mov dword ptr [esi + 8], eax
// 0047b65a  8b0d607f8b00         mov ecx, dword ptr [0x8b7f60]
// 0047b660  3bc1                 cmp eax, ecx
// 0047b662  7d03                 jge 0x47b667
// 0047b664  894e08               mov dword ptr [esi + 8], ecx
// 0047b667  55                   push ebp
// 0047b668  8bce                 mov ecx, esi
// 0047b66a  e861c41400           call 0x5c7ad0
// 0047b66f  5f                   pop edi
// 0047b670  5e                   pop esi
// 0047b671  5d                   pop ebp
// 0047b672  5b                   pop ebx
// 0047b673  c20800               ret 8
// 0047b676  b856555555           mov eax, 0x55555556
// 0047b67b  f7e9                 imul ecx
// 0047b67d  8bc2                 mov eax, edx
// 0047b67f  c1e81f               shr eax, 0x1f
// 0047b682  03c2                 add eax, edx
// 0047b684  3bf8                 cmp edi, eax
// 0047b686  7f19                 jg 0x47b6a1
// 0047b688  807c241800           cmp byte ptr [esp + 0x18], 0
// 0047b68d  7412                 je 0x47b6a1
// 0047b68f  3bfb                 cmp edi, ebx
// 0047b691  7e0e                 jle 0x47b6a1
// 0047b693  3bfd                 cmp edi, ebp
// 0047b695  7c02                 jl 0x47b699
// 0047b697  8bfd                 mov edi, ebp
// 0047b699  57                   push edi
// 0047b69a  8bce                 mov ecx, esi
// 0047b69c  e82fc41400           call 0x5c7ad0
// 0047b6a1  5f                   pop edi
// 0047b6a2  5e                   pop esi
// 0047b6a3  5d                   pop ebp
// 0047b6a4  5b                   pop ebx
// 0047b6a5  c20800               ret 8
// library rbxgs/tool\DragUtilities.cpp (function ?resize@?$Array@PAVPrimitive@RBX@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
