// roc 2007-03 005e7da0  unit: seg_005e0000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e7da0
//
// 005e7da0  6aff                 push -1
// 005e7da2  68d8997500           push 0x7599d8
// 005e7da7  64a100000000         mov eax, dword ptr fs:[0]
// 005e7dad  50                   push eax
// 005e7dae  64892500000000       mov dword ptr fs:[0], esp
// 005e7db5  83ec18               sub esp, 0x18
// 005e7db8  53                   push ebx
// 005e7db9  56                   push esi
// 005e7dba  8bf1                 mov esi, ecx
// 005e7dbc  8d4c2414             lea ecx, [esp + 0x14]
// 005e7dc0  e86b56fcff           call 0x5ad430
// 005e7dc5  89442418             mov dword ptr [esp + 0x18], eax
// 005e7dc9  c6401101             mov byte ptr [eax + 0x11], 1
// 005e7dcd  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e7dd1  894004               mov dword ptr [eax + 4], eax
// 005e7dd4  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e7dd8  8900                 mov dword ptr [eax], eax
// 005e7dda  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e7dde  894008               mov dword ptr [eax + 8], eax
// 005e7de1  33c0                 xor eax, eax
// 005e7de3  8944241c             mov dword ptr [esp + 0x1c], eax
// 005e7de7  89442428             mov dword ptr [esp + 0x28], eax
// 005e7deb  8d442430             lea eax, [esp + 0x30]
// 005e7def  50                   push eax
// 005e7df0  8d4c240c             lea ecx, [esp + 0xc]
// 005e7df4  51                   push ecx
// 005e7df5  8d4c241c             lea ecx, [esp + 0x1c]
// 005e7df9  e872b60200           call 0x613470
// 005e7dfe  d9442434             fld dword ptr [esp + 0x34]
// 005e7e02  8b442430             mov eax, dword ptr [esp + 0x30]
// 005e7e06  51                   push ecx
// 005e7e07  d91c24               fstp dword ptr [esp]
// 005e7e0a  8d542418             lea edx, [esp + 0x18]
// 005e7e0e  52                   push edx
// 005e7e0f  50                   push eax
// 005e7e10  8bce                 mov ecx, esi
// 005e7e12  e8e9f8ffff           call 0x5e7700
// 005e7e17  8ad8                 mov bl, al
// 005e7e19  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e7e1d  8b10                 mov edx, dword ptr [eax]
// 005e7e1f  50                   push eax
// 005e7e20  8d4c2418             lea ecx, [esp + 0x18]
// 005e7e24  51                   push ecx
// 005e7e25  8bf1                 mov esi, ecx
// 005e7e27  52                   push edx
// 005e7e28  56                   push esi
// 005e7e29  8d4c2418             lea ecx, [esp + 0x18]
// 005e7e2d  51                   push ecx
// 005e7e2e  8bce                 mov ecx, esi
// 005e7e30  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 005e7e38  e8835afcff           call 0x5ad8c0
// 005e7e3d  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e7e41  52                   push edx
// 005e7e42  e8a9620300           call 0x61e0f0
// 005e7e47  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e7e4b  83c404               add esp, 4
// 005e7e4e  5e                   pop esi
// 005e7e4f  8ac3                 mov al, bl
// 005e7e51  5b                   pop ebx
// 005e7e52  64890d00000000       mov dword ptr fs:[0], ecx
// 005e7e59  83c424               add esp, 0x24
// 005e7e5c  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ?intersectingOthers@ContactManager@RBX@@QAE_NPAVPrimitive@2@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
