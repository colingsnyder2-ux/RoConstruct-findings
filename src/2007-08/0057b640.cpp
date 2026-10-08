// roc 2007-08 0057b640  unit: RBX::RootInstance  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057b640
//
// 0057b640  53                   push ebx
// 0057b641  55                   push ebp
// 0057b642  56                   push esi
// 0057b643  8bf1                 mov esi, ecx
// 0057b645  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 0057b64b  85db                 test ebx, ebx
// 0057b64d  57                   push edi
// 0057b64e  7468                 je 0x57b6b8
// 0057b650  8b6b08               mov ebp, dword ptr [ebx + 8]
// 0057b653  396b04               cmp dword ptr [ebx + 4], ebp
// 0057b656  7606                 jbe 0x57b65e
// 0057b658  ff15d8e67700         call dword ptr [0x77e6d8]
// 0057b65e  8bbec0000000         mov edi, dword ptr [esi + 0xc0]
// 0057b664  8b7704               mov esi, dword ptr [edi + 4]
// 0057b667  3b7708               cmp esi, dword ptr [edi + 8]
// 0057b66a  7606                 jbe 0x57b672
// 0057b66c  ff15d8e67700         call dword ptr [0x77e6d8]
// 0057b672  3bfb                 cmp edi, ebx
// 0057b674  7406                 je 0x57b67c
// 0057b676  ff15d8e67700         call dword ptr [0x77e6d8]
// 0057b67c  3bf5                 cmp esi, ebp
// 0057b67e  7438                 je 0x57b6b8
// 0057b680  3b7708               cmp esi, dword ptr [edi + 8]
// 0057b683  7206                 jb 0x57b68b
// 0057b685  ff15d8e67700         call dword ptr [0x77e6d8]
// 0057b68b  8b06                 mov eax, dword ptr [esi]
// 0057b68d  6a00                 push 0
// 0057b68f  68284a8800           push 0x884a28
// 0057b694  684c1f8800           push 0x881f4c
// 0057b699  6a00                 push 0
// 0057b69b  50                   push eax
// 0057b69c  e895560b00           call 0x630d36
// 0057b6a1  83c414               add esp, 0x14
// 0057b6a4  85c0                 test eax, eax
// 0057b6a6  7512                 jne 0x57b6ba
// 0057b6a8  3b7708               cmp esi, dword ptr [edi + 8]
// 0057b6ab  7206                 jb 0x57b6b3
// 0057b6ad  ff15d8e67700         call dword ptr [0x77e6d8]
// 0057b6b3  83c608               add esi, 8
// 0057b6b6  ebba                 jmp 0x57b672
// 0057b6b8  33c0                 xor eax, eax
// 0057b6ba  5f                   pop edi
// 0057b6bb  5e                   pop esi
// 0057b6bc  5d                   pop ebp
// 0057b6bd  5b                   pop ebx
// 0057b6be  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$findFirstChildOfType@VPartInstance@RBX@@@Instance@RBX@@QBEPAVPartInstance@1@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
