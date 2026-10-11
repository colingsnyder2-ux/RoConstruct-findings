// from server: 100% by auto
// roc 2007-08 004c5e60  unit: RakPeer  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5e60
//
// 004c5e60  6aff                 push -1
// 004c5e62  68ebbc7400           push 0x74bceb
// 004c5e67  64a100000000         mov eax, dword ptr fs:[0]
// 004c5e6d  50                   push eax
// 004c5e6e  51                   push ecx
// 004c5e6f  53                   push ebx
// 004c5e70  55                   push ebp
// 004c5e71  56                   push esi
// 004c5e72  57                   push edi
// 004c5e73  a188518b00           mov eax, dword ptr [0x8b5188]
// 004c5e78  33c4                 xor eax, esp
// 004c5e7a  50                   push eax
// 004c5e7b  8d442418             lea eax, [esp + 0x18]
// 004c5e7f  64a300000000         mov dword ptr fs:[0], eax
// 004c5e85  8bf1                 mov esi, ecx
// 004c5e87  8b4608               mov eax, dword ptr [esi + 8]
// 004c5e8a  394604               cmp dword ptr [esi + 4], eax
// 004c5e8d  0f85ba000000         jne 0x4c5f4d
// 004c5e93  85c0                 test eax, eax
// 004c5e95  7509                 jne 0x4c5ea0
// 004c5e97  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004c5e9e  eb05                 jmp 0x4c5ea5
// 004c5ea0  03c0                 add eax, eax
// 004c5ea2  894608               mov dword ptr [esi + 8], eax
// 004c5ea5  8b6e08               mov ebp, dword ptr [esi + 8]
// 004c5ea8  33c9                 xor ecx, ecx
// 004c5eaa  8bc5                 mov eax, ebp
// 004c5eac  ba08000000           mov edx, 8
// 004c5eb1  f7e2                 mul edx
// 004c5eb3  0f90c1               seto cl
// 004c5eb6  f7d9                 neg ecx
// 004c5eb8  0bc8                 or ecx, eax
// 004c5eba  33c0                 xor eax, eax
// 004c5ebc  83c104               add ecx, 4
// 004c5ebf  0f92c0               setb al
// 004c5ec2  f7d8                 neg eax
// 004c5ec4  0bc1                 or eax, ecx
// 004c5ec6  50                   push eax
// 004c5ec7  e82aa01600           call 0x62fef6
// 004c5ecc  83c404               add esp, 4
// 004c5ecf  89442414             mov dword ptr [esp + 0x14], eax
// 004c5ed3  85c0                 test eax, eax
// 004c5ed5  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004c5edd  741a                 je 0x4c5ef9
// 004c5edf  6820cc4000           push 0x40cc20
// 004c5ee4  6890f06900           push 0x69f090
// 004c5ee9  55                   push ebp
// 004c5eea  8d7804               lea edi, [eax + 4]
// 004c5eed  6a08                 push 8
// 004c5eef  57                   push edi
// 004c5ef0  8928                 mov dword ptr [eax], ebp
// 004c5ef2  e8e5ac1600           call 0x630bdc
// 004c5ef7  eb02                 jmp 0x4c5efb
// 004c5ef9  33ff                 xor edi, edi
// 004c5efb  33c0                 xor eax, eax
// 004c5efd  394604               cmp dword ptr [esi + 4], eax
// 004c5f00  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004c5f08  761e                 jbe 0x4c5f28
// 004c5f0a  8d9b00000000         lea ebx, [ebx]
// 004c5f10  8b0e                 mov ecx, dword ptr [esi]
// 004c5f12  8b14c1               mov edx, dword ptr [ecx + eax*8]
// 004c5f15  8914c7               mov dword ptr [edi + eax*8], edx
// 004c5f18  8b4cc104             mov ecx, dword ptr [ecx + eax*8 + 4]
// 004c5f1c  894cc704             mov dword ptr [edi + eax*8 + 4], ecx
// 004c5f20  83c001               add eax, 1
// 004c5f23  3b4604               cmp eax, dword ptr [esi + 4]
// 004c5f26  72e8                 jb 0x4c5f10
// 004c5f28  8b06                 mov eax, dword ptr [esi]
// 004c5f2a  85c0                 test eax, eax
// 004c5f2c  741d                 je 0x4c5f4b
// 004c5f2e  8b50fc               mov edx, dword ptr [eax - 4]
// 004c5f31  8d58fc               lea ebx, [eax - 4]
// 004c5f34  6820cc4000           push 0x40cc20
// 004c5f39  52                   push edx
// 004c5f3a  6a08                 push 8
// 004c5f3c  50                   push eax
// 004c5f3d  e8b5ab1600           call 0x630af7
// 004c5f42  53                   push ebx
// 004c5f43  e81a9d1600           call 0x62fc62
// 004c5f48  83c404               add esp, 4
// 004c5f4b  893e                 mov dword ptr [esi], edi
// 004c5f4d  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c5f50  8b542430             mov edx, dword ptr [esp + 0x30]
// 004c5f54  3bca                 cmp ecx, edx
// 004c5f56  7420                 je 0x4c5f78
// 004c5f58  eb06                 jmp 0x4c5f60
// 004c5f5a  8d9b00000000         lea ebx, [ebx]
// 004c5f60  8b06                 mov eax, dword ptr [esi]
// 004c5f62  8b7cc8f8             mov edi, dword ptr [eax + ecx*8 - 8]
// 004c5f66  8d04c8               lea eax, [eax + ecx*8]
// 004c5f69  8938                 mov dword ptr [eax], edi
// 004c5f6b  8b78fc               mov edi, dword ptr [eax - 4]
// 004c5f6e  83e901               sub ecx, 1
// 004c5f71  3bca                 cmp ecx, edx
// 004c5f73  897804               mov dword ptr [eax + 4], edi
// 004c5f76  75e8                 jne 0x4c5f60
// 004c5f78  8b06                 mov eax, dword ptr [esi]
// 004c5f7a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004c5f7e  890cd0               mov dword ptr [eax + edx*8], ecx
// 004c5f81  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004c5f85  894cd004             mov dword ptr [eax + edx*8 + 4], ecx
// 004c5f89  83460401             add dword ptr [esi + 4], 1
// 004c5f8d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c5f91  64890d00000000       mov dword ptr fs:[0], ecx
// 004c5f98  59                   pop ecx
// 004c5f99  5f                   pop edi
// 004c5f9a  5e                   pop esi
// 004c5f9b  5d                   pop ebp
// 004c5f9c  5b                   pop ebx
// 004c5f9d  83c410               add esp, 0x10
// 004c5fa0  c20c00               ret 0xc

// from server: 51% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_Table.cpp