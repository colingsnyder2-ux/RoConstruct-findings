// roc 2007-03 0059fc20  unit: seg_00590000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059fc20
//
// 0059fc20  6aff                 push -1
// 0059fc22  68089c7500           push 0x759c08
// 0059fc27  64a100000000         mov eax, dword ptr fs:[0]
// 0059fc2d  50                   push eax
// 0059fc2e  64892500000000       mov dword ptr fs:[0], esp
// 0059fc35  83ec08               sub esp, 8
// 0059fc38  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059fc3c  56                   push esi
// 0059fc3d  57                   push edi
// 0059fc3e  8bf1                 mov esi, ecx
// 0059fc40  89742408             mov dword ptr [esp + 8], esi
// 0059fc44  50                   push eax
// 0059fc45  51                   push ecx
// 0059fc46  8bc4                 mov eax, esp
// 0059fc48  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0059fc50  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0059fc58  89642414             mov dword ptr [esp + 0x14], esp
// 0059fc5c  c70000000000         mov dword ptr [eax], 0
// 0059fc62  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059fc66  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059fc6a  51                   push ecx
// 0059fc6b  52                   push edx
// 0059fc6c  c644242801           mov byte ptr [esp + 0x28], 1
// 0059fc71  e81a89feff           call 0x588590
// 0059fc76  50                   push eax
// 0059fc77  8bce                 mov ecx, esi
// 0059fc79  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0059fc7e  e80d2ceaff           call 0x442890
// 0059fc83  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059fc87  50                   push eax
// 0059fc88  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0059fc8d  e85ee40700           call 0x61e0f0
// 0059fc92  6a18                 push 0x18
// 0059fc94  c706c0e67800         mov dword ptr [esi], 0x78e6c0
// 0059fc9a  e869e40700           call 0x61e108
// 0059fc9f  83c408               add esp, 8
// 0059fca2  85c0                 test eax, eax
// 0059fca4  741e                 je 0x59fcc4
// 0059fca6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0059fcaa  33c9                 xor ecx, ecx
// 0059fcac  33d2                 xor edx, edx
// 0059fcae  897808               mov dword ptr [eax + 8], edi
// 0059fcb1  c70044387b00         mov dword ptr [eax], 0x7b3844
// 0059fcb7  897004               mov dword ptr [eax + 4], esi
// 0059fcba  894810               mov dword ptr [eax + 0x10], ecx
// 0059fcbd  895014               mov dword ptr [eax + 0x14], edx
// 0059fcc0  8bf8                 mov edi, eax
// 0059fcc2  eb02                 jmp 0x59fcc6
// 0059fcc4  33ff                 xor edi, edi
// 0059fcc6  8b4618               mov eax, dword ptr [esi + 0x18]
// 0059fcc9  3bf8                 cmp edi, eax
// 0059fccb  7409                 je 0x59fcd6
// 0059fccd  50                   push eax
// 0059fcce  e81de40700           call 0x61e0f0
// 0059fcd3  83c404               add esp, 4
// 0059fcd6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059fcda  897e18               mov dword ptr [esi + 0x18], edi
// 0059fcdd  5f                   pop edi
// 0059fcde  8bc6                 mov eax, esi
// 0059fce0  64890d00000000       mov dword ptr fs:[0], ecx
// 0059fce7  5e                   pop esi
// 0059fce8  83c414               add esp, 0x14
// 0059fceb  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
