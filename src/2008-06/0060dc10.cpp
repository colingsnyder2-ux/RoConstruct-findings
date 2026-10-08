// roc 2008-06 0060dc10  unit: RBX::BlockBlockContact  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060dc10
//
// 0060dc10  6aff                 push -1
// 0060dc12  68988c7d00           push 0x7d8c98
// 0060dc17  64a100000000         mov eax, dword ptr fs:[0]
// 0060dc1d  50                   push eax
// 0060dc1e  64892500000000       mov dword ptr fs:[0], esp
// 0060dc25  83ec20               sub esp, 0x20
// 0060dc28  53                   push ebx
// 0060dc29  56                   push esi
// 0060dc2a  8b742438             mov esi, dword ptr [esp + 0x38]
// 0060dc2e  8b06                 mov eax, dword ptr [esi]
// 0060dc30  8bd9                 mov ebx, ecx
// 0060dc32  8b4e04               mov ecx, dword ptr [esi + 4]
// 0060dc35  57                   push edi
// 0060dc36  8d0c88               lea ecx, [eax + ecx*4]
// 0060dc39  51                   push ecx
// 0060dc3a  50                   push eax
// 0060dc3b  8d4c2414             lea ecx, [esp + 0x14]
// 0060dc3f  e85cffffff           call 0x60dba0
// 0060dc44  33ff                 xor edi, edi
// 0060dc46  397e04               cmp dword ptr [esi + 4], edi
// 0060dc49  897c2434             mov dword ptr [esp + 0x34], edi
// 0060dc4d  7e27                 jle 0x60dc76
// 0060dc4f  90                   nop 
// 0060dc50  8b16                 mov edx, dword ptr [esi]
// 0060dc52  d9442440             fld dword ptr [esp + 0x40]
// 0060dc56  51                   push ecx
// 0060dc57  8d04ba               lea eax, [edx + edi*4]
// 0060dc5a  d91c24               fstp dword ptr [esp]
// 0060dc5d  8b10                 mov edx, dword ptr [eax]
// 0060dc5f  8d4c2410             lea ecx, [esp + 0x10]
// 0060dc63  51                   push ecx
// 0060dc64  52                   push edx
// 0060dc65  8bcb                 mov ecx, ebx
// 0060dc67  e8c4f9ffff           call 0x60d630
// 0060dc6c  84c0                 test al, al
// 0060dc6e  752d                 jne 0x60dc9d
// 0060dc70  47                   inc edi
// 0060dc71  3b7e04               cmp edi, dword ptr [esi + 4]
// 0060dc74  7cda                 jl 0x60dc50
// 0060dc76  8d4c240c             lea ecx, [esp + 0xc]
// 0060dc7a  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0060dc82  e8a9d50300           call 0x64b230
// 0060dc87  5f                   pop edi
// 0060dc88  5e                   pop esi
// 0060dc89  32c0                 xor al, al
// 0060dc8b  5b                   pop ebx
// 0060dc8c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0060dc90  64890d00000000       mov dword ptr fs:[0], ecx
// 0060dc97  83c42c               add esp, 0x2c
// 0060dc9a  c20800               ret 8
// 0060dc9d  8d4c240c             lea ecx, [esp + 0xc]
// 0060dca1  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0060dca9  e882d50300           call 0x64b230
// 0060dcae  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0060dcb2  5f                   pop edi
// 0060dcb3  5e                   pop esi
// 0060dcb4  b001                 mov al, 1
// 0060dcb6  5b                   pop ebx
// 0060dcb7  64890d00000000       mov dword ptr fs:[0], ecx
// 0060dcbe  83c42c               add esp, 0x2c
// 0060dcc1  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ?intersectingOthers@ContactManager@RBX@@QAE_NABV?$Array@PAVPrimitive@RBX@@@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
