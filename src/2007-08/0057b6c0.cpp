// roc 2007-08 0057b6c0  unit: RBX::RootInstance  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057b6c0
//
// 0057b6c0  53                   push ebx
// 0057b6c1  55                   push ebp
// 0057b6c2  56                   push esi
// 0057b6c3  8bf1                 mov esi, ecx
// 0057b6c5  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 0057b6cb  85db                 test ebx, ebx
// 0057b6cd  57                   push edi
// 0057b6ce  7468                 je 0x57b738
// 0057b6d0  8b6b08               mov ebp, dword ptr [ebx + 8]
// 0057b6d3  396b04               cmp dword ptr [ebx + 4], ebp
// 0057b6d6  7606                 jbe 0x57b6de
// 0057b6d8  ff15d8e67700         call dword ptr [0x77e6d8]
// 0057b6de  8bbec0000000         mov edi, dword ptr [esi + 0xc0]
// 0057b6e4  8b7704               mov esi, dword ptr [edi + 4]
// 0057b6e7  3b7708               cmp esi, dword ptr [edi + 8]
// 0057b6ea  7606                 jbe 0x57b6f2
// 0057b6ec  ff15d8e67700         call dword ptr [0x77e6d8]
// 0057b6f2  3bfb                 cmp edi, ebx
// 0057b6f4  7406                 je 0x57b6fc
// 0057b6f6  ff15d8e67700         call dword ptr [0x77e6d8]
// 0057b6fc  3bf5                 cmp esi, ebp
// 0057b6fe  7438                 je 0x57b738
// 0057b700  3b7708               cmp esi, dword ptr [edi + 8]
// 0057b703  7206                 jb 0x57b70b
// 0057b705  ff15d8e67700         call dword ptr [0x77e6d8]
// 0057b70b  8b06                 mov eax, dword ptr [esi]
// 0057b70d  6a00                 push 0
// 0057b70f  68b8c68800           push 0x88c6b8
// 0057b714  684c1f8800           push 0x881f4c
// 0057b719  6a00                 push 0
// 0057b71b  50                   push eax
// 0057b71c  e815560b00           call 0x630d36
// 0057b721  83c414               add esp, 0x14
// 0057b724  85c0                 test eax, eax
// 0057b726  7512                 jne 0x57b73a
// 0057b728  3b7708               cmp esi, dword ptr [edi + 8]
// 0057b72b  7206                 jb 0x57b733
// 0057b72d  ff15d8e67700         call dword ptr [0x77e6d8]
// 0057b733  83c608               add esi, 8
// 0057b736  ebba                 jmp 0x57b6f2
// 0057b738  33c0                 xor eax, eax
// 0057b73a  5f                   pop edi
// 0057b73b  5e                   pop esi
// 0057b73c  5d                   pop ebp
// 0057b73d  5b                   pop ebx
// 0057b73e  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$findFirstChildOfType@VModelInstance@RBX@@@Instance@RBX@@QBEPAVModelInstance@1@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
