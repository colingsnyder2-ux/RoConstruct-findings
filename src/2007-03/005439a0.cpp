// roc 2007-03 005439a0  unit: seg_00540000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005439a0
//
// 005439a0  6aff                 push -1
// 005439a2  68089c7500           push 0x759c08
// 005439a7  64a100000000         mov eax, dword ptr fs:[0]
// 005439ad  50                   push eax
// 005439ae  64892500000000       mov dword ptr fs:[0], esp
// 005439b5  83ec08               sub esp, 8
// 005439b8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005439bc  56                   push esi
// 005439bd  57                   push edi
// 005439be  8bf1                 mov esi, ecx
// 005439c0  89742408             mov dword ptr [esp + 8], esi
// 005439c4  50                   push eax
// 005439c5  51                   push ecx
// 005439c6  8bc4                 mov eax, esp
// 005439c8  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005439d0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005439d8  89642414             mov dword ptr [esp + 0x14], esp
// 005439dc  c70000000000         mov dword ptr [eax], 0
// 005439e2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005439e6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005439ea  51                   push ecx
// 005439eb  52                   push edx
// 005439ec  c644242801           mov byte ptr [esp + 0x28], 1
// 005439f1  e85afdffff           call 0x543750
// 005439f6  50                   push eax
// 005439f7  8bce                 mov ecx, esi
// 005439f9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005439fe  e88deeefff           call 0x442890
// 00543a03  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00543a07  50                   push eax
// 00543a08  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00543a0d  e8dea60d00           call 0x61e0f0
// 00543a12  6a18                 push 0x18
// 00543a14  c706c0e67800         mov dword ptr [esi], 0x78e6c0
// 00543a1a  e8e9a60d00           call 0x61e108
// 00543a1f  83c408               add esp, 8
// 00543a22  85c0                 test eax, eax
// 00543a24  741e                 je 0x543a44
// 00543a26  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00543a2a  33c9                 xor ecx, ecx
// 00543a2c  33d2                 xor edx, edx
// 00543a2e  897808               mov dword ptr [eax + 8], edi
// 00543a31  c7007c687a00         mov dword ptr [eax], 0x7a687c
// 00543a37  897004               mov dword ptr [eax + 4], esi
// 00543a3a  894810               mov dword ptr [eax + 0x10], ecx
// 00543a3d  895014               mov dword ptr [eax + 0x14], edx
// 00543a40  8bf8                 mov edi, eax
// 00543a42  eb02                 jmp 0x543a46
// 00543a44  33ff                 xor edi, edi
// 00543a46  8b4618               mov eax, dword ptr [esi + 0x18]
// 00543a49  3bf8                 cmp edi, eax
// 00543a4b  7409                 je 0x543a56
// 00543a4d  50                   push eax
// 00543a4e  e89da60d00           call 0x61e0f0
// 00543a53  83c404               add esp, 4
// 00543a56  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00543a5a  897e18               mov dword ptr [esi + 0x18], edi
// 00543a5d  5f                   pop edi
// 00543a5e  8bc6                 mov eax, esi
// 00543a60  64890d00000000       mov dword ptr fs:[0], ecx
// 00543a67  5e                   pop esi
// 00543a68  83c414               add esp, 0x14
// 00543a6b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
