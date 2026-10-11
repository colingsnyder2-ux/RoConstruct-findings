// from server: 100% by auto
// roc 2007-08 004c5d40  unit: RakPeer  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5d40
//
// 004c5d40  6aff                 push -1
// 004c5d42  68ebbc7400           push 0x74bceb
// 004c5d47  64a100000000         mov eax, dword ptr fs:[0]
// 004c5d4d  50                   push eax
// 004c5d4e  51                   push ecx
// 004c5d4f  53                   push ebx
// 004c5d50  55                   push ebp
// 004c5d51  56                   push esi
// 004c5d52  57                   push edi
// 004c5d53  a188518b00           mov eax, dword ptr [0x8b5188]
// 004c5d58  33c4                 xor eax, esp
// 004c5d5a  50                   push eax
// 004c5d5b  8d442418             lea eax, [esp + 0x18]
// 004c5d5f  64a300000000         mov dword ptr fs:[0], eax
// 004c5d65  8bf1                 mov esi, ecx
// 004c5d67  8b4608               mov eax, dword ptr [esi + 8]
// 004c5d6a  394604               cmp dword ptr [esi + 4], eax
// 004c5d6d  0f85ba000000         jne 0x4c5e2d
// 004c5d73  85c0                 test eax, eax
// 004c5d75  7509                 jne 0x4c5d80
// 004c5d77  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004c5d7e  eb05                 jmp 0x4c5d85
// 004c5d80  03c0                 add eax, eax
// 004c5d82  894608               mov dword ptr [esi + 8], eax
// 004c5d85  8b6e08               mov ebp, dword ptr [esi + 8]
// 004c5d88  33c9                 xor ecx, ecx
// 004c5d8a  8bc5                 mov eax, ebp
// 004c5d8c  ba08000000           mov edx, 8
// 004c5d91  f7e2                 mul edx
// 004c5d93  0f90c1               seto cl
// 004c5d96  f7d9                 neg ecx
// 004c5d98  0bc8                 or ecx, eax
// 004c5d9a  33c0                 xor eax, eax
// 004c5d9c  83c104               add ecx, 4
// 004c5d9f  0f92c0               setb al
// 004c5da2  f7d8                 neg eax
// 004c5da4  0bc1                 or eax, ecx
// 004c5da6  50                   push eax
// 004c5da7  e84aa11600           call 0x62fef6
// 004c5dac  83c404               add esp, 4
// 004c5daf  89442414             mov dword ptr [esp + 0x14], eax
// 004c5db3  85c0                 test eax, eax
// 004c5db5  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004c5dbd  741a                 je 0x4c5dd9
// 004c5dbf  6820cc4000           push 0x40cc20
// 004c5dc4  6890f06900           push 0x69f090
// 004c5dc9  55                   push ebp
// 004c5dca  8d7804               lea edi, [eax + 4]
// 004c5dcd  6a08                 push 8
// 004c5dcf  57                   push edi
// 004c5dd0  8928                 mov dword ptr [eax], ebp
// 004c5dd2  e805ae1600           call 0x630bdc
// 004c5dd7  eb02                 jmp 0x4c5ddb
// 004c5dd9  33ff                 xor edi, edi
// 004c5ddb  833e00               cmp dword ptr [esi], 0
// 004c5dde  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004c5de6  7443                 je 0x4c5e2b
// 004c5de8  33c0                 xor eax, eax
// 004c5dea  394604               cmp dword ptr [esi + 4], eax
// 004c5ded  7619                 jbe 0x4c5e08
// 004c5def  90                   nop 
// 004c5df0  8b0e                 mov ecx, dword ptr [esi]
// 004c5df2  8b14c1               mov edx, dword ptr [ecx + eax*8]
// 004c5df5  8914c7               mov dword ptr [edi + eax*8], edx
// 004c5df8  8b4cc104             mov ecx, dword ptr [ecx + eax*8 + 4]
// 004c5dfc  894cc704             mov dword ptr [edi + eax*8 + 4], ecx
// 004c5e00  83c001               add eax, 1
// 004c5e03  3b4604               cmp eax, dword ptr [esi + 4]
// 004c5e06  72e8                 jb 0x4c5df0
// 004c5e08  8b06                 mov eax, dword ptr [esi]
// 004c5e0a  85c0                 test eax, eax
// 004c5e0c  741d                 je 0x4c5e2b
// 004c5e0e  8b50fc               mov edx, dword ptr [eax - 4]
// 004c5e11  8d58fc               lea ebx, [eax - 4]
// 004c5e14  6820cc4000           push 0x40cc20
// 004c5e19  52                   push edx
// 004c5e1a  6a08                 push 8
// 004c5e1c  50                   push eax
// 004c5e1d  e8d5ac1600           call 0x630af7
// 004c5e22  53                   push ebx
// 004c5e23  e83a9e1600           call 0x62fc62
// 004c5e28  83c404               add esp, 4
// 004c5e2b  893e                 mov dword ptr [esi], edi
// 004c5e2d  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c5e30  8b06                 mov eax, dword ptr [esi]
// 004c5e32  8b542428             mov edx, dword ptr [esp + 0x28]
// 004c5e36  8914c8               mov dword ptr [eax + ecx*8], edx
// 004c5e39  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004c5e3d  8954c804             mov dword ptr [eax + ecx*8 + 4], edx
// 004c5e41  83460401             add dword ptr [esi + 4], 1
// 004c5e45  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c5e49  64890d00000000       mov dword ptr fs:[0], ecx
// 004c5e50  59                   pop ecx
// 004c5e51  5f                   pop edi
// 004c5e52  5e                   pop esi
// 004c5e53  5d                   pop ebp
// 004c5e54  5b                   pop ebx
// 004c5e55  83c410               add esp, 0x10
// 004c5e58  c20800               ret 8

// from server: 55% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_Table.cpp