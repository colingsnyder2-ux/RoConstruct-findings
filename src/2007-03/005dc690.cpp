// roc 2007-03 005dc690  unit: seg_005d0000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dc690
//
// 005dc690  6aff                 push -1
// 005dc692  68089c7500           push 0x759c08
// 005dc697  64a100000000         mov eax, dword ptr fs:[0]
// 005dc69d  50                   push eax
// 005dc69e  64892500000000       mov dword ptr fs:[0], esp
// 005dc6a5  83ec08               sub esp, 8
// 005dc6a8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005dc6ac  56                   push esi
// 005dc6ad  57                   push edi
// 005dc6ae  8bf1                 mov esi, ecx
// 005dc6b0  89742408             mov dword ptr [esp + 8], esi
// 005dc6b4  50                   push eax
// 005dc6b5  51                   push ecx
// 005dc6b6  8bc4                 mov eax, esp
// 005dc6b8  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005dc6c0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005dc6c8  89642414             mov dword ptr [esp + 0x14], esp
// 005dc6cc  c70000000000         mov dword ptr [eax], 0
// 005dc6d2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005dc6d6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005dc6da  51                   push ecx
// 005dc6db  52                   push edx
// 005dc6dc  c644242801           mov byte ptr [esp + 0x28], 1
// 005dc6e1  e89afaffff           call 0x5dc180
// 005dc6e6  50                   push eax
// 005dc6e7  8bce                 mov ecx, esi
// 005dc6e9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005dc6ee  e8cd81e6ff           call 0x4448c0
// 005dc6f3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005dc6f7  50                   push eax
// 005dc6f8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005dc6fd  e8ee190400           call 0x61e0f0
// 005dc702  6a18                 push 0x18
// 005dc704  c70648bd7900         mov dword ptr [esi], 0x79bd48
// 005dc70a  e8f9190400           call 0x61e108
// 005dc70f  83c408               add esp, 8
// 005dc712  85c0                 test eax, eax
// 005dc714  741e                 je 0x5dc734
// 005dc716  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005dc71a  33c9                 xor ecx, ecx
// 005dc71c  33d2                 xor edx, edx
// 005dc71e  897808               mov dword ptr [eax + 8], edi
// 005dc721  c70060cc7b00         mov dword ptr [eax], 0x7bcc60
// 005dc727  897004               mov dword ptr [eax + 4], esi
// 005dc72a  894810               mov dword ptr [eax + 0x10], ecx
// 005dc72d  895014               mov dword ptr [eax + 0x14], edx
// 005dc730  8bf8                 mov edi, eax
// 005dc732  eb02                 jmp 0x5dc736
// 005dc734  33ff                 xor edi, edi
// 005dc736  8b4618               mov eax, dword ptr [esi + 0x18]
// 005dc739  3bf8                 cmp edi, eax
// 005dc73b  7409                 je 0x5dc746
// 005dc73d  50                   push eax
// 005dc73e  e8ad190400           call 0x61e0f0
// 005dc743  83c404               add esp, 4
// 005dc746  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005dc74a  897e18               mov dword ptr [esi + 0x18], edi
// 005dc74d  5f                   pop edi
// 005dc74e  8bc6                 mov eax, esi
// 005dc750  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc757  5e                   pop esi
// 005dc758  83c414               add esp, 0x14
// 005dc75b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
