// roc 2009-06 006818f0  unit: RBX::VSky::?$FactoryProduct  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006818f0
//
// 006818f0  6aff                 push -1
// 006818f2  6868eb8600           push 0x86eb68
// 006818f7  64a100000000         mov eax, dword ptr fs:[0]
// 006818fd  50                   push eax
// 006818fe  64892500000000       mov dword ptr fs:[0], esp
// 00681905  83ec08               sub esp, 8
// 00681908  8b442424             mov eax, dword ptr [esp + 0x24]
// 0068190c  56                   push esi
// 0068190d  57                   push edi
// 0068190e  8bf1                 mov esi, ecx
// 00681910  89742408             mov dword ptr [esp + 8], esi
// 00681914  50                   push eax
// 00681915  51                   push ecx
// 00681916  8bc4                 mov eax, esp
// 00681918  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00681920  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00681928  89642414             mov dword ptr [esp + 0x14], esp
// 0068192c  c70000000000         mov dword ptr [eax], 0
// 00681932  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00681936  8b542428             mov edx, dword ptr [esp + 0x28]
// 0068193a  51                   push ecx
// 0068193b  52                   push edx
// 0068193c  c644242801           mov byte ptr [esp + 0x28], 1
// 00681941  e85aa6f6ff           call 0x5ebfa0
// 00681946  50                   push eax
// 00681947  8bce                 mov ecx, esi
// 00681949  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0068194e  e8ed7dd8ff           call 0x409740
// 00681953  6a00                 push 0
// 00681955  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0068195a  e8d3700900           call 0x718a32
// 0068195f  6a18                 push 0x18
// 00681961  c70650d48a00         mov dword ptr [esi], 0x8ad450
// 00681967  e8cc700900           call 0x718a38
// 0068196c  83c408               add esp, 8
// 0068196f  85c0                 test eax, eax
// 00681971  741e                 je 0x681991
// 00681973  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00681977  33c9                 xor ecx, ecx
// 00681979  33d2                 xor edx, edx
// 0068197b  897808               mov dword ptr [eax + 8], edi
// 0068197e  c700e05c8e00         mov dword ptr [eax], 0x8e5ce0
// 00681984  897004               mov dword ptr [eax + 4], esi
// 00681987  894810               mov dword ptr [eax + 0x10], ecx
// 0068198a  895014               mov dword ptr [eax + 0x14], edx
// 0068198d  8bf8                 mov edi, eax
// 0068198f  eb02                 jmp 0x681993
// 00681991  33ff                 xor edi, edi
// 00681993  8b4618               mov eax, dword ptr [esi + 0x18]
// 00681996  3bf8                 cmp edi, eax
// 00681998  7409                 je 0x6819a3
// 0068199a  50                   push eax
// 0068199b  e892700900           call 0x718a32
// 006819a0  83c404               add esp, 4
// 006819a3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006819a7  897e18               mov dword ptr [esi + 0x18], edi
// 006819aa  5f                   pop edi
// 006819ab  8bc6                 mov eax, esi
// 006819ad  64890d00000000       mov dword ptr fs:[0], ecx
// 006819b4  5e                   pop esi
// 006819b5  83c414               add esp, 0x14
// 006819b8  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
