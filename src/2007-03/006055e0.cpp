// roc 2007-03 006055e0  unit: seg_00600000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006055e0
//
// 006055e0  6aff                 push -1
// 006055e2  68089c7500           push 0x759c08
// 006055e7  64a100000000         mov eax, dword ptr fs:[0]
// 006055ed  50                   push eax
// 006055ee  64892500000000       mov dword ptr fs:[0], esp
// 006055f5  83ec08               sub esp, 8
// 006055f8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006055fc  56                   push esi
// 006055fd  57                   push edi
// 006055fe  8bf1                 mov esi, ecx
// 00605600  89742408             mov dword ptr [esp + 8], esi
// 00605604  50                   push eax
// 00605605  51                   push ecx
// 00605606  8bc4                 mov eax, esp
// 00605608  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00605610  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00605618  89642414             mov dword ptr [esp + 0x14], esp
// 0060561c  c70000000000         mov dword ptr [eax], 0
// 00605622  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00605626  8b542428             mov edx, dword ptr [esp + 0x28]
// 0060562a  51                   push ecx
// 0060562b  52                   push edx
// 0060562c  c644242801           mov byte ptr [esp + 0x28], 1
// 00605631  e8fac4fcff           call 0x5d1b30
// 00605636  50                   push eax
// 00605637  8bce                 mov ecx, esi
// 00605639  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0060563e  e81dbbf6ff           call 0x571160
// 00605643  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00605647  50                   push eax
// 00605648  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0060564d  e89e8a0100           call 0x61e0f0
// 00605652  6a18                 push 0x18
// 00605654  c7063c497b00         mov dword ptr [esi], 0x7b493c
// 0060565a  e8a98a0100           call 0x61e108
// 0060565f  83c408               add esp, 8
// 00605662  85c0                 test eax, eax
// 00605664  741e                 je 0x605684
// 00605666  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0060566a  33c9                 xor ecx, ecx
// 0060566c  33d2                 xor edx, edx
// 0060566e  897808               mov dword ptr [eax + 8], edi
// 00605671  c700840f7c00         mov dword ptr [eax], 0x7c0f84
// 00605677  897004               mov dword ptr [eax + 4], esi
// 0060567a  894810               mov dword ptr [eax + 0x10], ecx
// 0060567d  895014               mov dword ptr [eax + 0x14], edx
// 00605680  8bf8                 mov edi, eax
// 00605682  eb02                 jmp 0x605686
// 00605684  33ff                 xor edi, edi
// 00605686  8b4618               mov eax, dword ptr [esi + 0x18]
// 00605689  3bf8                 cmp edi, eax
// 0060568b  7409                 je 0x605696
// 0060568d  50                   push eax
// 0060568e  e85d8a0100           call 0x61e0f0
// 00605693  83c404               add esp, 4
// 00605696  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0060569a  897e18               mov dword ptr [esi + 0x18], edi
// 0060569d  5f                   pop edi
// 0060569e  8bc6                 mov eax, esi
// 006056a0  64890d00000000       mov dword ptr fs:[0], ecx
// 006056a7  5e                   pop esi
// 006056a8  83c414               add esp, 0x14
// 006056ab  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
