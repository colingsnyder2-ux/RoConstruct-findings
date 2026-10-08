// roc 2007-03 00603770  unit: seg_00600000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00603770
//
// 00603770  6aff                 push -1
// 00603772  68089c7500           push 0x759c08
// 00603777  64a100000000         mov eax, dword ptr fs:[0]
// 0060377d  50                   push eax
// 0060377e  64892500000000       mov dword ptr fs:[0], esp
// 00603785  83ec08               sub esp, 8
// 00603788  8b442424             mov eax, dword ptr [esp + 0x24]
// 0060378c  56                   push esi
// 0060378d  57                   push edi
// 0060378e  8bf1                 mov esi, ecx
// 00603790  89742408             mov dword ptr [esp + 8], esi
// 00603794  50                   push eax
// 00603795  51                   push ecx
// 00603796  8bc4                 mov eax, esp
// 00603798  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006037a0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006037a8  89642414             mov dword ptr [esp + 0x14], esp
// 006037ac  c70000000000         mov dword ptr [eax], 0
// 006037b2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006037b6  8b542428             mov edx, dword ptr [esp + 0x28]
// 006037ba  51                   push ecx
// 006037bb  52                   push edx
// 006037bc  c644242801           mov byte ptr [esp + 0x28], 1
// 006037c1  e8eafcffff           call 0x6034b0
// 006037c6  50                   push eax
// 006037c7  8bce                 mov ecx, esi
// 006037c9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006037ce  e81d01f7ff           call 0x5738f0
// 006037d3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006037d7  50                   push eax
// 006037d8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 006037dd  e80ea90100           call 0x61e0f0
// 006037e2  6a18                 push 0x18
// 006037e4  c70690cf7b00         mov dword ptr [esi], 0x7bcf90
// 006037ea  e819a90100           call 0x61e108
// 006037ef  83c408               add esp, 8
// 006037f2  85c0                 test eax, eax
// 006037f4  741e                 je 0x603814
// 006037f6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006037fa  33c9                 xor ecx, ecx
// 006037fc  33d2                 xor edx, edx
// 006037fe  897808               mov dword ptr [eax + 8], edi
// 00603801  c700d80b7c00         mov dword ptr [eax], 0x7c0bd8
// 00603807  897004               mov dword ptr [eax + 4], esi
// 0060380a  894810               mov dword ptr [eax + 0x10], ecx
// 0060380d  895014               mov dword ptr [eax + 0x14], edx
// 00603810  8bf8                 mov edi, eax
// 00603812  eb02                 jmp 0x603816
// 00603814  33ff                 xor edi, edi
// 00603816  8b4618               mov eax, dword ptr [esi + 0x18]
// 00603819  3bf8                 cmp edi, eax
// 0060381b  7409                 je 0x603826
// 0060381d  50                   push eax
// 0060381e  e8cda80100           call 0x61e0f0
// 00603823  83c404               add esp, 4
// 00603826  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0060382a  897e18               mov dword ptr [esi + 0x18], edi
// 0060382d  5f                   pop edi
// 0060382e  8bc6                 mov eax, esi
// 00603830  64890d00000000       mov dword ptr fs:[0], ecx
// 00603837  5e                   pop esi
// 00603838  83c414               add esp, 0x14
// 0060383b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
