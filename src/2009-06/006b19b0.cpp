// roc 2009-06 006b19b0  unit: RBX::BlockBlockContact  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b19b0
//
// 006b19b0  6aff                 push -1
// 006b19b2  68e8038700           push 0x8703e8
// 006b19b7  64a100000000         mov eax, dword ptr fs:[0]
// 006b19bd  50                   push eax
// 006b19be  64892500000000       mov dword ptr fs:[0], esp
// 006b19c5  83ec20               sub esp, 0x20
// 006b19c8  53                   push ebx
// 006b19c9  56                   push esi
// 006b19ca  8b742438             mov esi, dword ptr [esp + 0x38]
// 006b19ce  8b06                 mov eax, dword ptr [esi]
// 006b19d0  8bd9                 mov ebx, ecx
// 006b19d2  8b4e04               mov ecx, dword ptr [esi + 4]
// 006b19d5  57                   push edi
// 006b19d6  8d0c88               lea ecx, [eax + ecx*4]
// 006b19d9  51                   push ecx
// 006b19da  50                   push eax
// 006b19db  8d4c2414             lea ecx, [esp + 0x14]
// 006b19df  e85cffffff           call 0x6b1940
// 006b19e4  33ff                 xor edi, edi
// 006b19e6  397e04               cmp dword ptr [esi + 4], edi
// 006b19e9  897c2434             mov dword ptr [esp + 0x34], edi
// 006b19ed  7e27                 jle 0x6b1a16
// 006b19ef  90                   nop 
// 006b19f0  8b16                 mov edx, dword ptr [esi]
// 006b19f2  d9442440             fld dword ptr [esp + 0x40]
// 006b19f6  51                   push ecx
// 006b19f7  8d04ba               lea eax, [edx + edi*4]
// 006b19fa  d91c24               fstp dword ptr [esp]
// 006b19fd  8b10                 mov edx, dword ptr [eax]
// 006b19ff  8d4c2410             lea ecx, [esp + 0x10]
// 006b1a03  51                   push ecx
// 006b1a04  52                   push edx
// 006b1a05  8bcb                 mov ecx, ebx
// 006b1a07  e864fcffff           call 0x6b1670
// 006b1a0c  84c0                 test al, al
// 006b1a0e  752d                 jne 0x6b1a3d
// 006b1a10  47                   inc edi
// 006b1a11  3b7e04               cmp edi, dword ptr [esi + 4]
// 006b1a14  7cda                 jl 0x6b19f0
// 006b1a16  8d4c240c             lea ecx, [esp + 0xc]
// 006b1a1a  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 006b1a22  e8896e0000           call 0x6b88b0
// 006b1a27  5f                   pop edi
// 006b1a28  5e                   pop esi
// 006b1a29  32c0                 xor al, al
// 006b1a2b  5b                   pop ebx
// 006b1a2c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006b1a30  64890d00000000       mov dword ptr fs:[0], ecx
// 006b1a37  83c42c               add esp, 0x2c
// 006b1a3a  c20800               ret 8
// 006b1a3d  8d4c240c             lea ecx, [esp + 0xc]
// 006b1a41  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 006b1a49  e8626e0000           call 0x6b88b0
// 006b1a4e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006b1a52  5f                   pop edi
// 006b1a53  5e                   pop esi
// 006b1a54  b001                 mov al, 1
// 006b1a56  5b                   pop ebx
// 006b1a57  64890d00000000       mov dword ptr fs:[0], ecx
// 006b1a5e  83c42c               add esp, 0x2c
// 006b1a61  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ?intersectingOthers@ContactManager@RBX@@QAE_NABV?$Array@PAVPrimitive@RBX@@@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
