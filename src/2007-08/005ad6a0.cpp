// roc 2007-08 005ad6a0  unit: P8CRenderSettings::?$GetSetImpl  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ad6a0
//
// 005ad6a0  53                   push ebx
// 005ad6a1  55                   push ebp
// 005ad6a2  56                   push esi
// 005ad6a3  8bf1                 mov esi, ecx
// 005ad6a5  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 005ad6ab  85db                 test ebx, ebx
// 005ad6ad  57                   push edi
// 005ad6ae  7468                 je 0x5ad718
// 005ad6b0  8b6b08               mov ebp, dword ptr [ebx + 8]
// 005ad6b3  396b04               cmp dword ptr [ebx + 4], ebp
// 005ad6b6  7606                 jbe 0x5ad6be
// 005ad6b8  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ad6be  8bbec0000000         mov edi, dword ptr [esi + 0xc0]
// 005ad6c4  8b7704               mov esi, dword ptr [edi + 4]
// 005ad6c7  3b7708               cmp esi, dword ptr [edi + 8]
// 005ad6ca  7606                 jbe 0x5ad6d2
// 005ad6cc  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ad6d2  3bfb                 cmp edi, ebx
// 005ad6d4  7406                 je 0x5ad6dc
// 005ad6d6  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ad6dc  3bf5                 cmp esi, ebp
// 005ad6de  7438                 je 0x5ad718
// 005ad6e0  3b7708               cmp esi, dword ptr [edi + 8]
// 005ad6e3  7206                 jb 0x5ad6eb
// 005ad6e5  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ad6eb  8b06                 mov eax, dword ptr [esi]
// 005ad6ed  6a00                 push 0
// 005ad6ef  68a4f68900           push 0x89f6a4
// 005ad6f4  684c1f8800           push 0x881f4c
// 005ad6f9  6a00                 push 0
// 005ad6fb  50                   push eax
// 005ad6fc  e835360800           call 0x630d36
// 005ad701  83c414               add esp, 0x14
// 005ad704  85c0                 test eax, eax
// 005ad706  7512                 jne 0x5ad71a
// 005ad708  3b7708               cmp esi, dword ptr [edi + 8]
// 005ad70b  7206                 jb 0x5ad713
// 005ad70d  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ad713  83c608               add esi, 8
// 005ad716  ebba                 jmp 0x5ad6d2
// 005ad718  33c0                 xor eax, eax
// 005ad71a  5f                   pop edi
// 005ad71b  5e                   pop esi
// 005ad71c  5d                   pop ebp
// 005ad71d  5b                   pop ebx
// 005ad71e  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??$findFirstChildOfType@VSky@RBX@@@Instance@RBX@@QBEPAVSky@1@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
