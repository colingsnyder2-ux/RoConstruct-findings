// roc 2007-08 005f47b0  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f47b0
//
// 005f47b0  6aff                 push -1
// 005f47b2  6848b77500           push 0x75b748
// 005f47b7  64a100000000         mov eax, dword ptr fs:[0]
// 005f47bd  50                   push eax
// 005f47be  64892500000000       mov dword ptr fs:[0], esp
// 005f47c5  83ec08               sub esp, 8
// 005f47c8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005f47cc  56                   push esi
// 005f47cd  57                   push edi
// 005f47ce  8bf1                 mov esi, ecx
// 005f47d0  89742408             mov dword ptr [esp + 8], esi
// 005f47d4  50                   push eax
// 005f47d5  51                   push ecx
// 005f47d6  8bc4                 mov eax, esp
// 005f47d8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005f47e0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005f47e8  89642414             mov dword ptr [esp + 0x14], esp
// 005f47ec  c70000000000         mov dword ptr [eax], 0
// 005f47f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f47f6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005f47fa  51                   push ecx
// 005f47fb  52                   push edx
// 005f47fc  c644242801           mov byte ptr [esp + 0x28], 1
// 005f4801  e8aaf2ffff           call 0x5f3ab0
// 005f4806  50                   push eax
// 005f4807  8bce                 mov ecx, esi
// 005f4809  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005f480e  e8cd38e9ff           call 0x4880e0
// 005f4813  8b442434             mov eax, dword ptr [esp + 0x34]
// 005f4817  50                   push eax
// 005f4818  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005f481d  e840b40300           call 0x62fc62
// 005f4822  6a18                 push 0x18
// 005f4824  c70620427b00         mov dword ptr [esi], 0x7b4220
// 005f482a  e8c7b60300           call 0x62fef6
// 005f482f  83c408               add esp, 8
// 005f4832  85c0                 test eax, eax
// 005f4834  7422                 je 0x5f4858
// 005f4836  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005f483a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005f483e  894808               mov dword ptr [eax + 8], ecx
// 005f4841  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005f4845  c700bc077c00         mov dword ptr [eax], 0x7c07bc
// 005f484b  897004               mov dword ptr [eax + 4], esi
// 005f484e  895010               mov dword ptr [eax + 0x10], edx
// 005f4851  894814               mov dword ptr [eax + 0x14], ecx
// 005f4854  8bf8                 mov edi, eax
// 005f4856  eb02                 jmp 0x5f485a
// 005f4858  33ff                 xor edi, edi
// 005f485a  8b4618               mov eax, dword ptr [esi + 0x18]
// 005f485d  3bf8                 cmp edi, eax
// 005f485f  7409                 je 0x5f486a
// 005f4861  50                   push eax
// 005f4862  e8fbb30300           call 0x62fc62
// 005f4867  83c404               add esp, 4
// 005f486a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f486e  897e18               mov dword ptr [esi + 0x18], edi
// 005f4871  5f                   pop edi
// 005f4872  8bc6                 mov eax, esi
// 005f4874  64890d00000000       mov dword ptr fs:[0], ecx
// 005f487b  5e                   pop esi
// 005f487c  83c414               add esp, 0x14
// 005f487f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
