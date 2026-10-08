// roc 2009-06 00693540  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00693540
//
// 00693540  6aff                 push -1
// 00693542  6868eb8600           push 0x86eb68
// 00693547  64a100000000         mov eax, dword ptr fs:[0]
// 0069354d  50                   push eax
// 0069354e  64892500000000       mov dword ptr fs:[0], esp
// 00693555  83ec08               sub esp, 8
// 00693558  8b442424             mov eax, dword ptr [esp + 0x24]
// 0069355c  56                   push esi
// 0069355d  57                   push edi
// 0069355e  8bf1                 mov esi, ecx
// 00693560  89742408             mov dword ptr [esp + 8], esi
// 00693564  50                   push eax
// 00693565  51                   push ecx
// 00693566  8bc4                 mov eax, esp
// 00693568  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00693570  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00693578  89642414             mov dword ptr [esp + 0x14], esp
// 0069357c  c70000000000         mov dword ptr [eax], 0
// 00693582  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00693586  8b542428             mov edx, dword ptr [esp + 0x28]
// 0069358a  51                   push ecx
// 0069358b  52                   push edx
// 0069358c  c644242801           mov byte ptr [esp + 0x28], 1
// 00693591  e8ea83f5ff           call 0x5eb980
// 00693596  50                   push eax
// 00693597  8bce                 mov ecx, esi
// 00693599  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0069359e  e88ddff7ff           call 0x611530
// 006935a3  6a00                 push 0
// 006935a5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 006935aa  e883540800           call 0x718a32
// 006935af  6a18                 push 0x18
// 006935b1  c70608668e00         mov dword ptr [esi], 0x8e6608
// 006935b7  e87c540800           call 0x718a38
// 006935bc  83c408               add esp, 8
// 006935bf  85c0                 test eax, eax
// 006935c1  741e                 je 0x6935e1
// 006935c3  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006935c7  33c9                 xor ecx, ecx
// 006935c9  33d2                 xor edx, edx
// 006935cb  897808               mov dword ptr [eax + 8], edi
// 006935ce  c700d86f8e00         mov dword ptr [eax], 0x8e6fd8
// 006935d4  897004               mov dword ptr [eax + 4], esi
// 006935d7  894810               mov dword ptr [eax + 0x10], ecx
// 006935da  895014               mov dword ptr [eax + 0x14], edx
// 006935dd  8bf8                 mov edi, eax
// 006935df  eb02                 jmp 0x6935e3
// 006935e1  33ff                 xor edi, edi
// 006935e3  8b4618               mov eax, dword ptr [esi + 0x18]
// 006935e6  3bf8                 cmp edi, eax
// 006935e8  7409                 je 0x6935f3
// 006935ea  50                   push eax
// 006935eb  e842540800           call 0x718a32
// 006935f0  83c404               add esp, 4
// 006935f3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006935f7  897e18               mov dword ptr [esi + 0x18], edi
// 006935fa  5f                   pop edi
// 006935fb  8bc6                 mov eax, esi
// 006935fd  64890d00000000       mov dword ptr fs:[0], ecx
// 00693604  5e                   pop esi
// 00693605  83c414               add esp, 0x14
// 00693608  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
