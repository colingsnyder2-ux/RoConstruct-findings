// roc 2009-12 008971d0  unit: CXTPRibbonBar  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008971d0
//
// 008971d0  6aff                 push -1
// 008971d2  6838189600           push 0x961838
// 008971d7  64a100000000         mov eax, dword ptr fs:[0]
// 008971dd  50                   push eax
// 008971de  83ec08               sub esp, 8
// 008971e1  53                   push ebx
// 008971e2  56                   push esi
// 008971e3  a10052b600           mov eax, dword ptr [0xb65200]
// 008971e8  33c4                 xor eax, esp
// 008971ea  50                   push eax
// 008971eb  8d442414             lea eax, [esp + 0x14]
// 008971ef  64a300000000         mov dword ptr fs:[0], eax
// 008971f5  8bd9                 mov ebx, ecx
// 008971f7  e8c4e1ffff           call 0x8953c0
// 008971fc  85c0                 test eax, eax
// 008971fe  0f848d000000         je 0x897291
// 00897204  8d4c240f             lea ecx, [esp + 0xf]
// 00897208  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00897210  e85bb9b8ff           call 0x422b70
// 00897215  8bf0                 mov esi, eax
// 00897217  8bcb                 mov ecx, ebx
// 00897219  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00897221  e86afef6ff           call 0x807090
// 00897226  85c0                 test eax, eax
// 00897228  7403                 je 0x89722d
// 0089722a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0089722d  0fb7542428           movzx edx, word ptr [esp + 0x28]
// 00897232  8d4c2410             lea ecx, [esp + 0x10]
// 00897236  51                   push ecx
// 00897237  0fb74c2428           movzx ecx, word ptr [esp + 0x28]
// 0089723c  c1e210               shl edx, 0x10
// 0089723f  0bd1                 or edx, ecx
// 00897241  52                   push edx
// 00897242  6a00                 push 0
// 00897244  6884000000           push 0x84
// 00897249  50                   push eax
// 0089724a  8bce                 mov ecx, esi
// 0089724c  e8ff4dfdff           call 0x86c050
// 00897251  8d4c240f             lea ecx, [esp + 0xf]
// 00897255  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0089725d  e82ed8fbff           call 0x854a90
// 00897262  8b442410             mov eax, dword ptr [esp + 0x10]
// 00897266  83f808               cmp eax, 8
// 00897269  740f                 je 0x89727a
// 0089726b  83f809               cmp eax, 9
// 0089726e  740a                 je 0x89727a
// 00897270  83f814               cmp eax, 0x14
// 00897273  7405                 je 0x89727a
// 00897275  83f815               cmp eax, 0x15
// 00897278  7517                 jne 0x897291
// 0089727a  83c8ff               or eax, 0xffffffff
// 0089727d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00897281  64890d00000000       mov dword ptr fs:[0], ecx
// 00897288  59                   pop ecx
// 00897289  5e                   pop esi
// 0089728a  5b                   pop ebx
// 0089728b  83c414               add esp, 0x14
// 0089728e  c20800               ret 8
// 00897291  8b542428             mov edx, dword ptr [esp + 0x28]
// 00897295  8b442424             mov eax, dword ptr [esp + 0x24]
// 00897299  52                   push edx
// 0089729a  50                   push eax
// 0089729b  8bcb                 mov ecx, ebx
// 0089729d  e8cebbf7ff           call 0x812e70
// 008972a2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008972a6  64890d00000000       mov dword ptr fs:[0], ecx
// 008972ad  59                   pop ecx
// 008972ae  5e                   pop esi
// 008972af  5b                   pop ebx
// 008972b0  83c414               add esp, 0x14
// 008972b3  c20800               ret 8
// copied from an identical function in another client (function ?OnNcHitTest@CXTPRibbonBar@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp