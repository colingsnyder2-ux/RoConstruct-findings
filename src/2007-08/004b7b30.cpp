// from server: 100% by auto
// roc 2007-08 004b7b30  unit: Exposer  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b7b30
//
// 004b7b30  6aff                 push -1
// 004b7b32  68d8bf7400           push 0x74bfd8
// 004b7b37  64a100000000         mov eax, dword ptr fs:[0]
// 004b7b3d  50                   push eax
// 004b7b3e  51                   push ecx
// 004b7b3f  53                   push ebx
// 004b7b40  56                   push esi
// 004b7b41  a188518b00           mov eax, dword ptr [0x8b5188]
// 004b7b46  33c4                 xor eax, esp
// 004b7b48  50                   push eax
// 004b7b49  8d442410             lea eax, [esp + 0x10]
// 004b7b4d  64a300000000         mov dword ptr fs:[0], eax
// 004b7b53  8bf1                 mov esi, ecx
// 004b7b55  8974240c             mov dword ptr [esp + 0xc], esi
// 004b7b59  8b4608               mov eax, dword ptr [esi + 8]
// 004b7b5c  33db                 xor ebx, ebx
// 004b7b5e  3bc3                 cmp eax, ebx
// 004b7b60  895c2418             mov dword ptr [esp + 0x18], ebx
// 004b7b64  885e14               mov byte ptr [esi + 0x14], bl
// 004b7b67  741a                 je 0x4b7b83
// 004b7b69  3d00020000           cmp eax, 0x200
// 004b7b6e  7610                 jbe 0x4b7b80
// 004b7b70  8b06                 mov eax, dword ptr [esi]
// 004b7b72  50                   push eax
// 004b7b73  e8ea801700           call 0x62fc62
// 004b7b78  83c404               add esp, 4
// 004b7b7b  895e08               mov dword ptr [esi + 8], ebx
// 004b7b7e  891e                 mov dword ptr [esi], ebx
// 004b7b80  895e04               mov dword ptr [esi + 4], ebx
// 004b7b83  8bce                 mov ecx, esi
// 004b7b85  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004b7b8d  e86e590000           call 0x4bd500
// 004b7b92  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b7b96  64890d00000000       mov dword ptr fs:[0], ecx
// 004b7b9d  59                   pop ecx
// 004b7b9e  5e                   pop esi
// 004b7b9f  5b                   pop ebx
// 004b7ba0  83c410               add esp, 0x10
// 004b7ba3  c3                   ret 

// from server: 74% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LightweightDatabaseServer.cpp