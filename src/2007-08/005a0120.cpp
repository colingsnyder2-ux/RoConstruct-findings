// roc 2007-08 005a0120  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a0120
//
// 005a0120  53                   push ebx
// 005a0121  55                   push ebp
// 005a0122  56                   push esi
// 005a0123  8bf1                 mov esi, ecx
// 005a0125  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 005a012b  85db                 test ebx, ebx
// 005a012d  57                   push edi
// 005a012e  7468                 je 0x5a0198
// 005a0130  8b6b08               mov ebp, dword ptr [ebx + 8]
// 005a0133  396b04               cmp dword ptr [ebx + 4], ebp
// 005a0136  7606                 jbe 0x5a013e
// 005a0138  ff15d8e67700         call dword ptr [0x77e6d8]
// 005a013e  8bbec0000000         mov edi, dword ptr [esi + 0xc0]
// 005a0144  8b7704               mov esi, dword ptr [edi + 4]
// 005a0147  3b7708               cmp esi, dword ptr [edi + 8]
// 005a014a  7606                 jbe 0x5a0152
// 005a014c  ff15d8e67700         call dword ptr [0x77e6d8]
// 005a0152  3bfb                 cmp edi, ebx
// 005a0154  7406                 je 0x5a015c
// 005a0156  ff15d8e67700         call dword ptr [0x77e6d8]
// 005a015c  3bf5                 cmp esi, ebp
// 005a015e  7438                 je 0x5a0198
// 005a0160  3b7708               cmp esi, dword ptr [edi + 8]
// 005a0163  7206                 jb 0x5a016b
// 005a0165  ff15d8e67700         call dword ptr [0x77e6d8]
// 005a016b  8b06                 mov eax, dword ptr [esi]
// 005a016d  6a00                 push 0
// 005a016f  68c8768a00           push 0x8a76c8
// 005a0174  684c1f8800           push 0x881f4c
// 005a0179  6a00                 push 0
// 005a017b  50                   push eax
// 005a017c  e8b50b0900           call 0x630d36
// 005a0181  83c414               add esp, 0x14
// 005a0184  85c0                 test eax, eax
// 005a0186  7512                 jne 0x5a019a
// 005a0188  3b7708               cmp esi, dword ptr [edi + 8]
// 005a018b  7206                 jb 0x5a0193
// 005a018d  ff15d8e67700         call dword ptr [0x77e6d8]
// 005a0193  83c608               add esi, 8
// 005a0196  ebba                 jmp 0x5a0152
// 005a0198  33c0                 xor eax, eax
// 005a019a  5f                   pop edi
// 005a019b  5e                   pop esi
// 005a019c  5d                   pop ebp
// 005a019d  5b                   pop ebx
// 005a019e  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$findFirstChildOfType@VHumanoid@RBX@@@Instance@RBX@@QBEPAVHumanoid@1@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
