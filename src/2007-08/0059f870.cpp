// roc 2007-08 0059f870  unit: RBX::VGameSettings::?$FactoryProduct  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059f870
//
// 0059f870  6aff                 push -1
// 0059f872  6828b27500           push 0x75b228
// 0059f877  64a100000000         mov eax, dword ptr fs:[0]
// 0059f87d  50                   push eax
// 0059f87e  64892500000000       mov dword ptr fs:[0], esp
// 0059f885  83ec08               sub esp, 8
// 0059f888  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059f88c  56                   push esi
// 0059f88d  57                   push edi
// 0059f88e  8bf1                 mov esi, ecx
// 0059f890  89742408             mov dword ptr [esp + 8], esi
// 0059f894  50                   push eax
// 0059f895  51                   push ecx
// 0059f896  8bc4                 mov eax, esp
// 0059f898  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0059f8a0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0059f8a8  89642414             mov dword ptr [esp + 0x14], esp
// 0059f8ac  c70000000000         mov dword ptr [eax], 0
// 0059f8b2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059f8b6  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059f8ba  51                   push ecx
// 0059f8bb  52                   push edx
// 0059f8bc  c644242801           mov byte ptr [esp + 0x28], 1
// 0059f8c1  e89ae8feff           call 0x58e160
// 0059f8c6  50                   push eax
// 0059f8c7  8bce                 mov ecx, esi
// 0059f8c9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0059f8ce  e88d35eaff           call 0x442e60
// 0059f8d3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059f8d7  50                   push eax
// 0059f8d8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0059f8dd  e880030900           call 0x62fc62
// 0059f8e2  6a18                 push 0x18
// 0059f8e4  c7061cf87800         mov dword ptr [esi], 0x78f81c
// 0059f8ea  e807060900           call 0x62fef6
// 0059f8ef  83c408               add esp, 8
// 0059f8f2  85c0                 test eax, eax
// 0059f8f4  741e                 je 0x59f914
// 0059f8f6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0059f8fa  33c9                 xor ecx, ecx
// 0059f8fc  33d2                 xor edx, edx
// 0059f8fe  897808               mov dword ptr [eax + 8], edi
// 0059f901  c70004317b00         mov dword ptr [eax], 0x7b3104
// 0059f907  897004               mov dword ptr [eax + 4], esi
// 0059f90a  894810               mov dword ptr [eax + 0x10], ecx
// 0059f90d  895014               mov dword ptr [eax + 0x14], edx
// 0059f910  8bf8                 mov edi, eax
// 0059f912  eb02                 jmp 0x59f916
// 0059f914  33ff                 xor edi, edi
// 0059f916  8b4618               mov eax, dword ptr [esi + 0x18]
// 0059f919  3bf8                 cmp edi, eax
// 0059f91b  7409                 je 0x59f926
// 0059f91d  50                   push eax
// 0059f91e  e83f030900           call 0x62fc62
// 0059f923  83c404               add esp, 4
// 0059f926  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059f92a  897e18               mov dword ptr [esi + 0x18], edi
// 0059f92d  5f                   pop edi
// 0059f92e  8bc6                 mov eax, esi
// 0059f930  64890d00000000       mov dword ptr fs:[0], ecx
// 0059f937  5e                   pop esi
// 0059f938  83c414               add esp, 0x14
// 0059f93b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
