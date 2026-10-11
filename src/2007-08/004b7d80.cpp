// from server: 100% by auto
// roc 2007-08 004b7d80  unit: Exposer  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b7d80
//
// 004b7d80  6aff                 push -1
// 004b7d82  686b5c7400           push 0x745c6b
// 004b7d87  64a100000000         mov eax, dword ptr fs:[0]
// 004b7d8d  50                   push eax
// 004b7d8e  51                   push ecx
// 004b7d8f  a188518b00           mov eax, dword ptr [0x8b5188]
// 004b7d94  33c4                 xor eax, esp
// 004b7d96  50                   push eax
// 004b7d97  8d442408             lea eax, [esp + 8]
// 004b7d9b  64a300000000         mov dword ptr fs:[0], eax
// 004b7da1  a1d0eb8b00           mov eax, dword ptr [0x8bebd0]
// 004b7da6  83c001               add eax, 1
// 004b7da9  83f801               cmp eax, 1
// 004b7dac  a3d0eb8b00           mov dword ptr [0x8bebd0], eax
// 004b7db1  753d                 jne 0x4b7df0
// 004b7db3  6a18                 push 0x18
// 004b7db5  e83c811700           call 0x62fef6
// 004b7dba  83c404               add esp, 4
// 004b7dbd  89442404             mov dword ptr [esp + 4], eax
// 004b7dc1  85c0                 test eax, eax
// 004b7dc3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b7dcb  741c                 je 0x4b7de9
// 004b7dcd  8bc8                 mov ecx, eax
// 004b7dcf  e87cfeffff           call 0x4b7c50
// 004b7dd4  a3cceb8b00           mov dword ptr [0x8bebcc], eax
// 004b7dd9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b7ddd  64890d00000000       mov dword ptr fs:[0], ecx
// 004b7de4  59                   pop ecx
// 004b7de5  83c410               add esp, 0x10
// 004b7de8  c3                   ret 
// 004b7de9  33c0                 xor eax, eax
// 004b7deb  a3cceb8b00           mov dword ptr [0x8bebcc], eax
// 004b7df0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b7df4  64890d00000000       mov dword ptr fs:[0], ecx
// 004b7dfb  59                   pop ecx
// 004b7dfc  83c410               add esp, 0x10
// 004b7dff  c3                   ret 

// from server: 47% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp