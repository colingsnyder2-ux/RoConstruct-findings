// roc 2010-06 00713480  unit: RBX::BallBallContact  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00713480
//
// 00713480  6aff                 push -1
// 00713482  6808809a00           push 0x9a8008
// 00713487  64a100000000         mov eax, dword ptr fs:[0]
// 0071348d  50                   push eax
// 0071348e  64892500000000       mov dword ptr fs:[0], esp
// 00713495  83ec20               sub esp, 0x20
// 00713498  53                   push ebx
// 00713499  56                   push esi
// 0071349a  8b742438             mov esi, dword ptr [esp + 0x38]
// 0071349e  8b06                 mov eax, dword ptr [esi]
// 007134a0  8bd9                 mov ebx, ecx
// 007134a2  8b4e04               mov ecx, dword ptr [esi + 4]
// 007134a5  57                   push edi
// 007134a6  8d0c88               lea ecx, [eax + ecx*4]
// 007134a9  51                   push ecx
// 007134aa  50                   push eax
// 007134ab  8d4c2414             lea ecx, [esp + 0x14]
// 007134af  e8dcfcffff           call 0x713190
// 007134b4  33ff                 xor edi, edi
// 007134b6  397e04               cmp dword ptr [esi + 4], edi
// 007134b9  897c2434             mov dword ptr [esp + 0x34], edi
// 007134bd  7e27                 jle 0x7134e6
// 007134bf  90                   nop 
// 007134c0  8b16                 mov edx, dword ptr [esi]
// 007134c2  d9442440             fld dword ptr [esp + 0x40]
// 007134c6  51                   push ecx
// 007134c7  8d04ba               lea eax, [edx + edi*4]
// 007134ca  d91c24               fstp dword ptr [esp]
// 007134cd  8b10                 mov edx, dword ptr [eax]
// 007134cf  8d4c2410             lea ecx, [esp + 0x10]
// 007134d3  51                   push ecx
// 007134d4  52                   push edx
// 007134d5  8bcb                 mov ecx, ebx
// 007134d7  e834f9ffff           call 0x712e10
// 007134dc  84c0                 test al, al
// 007134de  752d                 jne 0x71350d
// 007134e0  47                   inc edi
// 007134e1  3b7e04               cmp edi, dword ptr [esi + 4]
// 007134e4  7cda                 jl 0x7134c0
// 007134e6  8d4c240c             lea ecx, [esp + 0xc]
// 007134ea  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 007134f2  e8a9efceff           call 0x4024a0
// 007134f7  5f                   pop edi
// 007134f8  5e                   pop esi
// 007134f9  32c0                 xor al, al
// 007134fb  5b                   pop ebx
// 007134fc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00713500  64890d00000000       mov dword ptr fs:[0], ecx
// 00713507  83c42c               add esp, 0x2c
// 0071350a  c20800               ret 8
// 0071350d  8d4c240c             lea ecx, [esp + 0xc]
// 00713511  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00713519  e882efceff           call 0x4024a0
// 0071351e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00713522  5f                   pop edi
// 00713523  5e                   pop esi
// 00713524  b001                 mov al, 1
// 00713526  5b                   pop ebx
// 00713527  64890d00000000       mov dword ptr fs:[0], ecx
// 0071352e  83c42c               add esp, 0x2c
// 00713531  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ?intersectingOthers@ContactManager@RBX@@QAE_NABV?$Array@PAVPrimitive@RBX@@@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
