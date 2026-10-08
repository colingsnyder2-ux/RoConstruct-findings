// roc 2009-06 005cb2c0  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cb2c0
//
// 005cb2c0  6aff                 push -1
// 005cb2c2  6868eb8600           push 0x86eb68
// 005cb2c7  64a100000000         mov eax, dword ptr fs:[0]
// 005cb2cd  50                   push eax
// 005cb2ce  64892500000000       mov dword ptr fs:[0], esp
// 005cb2d5  83ec08               sub esp, 8
// 005cb2d8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005cb2dc  56                   push esi
// 005cb2dd  57                   push edi
// 005cb2de  8bf1                 mov esi, ecx
// 005cb2e0  89742408             mov dword ptr [esp + 8], esi
// 005cb2e4  50                   push eax
// 005cb2e5  51                   push ecx
// 005cb2e6  8bc4                 mov eax, esp
// 005cb2e8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005cb2f0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005cb2f8  89642414             mov dword ptr [esp + 0x14], esp
// 005cb2fc  c70000000000         mov dword ptr [eax], 0
// 005cb302  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005cb306  8b542428             mov edx, dword ptr [esp + 0x28]
// 005cb30a  51                   push ecx
// 005cb30b  52                   push edx
// 005cb30c  c644242801           mov byte ptr [esp + 0x28], 1
// 005cb311  e83afbffff           call 0x5cae50
// 005cb316  50                   push eax
// 005cb317  8bce                 mov ecx, esi
// 005cb319  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005cb31e  e81de4e3ff           call 0x409740
// 005cb323  6a00                 push 0
// 005cb325  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005cb32a  e803d71400           call 0x718a32
// 005cb32f  6a18                 push 0x18
// 005cb331  c70650d48a00         mov dword ptr [esi], 0x8ad450
// 005cb337  e8fcd61400           call 0x718a38
// 005cb33c  83c408               add esp, 8
// 005cb33f  85c0                 test eax, eax
// 005cb341  741e                 je 0x5cb361
// 005cb343  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005cb347  33c9                 xor ecx, ecx
// 005cb349  33d2                 xor edx, edx
// 005cb34b  897808               mov dword ptr [eax + 8], edi
// 005cb34e  c70024428d00         mov dword ptr [eax], 0x8d4224
// 005cb354  897004               mov dword ptr [eax + 4], esi
// 005cb357  894810               mov dword ptr [eax + 0x10], ecx
// 005cb35a  895014               mov dword ptr [eax + 0x14], edx
// 005cb35d  8bf8                 mov edi, eax
// 005cb35f  eb02                 jmp 0x5cb363
// 005cb361  33ff                 xor edi, edi
// 005cb363  8b4618               mov eax, dword ptr [esi + 0x18]
// 005cb366  3bf8                 cmp edi, eax
// 005cb368  7409                 je 0x5cb373
// 005cb36a  50                   push eax
// 005cb36b  e8c2d61400           call 0x718a32
// 005cb370  83c404               add esp, 4
// 005cb373  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005cb377  897e18               mov dword ptr [esi + 0x18], edi
// 005cb37a  5f                   pop edi
// 005cb37b  8bc6                 mov eax, esi
// 005cb37d  64890d00000000       mov dword ptr fs:[0], ecx
// 005cb384  5e                   pop esi
// 005cb385  83c414               add esp, 0x14
// 005cb388  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
