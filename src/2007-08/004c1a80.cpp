// from server: 100% by auto
// roc 2007-08 004c1a80  unit: RakPeer  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c1a80
//
// 004c1a80  53                   push ebx
// 004c1a81  55                   push ebp
// 004c1a82  56                   push esi
// 004c1a83  57                   push edi
// 004c1a84  8bd9                 mov ebx, ecx
// 004c1a86  e8e58fffff           call 0x4baa70
// 004c1a8b  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c1a8f  8b742418             mov esi, dword ptr [esp + 0x18]
// 004c1a93  8903                 mov dword ptr [ebx], eax
// 004c1a95  33c0                 xor eax, eax
// 004c1a97  894304               mov dword ptr [ebx + 4], eax
// 004c1a9a  894308               mov dword ptr [ebx + 8], eax
// 004c1a9d  89430c               mov dword ptr [ebx + 0xc], eax
// 004c1aa0  894310               mov dword ptr [ebx + 0x10], eax
// 004c1aa3  894314               mov dword ptr [ebx + 0x14], eax
// 004c1aa6  8d6b20               lea ebp, [ebx + 0x20]
// 004c1aa9  894318               mov dword ptr [ebx + 0x18], eax
// 004c1aac  89431c               mov dword ptr [ebx + 0x1c], eax
// 004c1aaf  b908000000           mov ecx, 8
// 004c1ab4  8bfd                 mov edi, ebp
// 004c1ab6  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004c1ab8  8d4b40               lea ecx, [ebx + 0x40]
// 004c1abb  51                   push ecx
// 004c1abc  55                   push ebp
// 004c1abd  e82eeeffff           call 0x4c08f0
// 004c1ac2  83c360               add ebx, 0x60
// 004c1ac5  53                   push ebx
// 004c1ac6  55                   push ebp
// 004c1ac7  e884bbffff           call 0x4bd650
// 004c1acc  83c410               add esp, 0x10
// 004c1acf  5f                   pop edi
// 004c1ad0  5e                   pop esi
// 004c1ad1  5d                   pop ebp
// 004c1ad2  5b                   pop ebx
// 004c1ad3  c20800               ret 8

// from server: 49% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctltrack.cpp