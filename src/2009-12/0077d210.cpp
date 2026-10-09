// roc 2009-12 0077d210  unit: RBX::BallBallContact  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0077d210
//
// 0077d210  6aff                 push -1
// 0077d212  68d83b9500           push 0x953bd8
// 0077d217  64a100000000         mov eax, dword ptr fs:[0]
// 0077d21d  50                   push eax
// 0077d21e  64892500000000       mov dword ptr fs:[0], esp
// 0077d225  83ec20               sub esp, 0x20
// 0077d228  53                   push ebx
// 0077d229  56                   push esi
// 0077d22a  8b742438             mov esi, dword ptr [esp + 0x38]
// 0077d22e  8b06                 mov eax, dword ptr [esi]
// 0077d230  8bd9                 mov ebx, ecx
// 0077d232  8b4e04               mov ecx, dword ptr [esi + 4]
// 0077d235  57                   push edi
// 0077d236  8d0c88               lea ecx, [eax + ecx*4]
// 0077d239  51                   push ecx
// 0077d23a  50                   push eax
// 0077d23b  8d4c2414             lea ecx, [esp + 0x14]
// 0077d23f  e85cffffff           call 0x77d1a0
// 0077d244  33ff                 xor edi, edi
// 0077d246  397e04               cmp dword ptr [esi + 4], edi
// 0077d249  897c2434             mov dword ptr [esp + 0x34], edi
// 0077d24d  7e27                 jle 0x77d276
// 0077d24f  90                   nop 
// 0077d250  8b16                 mov edx, dword ptr [esi]
// 0077d252  d9442440             fld dword ptr [esp + 0x40]
// 0077d256  51                   push ecx
// 0077d257  8d04ba               lea eax, [edx + edi*4]
// 0077d25a  d91c24               fstp dword ptr [esp]
// 0077d25d  8b10                 mov edx, dword ptr [eax]
// 0077d25f  8d4c2410             lea ecx, [esp + 0x10]
// 0077d263  51                   push ecx
// 0077d264  52                   push edx
// 0077d265  8bcb                 mov ecx, ebx
// 0077d267  e814fcffff           call 0x77ce80
// 0077d26c  84c0                 test al, al
// 0077d26e  752d                 jne 0x77d29d
// 0077d270  47                   inc edi
// 0077d271  3b7e04               cmp edi, dword ptr [esi + 4]
// 0077d274  7cda                 jl 0x77d250
// 0077d276  8d4c240c             lea ecx, [esp + 0xc]
// 0077d27a  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0077d282  e84951c8ff           call 0x4023d0
// 0077d287  5f                   pop edi
// 0077d288  5e                   pop esi
// 0077d289  32c0                 xor al, al
// 0077d28b  5b                   pop ebx
// 0077d28c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0077d290  64890d00000000       mov dword ptr fs:[0], ecx
// 0077d297  83c42c               add esp, 0x2c
// 0077d29a  c20800               ret 8
// 0077d29d  8d4c240c             lea ecx, [esp + 0xc]
// 0077d2a1  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0077d2a9  e82251c8ff           call 0x4023d0
// 0077d2ae  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0077d2b2  5f                   pop edi
// 0077d2b3  5e                   pop esi
// 0077d2b4  b001                 mov al, 1
// 0077d2b6  5b                   pop ebx
// 0077d2b7  64890d00000000       mov dword ptr fs:[0], ecx
// 0077d2be  83c42c               add esp, 0x2c
// 0077d2c1  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ?intersectingOthers@ContactManager@RBX@@QAE_NABV?$Array@PAVPrimitive@RBX@@@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
