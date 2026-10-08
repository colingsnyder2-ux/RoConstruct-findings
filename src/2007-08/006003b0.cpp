// roc 2007-08 006003b0  unit: RBX::BlockBlockContact  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006003b0
//
// 006003b0  6aff                 push -1
// 006003b2  6838877500           push 0x758738
// 006003b7  64a100000000         mov eax, dword ptr fs:[0]
// 006003bd  50                   push eax
// 006003be  64892500000000       mov dword ptr fs:[0], esp
// 006003c5  83ec18               sub esp, 0x18
// 006003c8  53                   push ebx
// 006003c9  56                   push esi
// 006003ca  8bf1                 mov esi, ecx
// 006003cc  8d4c2414             lea ecx, [esp + 0x14]
// 006003d0  e8db8ffaff           call 0x5a93b0
// 006003d5  89442418             mov dword ptr [esp + 0x18], eax
// 006003d9  c6401101             mov byte ptr [eax + 0x11], 1
// 006003dd  8b442418             mov eax, dword ptr [esp + 0x18]
// 006003e1  894004               mov dword ptr [eax + 4], eax
// 006003e4  8b442418             mov eax, dword ptr [esp + 0x18]
// 006003e8  8900                 mov dword ptr [eax], eax
// 006003ea  8b442418             mov eax, dword ptr [esp + 0x18]
// 006003ee  894008               mov dword ptr [eax + 8], eax
// 006003f1  33c0                 xor eax, eax
// 006003f3  8944241c             mov dword ptr [esp + 0x1c], eax
// 006003f7  89442428             mov dword ptr [esp + 0x28], eax
// 006003fb  8d442430             lea eax, [esp + 0x30]
// 006003ff  50                   push eax
// 00600400  8d4c240c             lea ecx, [esp + 0xc]
// 00600404  51                   push ecx
// 00600405  8d4c241c             lea ecx, [esp + 0x1c]
// 00600409  e8a225feff           call 0x5e29b0
// 0060040e  d9442434             fld dword ptr [esp + 0x34]
// 00600412  8b442430             mov eax, dword ptr [esp + 0x30]
// 00600416  51                   push ecx
// 00600417  d91c24               fstp dword ptr [esp]
// 0060041a  8d542418             lea edx, [esp + 0x18]
// 0060041e  52                   push edx
// 0060041f  50                   push eax
// 00600420  8bce                 mov ecx, esi
// 00600422  e809f6ffff           call 0x5ffa30
// 00600427  8ad8                 mov bl, al
// 00600429  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060042d  8b10                 mov edx, dword ptr [eax]
// 0060042f  50                   push eax
// 00600430  8d4c2418             lea ecx, [esp + 0x18]
// 00600434  51                   push ecx
// 00600435  8bf1                 mov esi, ecx
// 00600437  52                   push edx
// 00600438  56                   push esi
// 00600439  8d4c2418             lea ecx, [esp + 0x18]
// 0060043d  51                   push ecx
// 0060043e  8bce                 mov ecx, esi
// 00600440  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 00600448  e81336fbff           call 0x5b3a60
// 0060044d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00600451  52                   push edx
// 00600452  e80bf80200           call 0x62fc62
// 00600457  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0060045b  83c404               add esp, 4
// 0060045e  5e                   pop esi
// 0060045f  8ac3                 mov al, bl
// 00600461  5b                   pop ebx
// 00600462  64890d00000000       mov dword ptr fs:[0], ecx
// 00600469  83c424               add esp, 0x24
// 0060046c  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ?intersectingOthers@ContactManager@RBX@@QAE_NPAVPrimitive@2@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
