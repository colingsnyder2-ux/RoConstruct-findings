// roc 2007-03 005dc990  unit: seg_005d0000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dc990
//
// 005dc990  6aff                 push -1
// 005dc992  68089c7500           push 0x759c08
// 005dc997  64a100000000         mov eax, dword ptr fs:[0]
// 005dc99d  50                   push eax
// 005dc99e  64892500000000       mov dword ptr fs:[0], esp
// 005dc9a5  83ec08               sub esp, 8
// 005dc9a8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005dc9ac  56                   push esi
// 005dc9ad  57                   push edi
// 005dc9ae  8bf1                 mov esi, ecx
// 005dc9b0  89742408             mov dword ptr [esp + 8], esi
// 005dc9b4  50                   push eax
// 005dc9b5  51                   push ecx
// 005dc9b6  8bc4                 mov eax, esp
// 005dc9b8  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005dc9c0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005dc9c8  89642414             mov dword ptr [esp + 0x14], esp
// 005dc9cc  c70000000000         mov dword ptr [eax], 0
// 005dc9d2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005dc9d6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005dc9da  51                   push ecx
// 005dc9db  52                   push edx
// 005dc9dc  c644242801           mov byte ptr [esp + 0x28], 1
// 005dc9e1  e8cafbffff           call 0x5dc5b0
// 005dc9e6  50                   push eax
// 005dc9e7  8bce                 mov ecx, esi
// 005dc9e9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005dc9ee  e8cd7ee6ff           call 0x4448c0
// 005dc9f3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005dc9f7  50                   push eax
// 005dc9f8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005dc9fd  e8ee160400           call 0x61e0f0
// 005dca02  6a18                 push 0x18
// 005dca04  c70648bd7900         mov dword ptr [esi], 0x79bd48
// 005dca0a  e8f9160400           call 0x61e108
// 005dca0f  83c408               add esp, 8
// 005dca12  85c0                 test eax, eax
// 005dca14  741e                 je 0x5dca34
// 005dca16  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005dca1a  33c9                 xor ecx, ecx
// 005dca1c  33d2                 xor edx, edx
// 005dca1e  897808               mov dword ptr [eax + 8], edi
// 005dca21  c70090cc7b00         mov dword ptr [eax], 0x7bcc90
// 005dca27  897004               mov dword ptr [eax + 4], esi
// 005dca2a  894810               mov dword ptr [eax + 0x10], ecx
// 005dca2d  895014               mov dword ptr [eax + 0x14], edx
// 005dca30  8bf8                 mov edi, eax
// 005dca32  eb02                 jmp 0x5dca36
// 005dca34  33ff                 xor edi, edi
// 005dca36  8b4618               mov eax, dword ptr [esi + 0x18]
// 005dca39  3bf8                 cmp edi, eax
// 005dca3b  7409                 je 0x5dca46
// 005dca3d  50                   push eax
// 005dca3e  e8ad160400           call 0x61e0f0
// 005dca43  83c404               add esp, 4
// 005dca46  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005dca4a  897e18               mov dword ptr [esi + 0x18], edi
// 005dca4d  5f                   pop edi
// 005dca4e  8bc6                 mov eax, esi
// 005dca50  64890d00000000       mov dword ptr fs:[0], ecx
// 005dca57  5e                   pop esi
// 005dca58  83c414               add esp, 0x14
// 005dca5b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
