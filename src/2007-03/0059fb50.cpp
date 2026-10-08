// roc 2007-03 0059fb50  unit: seg_00590000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059fb50
//
// 0059fb50  6aff                 push -1
// 0059fb52  68089c7500           push 0x759c08
// 0059fb57  64a100000000         mov eax, dword ptr fs:[0]
// 0059fb5d  50                   push eax
// 0059fb5e  64892500000000       mov dword ptr fs:[0], esp
// 0059fb65  83ec08               sub esp, 8
// 0059fb68  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059fb6c  56                   push esi
// 0059fb6d  57                   push edi
// 0059fb6e  8bf1                 mov esi, ecx
// 0059fb70  89742408             mov dword ptr [esp + 8], esi
// 0059fb74  50                   push eax
// 0059fb75  51                   push ecx
// 0059fb76  8bc4                 mov eax, esp
// 0059fb78  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0059fb80  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0059fb88  89642414             mov dword ptr [esp + 0x14], esp
// 0059fb8c  c70000000000         mov dword ptr [eax], 0
// 0059fb92  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059fb96  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059fb9a  51                   push ecx
// 0059fb9b  52                   push edx
// 0059fb9c  c644242801           mov byte ptr [esp + 0x28], 1
// 0059fba1  e8ea89feff           call 0x588590
// 0059fba6  50                   push eax
// 0059fba7  8bce                 mov ecx, esi
// 0059fba9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0059fbae  e80d4deaff           call 0x4448c0
// 0059fbb3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059fbb7  50                   push eax
// 0059fbb8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0059fbbd  e82ee50700           call 0x61e0f0
// 0059fbc2  6a18                 push 0x18
// 0059fbc4  c70648bd7900         mov dword ptr [esi], 0x79bd48
// 0059fbca  e839e50700           call 0x61e108
// 0059fbcf  83c408               add esp, 8
// 0059fbd2  85c0                 test eax, eax
// 0059fbd4  741e                 je 0x59fbf4
// 0059fbd6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0059fbda  33c9                 xor ecx, ecx
// 0059fbdc  33d2                 xor edx, edx
// 0059fbde  897808               mov dword ptr [eax + 8], edi
// 0059fbe1  c70034387b00         mov dword ptr [eax], 0x7b3834
// 0059fbe7  897004               mov dword ptr [eax + 4], esi
// 0059fbea  894810               mov dword ptr [eax + 0x10], ecx
// 0059fbed  895014               mov dword ptr [eax + 0x14], edx
// 0059fbf0  8bf8                 mov edi, eax
// 0059fbf2  eb02                 jmp 0x59fbf6
// 0059fbf4  33ff                 xor edi, edi
// 0059fbf6  8b4618               mov eax, dword ptr [esi + 0x18]
// 0059fbf9  3bf8                 cmp edi, eax
// 0059fbfb  7409                 je 0x59fc06
// 0059fbfd  50                   push eax
// 0059fbfe  e8ede40700           call 0x61e0f0
// 0059fc03  83c404               add esp, 4
// 0059fc06  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059fc0a  897e18               mov dword ptr [esi + 0x18], edi
// 0059fc0d  5f                   pop edi
// 0059fc0e  8bc6                 mov eax, esi
// 0059fc10  64890d00000000       mov dword ptr fs:[0], ecx
// 0059fc17  5e                   pop esi
// 0059fc18  83c414               add esp, 0x14
// 0059fc1b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
