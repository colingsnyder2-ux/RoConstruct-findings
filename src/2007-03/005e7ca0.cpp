// roc 2007-03 005e7ca0  unit: seg_005e0000  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e7ca0
//
// 005e7ca0  6aff                 push -1
// 005e7ca2  68d8997500           push 0x7599d8
// 005e7ca7  64a100000000         mov eax, dword ptr fs:[0]
// 005e7cad  50                   push eax
// 005e7cae  64892500000000       mov dword ptr fs:[0], esp
// 005e7cb5  83ec14               sub esp, 0x14
// 005e7cb8  53                   push ebx
// 005e7cb9  56                   push esi
// 005e7cba  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005e7cbe  8b06                 mov eax, dword ptr [esi]
// 005e7cc0  8bd9                 mov ebx, ecx
// 005e7cc2  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e7cc5  57                   push edi
// 005e7cc6  8d0c88               lea ecx, [eax + ecx*4]
// 005e7cc9  51                   push ecx
// 005e7cca  50                   push eax
// 005e7ccb  8d4c241c             lea ecx, [esp + 0x1c]
// 005e7ccf  e84cffffff           call 0x5e7c20
// 005e7cd4  33ff                 xor edi, edi
// 005e7cd6  397e04               cmp dword ptr [esi + 4], edi
// 005e7cd9  897c2428             mov dword ptr [esp + 0x28], edi
// 005e7cdd  7e29                 jle 0x5e7d08
// 005e7cdf  90                   nop 
// 005e7ce0  8b16                 mov edx, dword ptr [esi]
// 005e7ce2  d9442434             fld dword ptr [esp + 0x34]
// 005e7ce6  51                   push ecx
// 005e7ce7  8d04ba               lea eax, [edx + edi*4]
// 005e7cea  d91c24               fstp dword ptr [esp]
// 005e7ced  8b10                 mov edx, dword ptr [eax]
// 005e7cef  8d4c2418             lea ecx, [esp + 0x18]
// 005e7cf3  51                   push ecx
// 005e7cf4  52                   push edx
// 005e7cf5  8bcb                 mov ecx, ebx
// 005e7cf7  e804faffff           call 0x5e7700
// 005e7cfc  84c0                 test al, al
// 005e7cfe  754d                 jne 0x5e7d4d
// 005e7d00  83c701               add edi, 1
// 005e7d03  3b7e04               cmp edi, dword ptr [esi + 4]
// 005e7d06  7cd8                 jl 0x5e7ce0
// 005e7d08  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e7d0c  8b10                 mov edx, dword ptr [eax]
// 005e7d0e  50                   push eax
// 005e7d0f  8d4c2418             lea ecx, [esp + 0x18]
// 005e7d13  51                   push ecx
// 005e7d14  52                   push edx
// 005e7d15  8bf1                 mov esi, ecx
// 005e7d17  56                   push esi
// 005e7d18  8d54241c             lea edx, [esp + 0x1c]
// 005e7d1c  52                   push edx
// 005e7d1d  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 005e7d25  e8965bfcff           call 0x5ad8c0
// 005e7d2a  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e7d2e  50                   push eax
// 005e7d2f  e8bc630300           call 0x61e0f0
// 005e7d34  83c404               add esp, 4
// 005e7d37  5f                   pop edi
// 005e7d38  5e                   pop esi
// 005e7d39  32c0                 xor al, al
// 005e7d3b  5b                   pop ebx
// 005e7d3c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e7d40  64890d00000000       mov dword ptr fs:[0], ecx
// 005e7d47  83c420               add esp, 0x20
// 005e7d4a  c20800               ret 8
// 005e7d4d  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e7d51  8b10                 mov edx, dword ptr [eax]
// 005e7d53  50                   push eax
// 005e7d54  8d4c2418             lea ecx, [esp + 0x18]
// 005e7d58  51                   push ecx
// 005e7d59  52                   push edx
// 005e7d5a  8bf1                 mov esi, ecx
// 005e7d5c  56                   push esi
// 005e7d5d  8d44241c             lea eax, [esp + 0x1c]
// 005e7d61  50                   push eax
// 005e7d62  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 005e7d6a  e8515bfcff           call 0x5ad8c0
// 005e7d6f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005e7d73  51                   push ecx
// 005e7d74  e877630300           call 0x61e0f0
// 005e7d79  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e7d7d  83c404               add esp, 4
// 005e7d80  5f                   pop edi
// 005e7d81  5e                   pop esi
// 005e7d82  b001                 mov al, 1
// 005e7d84  5b                   pop ebx
// 005e7d85  64890d00000000       mov dword ptr fs:[0], ecx
// 005e7d8c  83c420               add esp, 0x20
// 005e7d8f  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ?intersectingOthers@ContactManager@RBX@@QAE_NABV?$Array@PAVPrimitive@RBX@@@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
