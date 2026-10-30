// roc 2012-06 009ed230  unit: CXTPToolTipContext  size: 460 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ed230
//
// 009ed230  6aff                 push -1
// 009ed232  687c17ae00           push 0xae177c
// 009ed237  64a100000000         mov eax, dword ptr fs:[0]
// 009ed23d  50                   push eax
// 009ed23e  51                   push ecx
// 009ed23f  56                   push esi
// 009ed240  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009ed245  33c4                 xor eax, esp
// 009ed247  50                   push eax
// 009ed248  8d44240c             lea eax, [esp + 0xc]
// 009ed24c  64a300000000         mov dword ptr fs:[0], eax
// 009ed252  8bf1                 mov esi, ecx
// 009ed254  8b4630               mov eax, dword ptr [esi + 0x30]
// 009ed257  83c0fe               add eax, -2
// 009ed25a  83f804               cmp eax, 4
// 009ed25d  0f872f010000         ja 0x9ed392
// 009ed263  ff2485e8d39e00       jmp dword ptr [eax*4 + 0x9ed3e8]
// 009ed26a  6830010000           push 0x130
// 009ed26f  e8a64ef9ff           call 0x98211a
// 009ed274  83c404               add esp, 4
// 009ed277  89442408             mov dword ptr [esp + 8], eax
// 009ed27b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 009ed283  85c0                 test eax, eax
// 009ed285  0f8445010000         je 0x9ed3d0
// 009ed28b  56                   push esi
// 009ed28c  8bc8                 mov ecx, eax
// 009ed28e  e8cde8ffff           call 0x9ebb60
// 009ed293  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009ed297  64890d00000000       mov dword ptr fs:[0], ecx
// 009ed29e  59                   pop ecx
// 009ed29f  5e                   pop esi
// 009ed2a0  83c410               add esp, 0x10
// 009ed2a3  c20400               ret 4
// 009ed2a6  685c020000           push 0x25c
// 009ed2ab  e86a4ef9ff           call 0x98211a
// 009ed2b0  83c404               add esp, 4
// 009ed2b3  89442408             mov dword ptr [esp + 8], eax
// 009ed2b7  c744241401000000     mov dword ptr [esp + 0x14], 1
// 009ed2bf  85c0                 test eax, eax
// 009ed2c1  0f8409010000         je 0x9ed3d0
// 009ed2c7  56                   push esi
// 009ed2c8  8bc8                 mov ecx, eax
// 009ed2ca  e801fdffff           call 0x9ecfd0
// 009ed2cf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009ed2d3  64890d00000000       mov dword ptr fs:[0], ecx
// 009ed2da  59                   pop ecx
// 009ed2db  5e                   pop esi
// 009ed2dc  83c410               add esp, 0x10
// 009ed2df  c20400               ret 4
// 009ed2e2  6830010000           push 0x130
// 009ed2e7  e82e4ef9ff           call 0x98211a
// 009ed2ec  83c404               add esp, 4
// 009ed2ef  89442408             mov dword ptr [esp + 8], eax
// 009ed2f3  c744241402000000     mov dword ptr [esp + 0x14], 2
// 009ed2fb  85c0                 test eax, eax
// 009ed2fd  0f84cd000000         je 0x9ed3d0
// 009ed303  56                   push esi
// 009ed304  8bc8                 mov ecx, eax
// 009ed306  e8f5f9ffff           call 0x9ecd00
// 009ed30b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009ed30f  64890d00000000       mov dword ptr fs:[0], ecx
// 009ed316  59                   pop ecx
// 009ed317  5e                   pop esi
// 009ed318  83c410               add esp, 0x10
// 009ed31b  c20400               ret 4
// 009ed31e  6830010000           push 0x130
// 009ed323  e8f24df9ff           call 0x98211a
// 009ed328  83c404               add esp, 4
// 009ed32b  89442408             mov dword ptr [esp + 8], eax
// 009ed32f  c744241403000000     mov dword ptr [esp + 0x14], 3
// 009ed337  85c0                 test eax, eax
// 009ed339  0f8491000000         je 0x9ed3d0
// 009ed33f  56                   push esi
// 009ed340  8bc8                 mov ecx, eax
// 009ed342  e809fbffff           call 0x9ece50
// 009ed347  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009ed34b  64890d00000000       mov dword ptr fs:[0], ecx
// 009ed352  59                   pop ecx
// 009ed353  5e                   pop esi
// 009ed354  83c410               add esp, 0x10
// 009ed357  c20400               ret 4
// 009ed35a  6898010000           push 0x198
// 009ed35f  e8b64df9ff           call 0x98211a
// 009ed364  83c404               add esp, 4
// 009ed367  89442408             mov dword ptr [esp + 8], eax
// 009ed36b  c744241404000000     mov dword ptr [esp + 0x14], 4
// 009ed373  85c0                 test eax, eax
// 009ed375  7459                 je 0x9ed3d0
// 009ed377  56                   push esi
// 009ed378  8bc8                 mov ecx, eax
// 009ed37a  e811fdffff           call 0x9ed090
// 009ed37f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009ed383  64890d00000000       mov dword ptr fs:[0], ecx
// 009ed38a  59                   pop ecx
// 009ed38b  5e                   pop esi
// 009ed38c  83c410               add esp, 0x10
// 009ed38f  c20400               ret 4
// 009ed392  6a70                 push 0x70
// 009ed394  e8814df9ff           call 0x98211a
// 009ed399  8bf0                 mov esi, eax
// 009ed39b  83c404               add esp, 4
// 009ed39e  89742408             mov dword ptr [esp + 8], esi
// 009ed3a2  c744241405000000     mov dword ptr [esp + 0x14], 5
// 009ed3aa  85f6                 test esi, esi
// 009ed3ac  7422                 je 0x9ed3d0
// 009ed3ae  8bce                 mov ecx, esi
// 009ed3b0  e86bc80a00           call 0xa99c20
// 009ed3b5  c706e47fc100         mov dword ptr [esi], 0xc17fe4
// 009ed3bb  8bc6                 mov eax, esi
// 009ed3bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009ed3c1  64890d00000000       mov dword ptr fs:[0], ecx
// 009ed3c8  59                   pop ecx
// 009ed3c9  5e                   pop esi
// 009ed3ca  83c410               add esp, 0x10
// 009ed3cd  c20400               ret 4
// 009ed3d0  33c0                 xor eax, eax
// 009ed3d2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009ed3d6  64890d00000000       mov dword ptr fs:[0], ecx
// 009ed3dd  59                   pop ecx
// 009ed3de  5e                   pop esi
// 009ed3df  83c410               add esp, 0x10
// 009ed3e2  c20400               ret 4
// 009ed3e5  8d4900               lea ecx, [ecx]
// 009ed3e8  6ad2                 push -0x2e
// 009ed3ea  9e                   sahf 
// 009ed3eb  00a6d29e00e2         add byte ptr [esi - 0x1dff612e], ah
// 009ed3f1  d29e001ed39e         rcr byte ptr [esi - 0x612ce200], cl
// 009ed3f7  005ad3               add byte ptr [edx - 0x2d], bl
// 009ed3fa  9e                   sahf 
// copied from an identical function in another client (function ?CreateToolTip@CXTPToolTipContext@@MAEPAVCWnd@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp