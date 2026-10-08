// roc 2007-03 00541220  unit: seg_00540000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00541220
//
// 00541220  6aff                 push -1
// 00541222  68089c7500           push 0x759c08
// 00541227  64a100000000         mov eax, dword ptr fs:[0]
// 0054122d  50                   push eax
// 0054122e  64892500000000       mov dword ptr fs:[0], esp
// 00541235  83ec08               sub esp, 8
// 00541238  8b442424             mov eax, dword ptr [esp + 0x24]
// 0054123c  56                   push esi
// 0054123d  57                   push edi
// 0054123e  8bf1                 mov esi, ecx
// 00541240  89742408             mov dword ptr [esp + 8], esi
// 00541244  50                   push eax
// 00541245  51                   push ecx
// 00541246  8bc4                 mov eax, esp
// 00541248  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00541250  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00541258  89642414             mov dword ptr [esp + 0x14], esp
// 0054125c  c70000000000         mov dword ptr [eax], 0
// 00541262  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00541266  8b542428             mov edx, dword ptr [esp + 0x28]
// 0054126a  51                   push ecx
// 0054126b  52                   push edx
// 0054126c  c644242801           mov byte ptr [esp + 0x28], 1
// 00541271  e8ea88edff           call 0x419b60
// 00541276  50                   push eax
// 00541277  8bce                 mov ecx, esi
// 00541279  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0054127e  e80d16f0ff           call 0x442890
// 00541283  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00541287  50                   push eax
// 00541288  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0054128d  e85ece0d00           call 0x61e0f0
// 00541292  6a18                 push 0x18
// 00541294  c706c0e67800         mov dword ptr [esi], 0x78e6c0
// 0054129a  e869ce0d00           call 0x61e108
// 0054129f  83c408               add esp, 8
// 005412a2  85c0                 test eax, eax
// 005412a4  741e                 je 0x5412c4
// 005412a6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005412aa  33c9                 xor ecx, ecx
// 005412ac  33d2                 xor edx, edx
// 005412ae  897808               mov dword ptr [eax + 8], edi
// 005412b1  c70090657a00         mov dword ptr [eax], 0x7a6590
// 005412b7  897004               mov dword ptr [eax + 4], esi
// 005412ba  894810               mov dword ptr [eax + 0x10], ecx
// 005412bd  895014               mov dword ptr [eax + 0x14], edx
// 005412c0  8bf8                 mov edi, eax
// 005412c2  eb02                 jmp 0x5412c6
// 005412c4  33ff                 xor edi, edi
// 005412c6  8b4618               mov eax, dword ptr [esi + 0x18]
// 005412c9  3bf8                 cmp edi, eax
// 005412cb  7409                 je 0x5412d6
// 005412cd  50                   push eax
// 005412ce  e81dce0d00           call 0x61e0f0
// 005412d3  83c404               add esp, 4
// 005412d6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005412da  897e18               mov dword ptr [esi + 0x18], edi
// 005412dd  5f                   pop edi
// 005412de  8bc6                 mov eax, esi
// 005412e0  64890d00000000       mov dword ptr fs:[0], ecx
// 005412e7  5e                   pop esi
// 005412e8  83c414               add esp, 0x14
// 005412eb  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
