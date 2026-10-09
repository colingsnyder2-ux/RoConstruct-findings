// roc 2009-12 0077d2d0  unit: RBX::BallBallContact  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0077d2d0
//
// 0077d2d0  6aff                 push -1
// 0077d2d2  68d83b9500           push 0x953bd8
// 0077d2d7  64a100000000         mov eax, dword ptr fs:[0]
// 0077d2dd  50                   push eax
// 0077d2de  64892500000000       mov dword ptr fs:[0], esp
// 0077d2e5  83ec2c               sub esp, 0x2c
// 0077d2e8  53                   push ebx
// 0077d2e9  56                   push esi
// 0077d2ea  8bf1                 mov esi, ecx
// 0077d2ec  8d442444             lea eax, [esp + 0x44]
// 0077d2f0  50                   push eax
// 0077d2f1  8d4c2448             lea ecx, [esp + 0x48]
// 0077d2f5  51                   push ecx
// 0077d2f6  8d4c241c             lea ecx, [esp + 0x1c]
// 0077d2fa  e89151c8ff           call 0x402490
// 0077d2ff  8d542444             lea edx, [esp + 0x44]
// 0077d303  52                   push edx
// 0077d304  8d44240c             lea eax, [esp + 0xc]
// 0077d308  50                   push eax
// 0077d309  8d4c241c             lea ecx, [esp + 0x1c]
// 0077d30d  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0077d315  e836cb0300           call 0x7b9e50
// 0077d31a  d9442448             fld dword ptr [esp + 0x48]
// 0077d31e  8b542444             mov edx, dword ptr [esp + 0x44]
// 0077d322  51                   push ecx
// 0077d323  d91c24               fstp dword ptr [esp]
// 0077d326  8d4c2418             lea ecx, [esp + 0x18]
// 0077d32a  51                   push ecx
// 0077d32b  52                   push edx
// 0077d32c  8bce                 mov ecx, esi
// 0077d32e  e84dfbffff           call 0x77ce80
// 0077d333  8d4c2414             lea ecx, [esp + 0x14]
// 0077d337  8ad8                 mov bl, al
// 0077d339  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0077d341  e88a50c8ff           call 0x4023d0
// 0077d346  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0077d34a  5e                   pop esi
// 0077d34b  8ac3                 mov al, bl
// 0077d34d  5b                   pop ebx
// 0077d34e  64890d00000000       mov dword ptr fs:[0], ecx
// 0077d355  83c438               add esp, 0x38
// 0077d358  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ?intersectingOthers@ContactManager@RBX@@QAE_NPAVPrimitive@2@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
